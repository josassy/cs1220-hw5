///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ticTacToe.h"

///////////////////////////////////////////////////////////////////////////

baseFrame::baseFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 200,200 ), wxDefaultSize );
	
	wxBoxSizer* baseSizer;
	baseSizer = new wxBoxSizer( wxVERTICAL );
	
	basePanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	basePanel->SetMinSize( wxSize( 200,200 ) );
	
	wxBoxSizer* sizer0;
	sizer0 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* sizer00;
	sizer00 = new wxGridSizer( 3, 3, 0, 0 );
	
	sizer00->SetMinSize( wxSize( 240,240 ) ); 
	button0 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	button0->SetForegroundColour( wxColour( 0, 0, 0 ) );
	button0->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	sizer00->Add( button0, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALL, 2 );
	
	button1 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	sizer00->Add( button1, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button2 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	sizer00->Add( button2, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button3 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	sizer00->Add( button3, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button4 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	sizer00->Add( button4, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button5 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	sizer00->Add( button5, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button6 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	sizer00->Add( button6, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button7 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	sizer00->Add( button7, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	button8 = new wxButton( basePanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,80 ), 0 );
	sizer00->Add( button8, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );
	
	sizer0->Add( sizer00, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* sizer01;
	sizer01 = new wxBoxSizer( wxHORIZONTAL );
	
	sizer0->Add( sizer01, 0, wxEXPAND, 5 );
	
	basePanel->SetSizer( sizer0 );
	basePanel->Layout();
	sizer0->Fit( basePanel );
	baseSizer->Add( basePanel, 1, wxEXPAND | wxALL, 5 );
	
	this->SetSizer( baseSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
}

baseFrame::~baseFrame()
{
}
