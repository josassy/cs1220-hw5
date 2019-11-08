///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUIClass.h"

///////////////////////////////////////////////////////////////////////////

GUIClass::GUIClass( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 200,200 ), wxDefaultSize );
	
	wxBoxSizer* baseSizer;
	baseSizer = new wxBoxSizer( wxVERTICAL );
	
	basePanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	basePanel->SetForegroundColour( wxColour( 255, 255, 255 ) );
	basePanel->SetMinSize( wxSize( 200,200 ) );
	
	wxBoxSizer* sizer0;
	sizer0 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* sizer00;
	sizer00 = new wxGridSizer( 3, 3, 0, 0 );
	
	sizer00->SetMinSize( wxSize( 240,240 ) ); 
	button0 = new wxBitmapButton( basePanel, wxID_ANY, wxBitmap( wxT("res/testx.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 80,80 ), 0 );
	button0->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button0, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button1 = new wxBitmapButton( basePanel, wxID_ANY, wxBitmap( wxT("res/o.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 80,80 ), 0 );
	button1->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button1, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button2 = new wxBitmapButton( basePanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 80,80 ), 0 );
	button2->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button2, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button3 = new wxBitmapButton( basePanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 80,80 ), 0 );
	button3->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button3, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button4 = new wxBitmapButton( basePanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 80,80 ), 0 );
	button4->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button4, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button5 = new wxBitmapButton( basePanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 80,80 ), 0 );
	button5->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button5, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button6 = new wxBitmapButton( basePanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 80,80 ), 0 );
	button6->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button6, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button7 = new wxBitmapButton( basePanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 80,80 ), 0 );
	button7->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button7, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button8 = new wxBitmapButton( basePanel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 80,80 ), 0 );
	button8->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button8, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	sizer0->Add( sizer00, 10, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 0, 2, 0, 0 );
	
	resetButton = new wxButton( basePanel, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( resetButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	exitButton = new wxButton( basePanel, wxID_ANY, wxT("Exit"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( exitButton, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	sizer0->Add( gSizer2, 1, wxEXPAND, 5 );
	
	basePanel->SetSizer( sizer0 );
	basePanel->Layout();
	sizer0->Fit( basePanel );
	baseSizer->Add( basePanel, 1, wxEXPAND | wxALL, 0 );
	
	this->SetSizer( baseSizer );
	this->Layout();
	menuBar = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	wxMenuItem* exitMenuItem;
	exitMenuItem = new wxMenuItem( fileMenu, wxID_ANY, wxString( wxT("Exit...") ) , wxEmptyString, wxITEM_NORMAL );
	fileMenu->Append( exitMenuItem );
	
	menuBar->Append( fileMenu, wxT("File") ); 
	
	this->SetMenuBar( menuBar );
	
	m_statusBar1 = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
}

GUIClass::~GUIClass()
{
}