///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __TICTACTOE_H__
#define __TICTACTOE_H__

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
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class baseFrame
///////////////////////////////////////////////////////////////////////////////
class baseFrame : public wxFrame 
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
	
	public:
		
		baseFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,508 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~baseFrame();
	
};

#endif //__TICTACTOE_H__
