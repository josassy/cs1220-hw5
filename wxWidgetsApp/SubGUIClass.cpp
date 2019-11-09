#include "SubGUIClass.h"

SubGUIClass::SubGUIClass( wxWindow* parent )
:
GUIClass( parent )
{
  // Set button pointers to button array
  buttonArray[0] = button0;
  buttonArray[1] = button1;
  buttonArray[2] = button2;
  buttonArray[3] = button3;
  buttonArray[4] = button4;
  buttonArray[5] = button5;
  buttonArray[6] = button6;
  buttonArray[7] = button7;
  buttonArray[8] = button8;

  // Initialize button array
  for (int i = 0; i < 9; i++) {
    wxString x = wxString::Format("%i", i);
    buttonArray[i]->SetName(x);
  }
 
  // reset game for first play
  resetGame();
}

void SubGUIClass::onButtonClick( wxCommandEvent& event )
{
  // If game is over, ignore button clicks
  if (gameOver) {
    return;
  }

  // Get button that was clicked
  wxButton* b = (wxButton*)event.GetEventObject();
  
  // Get button name and convert to integer
  wxString name = b->GetName();
  int num = atoi(name.char_str());
  
  // Check if button has already been clicked; ignore
  if (gameBoard[num] != 0) {
    return;
  }

  // Update game attributes based on turn
  if (isBlueTurn) {
    gameBoard[num] = 1;
    b->SetBackgroundColour(wxColor(L"blue"));
  }
  else {
    gameBoard[num] = 4;
    b->SetBackgroundColour(wxColor(L"orange"));
  }

  updateGame();
}

// reset all game variables
void SubGUIClass::onResetEvent( wxCommandEvent& event )
{
  resetGame();
}

void SubGUIClass::onExitEvent( wxCommandEvent& event )
{
  Close();
}

void SubGUIClass::OnClose(wxCloseEvent& event)
{
  wxMessageDialog *d = new wxMessageDialog(
    this, L"Do you want to exit?", L"Confirm Exit", wxYES | wxNO | wxYES_DEFAULT);
  int answer = d->ShowModal();
  if (answer != wxID_YES) {
    event.Veto();
    return;
  }
  Destroy();
}

// Update game attributes after button click, and check for game end
// Called by onButtonClick handler
void SubGUIClass::updateGame()
{
  // set status bar text based on turn
  statusBar->SetStatusText(isBlueTurn ? L"Blue's Turn" : L"Orange's Turn");
  if (isGameOver()) {
    endGame();
  }
  // change turn
  isBlueTurn = !isBlueTurn;
}

// Determine if game is over
bool SubGUIClass::isGameOver() {
  int columnSum = 0;
  int rowSum = 0;

  // check columns and rows
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      columnSum += gameBoard[i + j * 3];
      rowSum += gameBoard[i * 3 + j];
    }
    // If match of 3*1 or 3*4 found, game is over
    if (columnSum == 3 || columnSum == 12 || rowSum == 3 || rowSum == 12) {
      return true;
    }
    columnSum = 0;
    rowSum = 0;
  }

  // check diagonals (using columnSum and rowSum variables again)
  for (int i = 0; i < 3; i++) {
    columnSum += gameBoard[i * 3 + i];
    rowSum += gameBoard[i * 3 + 2 - i];
  }
  // If match of 3*1 or 3*4 found, end game
  if (columnSum == 3 || columnSum == 12 || rowSum == 3 || rowSum == 12) {
    return true;
  }

  // If we got this far, game is not over
  return false;
}

// Reset game interface for a fresh start
void SubGUIClass::resetGame()
{
  // Set gameBoard array and buttons to default
  for (int i = 0; i < 9; i++) {
    gameBoard[i] = 0;
    buttonArray[i]->SetBackgroundColour(wxColor(L"black"));
  }

  // Blue gets first turn
  isBlueTurn = true;
  gameOver = false;
}

void SubGUIClass::endGame()
{
  gameOver = true;
  wxString winner = isBlueTurn ? L"Blue" : L"Orange";
  wxString gameStatus = L"Game is over. " + winner + L" wins.";
  statusBar->SetStatusText(gameStatus);
  wxMessageDialog *d = new wxMessageDialog(
    this, gameStatus + L"\nDo you want to play again?", L"Game Over", 
    wxYES | wxNO | wxYES_DEFAULT
  );
  int answer = d->ShowModal();
  if (answer == wxID_YES) {
    resetGame();
  }
  else {
    Close();
  }
}
