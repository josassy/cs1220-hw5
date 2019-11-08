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
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/string.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
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
		wxBitmapButton* button0;
		wxBitmapButton* button1;
		wxBitmapButton* button2;
		wxBitmapButton* button3;
		wxBitmapButton* button4;
		wxBitmapButton* button5;
		wxBitmapButton* button6;
		wxBitmapButton* button7;
		wxBitmapButton* button8;
		wxButton* resetButton;
		wxButton* exitButton;
		wxMenuBar* menuBar;
		wxMenu* fileMenu;
		wxStatusBar* m_statusBar1;
	
	public:
		
		GUIClass( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,508 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~GUIClass();
	
};

#endif //__GUICLASS_H__
