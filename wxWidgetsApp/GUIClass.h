///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUICLASS_H__
#define __GUICLASS_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class GUIClass
///////////////////////////////////////////////////////////////////////////////
class GUIClass : public wxFrame 
{
	private:
	
	protected:
		wxPanel* basePanel;
		wxButton* button0;
		wxButton* button1;
		wxButton* button2;
		wxButton* button3;
		wxButton* button4;
		wxButton* button5;
		wxButton* button6;
		wxButton* button7;
		wxButton* button8;
		wxButton* resetButton;
		wxButton* exitButton;
		wxMenuBar* menuBar;
		wxMenu* fileMenu;
		wxStatusBar* statusBar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void onButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void onResetEvent( wxCommandEvent& event ) { event.Skip(); }
		virtual void onExitEvent( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIClass( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,508 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~GUIClass();
	
};

#endif //__GUICLASS_H__
