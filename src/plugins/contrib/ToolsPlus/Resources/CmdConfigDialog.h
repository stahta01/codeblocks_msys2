///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Aug 17 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __noname__
#define __noname__

#include <wx/wx.h>

#include <wx/button.h>
#include <wx/spinctrl.h>
#include <wx/choice.h>

///////////////////////////////////////////////////////////////////////////

#define ID_COMMANDLIST 1000
#define ID_NEW 1001
#define ID_COPY 1002
#define ID_DELETE 1003
#define ID_UP 1004
#define ID_DOWN 1005
#define ID_COMMANDNAME 1006
#define ID_COMMAND 1007
#define ID_WILDCARDS 1008
#define ID_WORKDIR 1009
#define ID_MENULOC 1010
#define ID_MENULOCPRIORITY 1011
#define ID_CMENULOC 1012
#define ID_CMENULOCPRIORITY 1013
#define ID_MODE 1014
#define ID_ENVVARS 1015

///////////////////////////////////////////////////////////////////////////////
/// Class CmdConfigDialog
///////////////////////////////////////////////////////////////////////////////
class CmdConfigDialog : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText27;
		wxListBox* m_commandlist;
		wxButton* m_butnew;
		wxButton* m_butcopy;
		wxButton* m_butdelete;
		
		wxButton* m_butup;
		wxButton* m_butdown;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_commandname;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_command;
		wxStaticText* m_staticText28;
		wxTextCtrl* m_wildcards;
		wxStaticText* m_staticText112;
		wxTextCtrl* m_workdir;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_menuloc;
		wxStaticText* m_staticText16;
		wxSpinCtrl* m_menulocpriority;
		wxStaticText* m_staticText131;
		wxTextCtrl* m_cmenuloc;
		wxStaticText* m_staticText161;
		wxSpinCtrl* m_cmenulocpriority;
		wxStaticText* m_staticText111;
		wxChoice* m_mode;
		wxStaticText* m_staticText1111;
		wxChoice* m_envvars;
	
	public:
		CmdConfigDialog( wxWindow* parent, int id = wxID_ANY, wxPoint pos = wxDefaultPosition, wxSize size = wxSize( 544,394 ), int style = wxTAB_TRAVERSAL );
	
};

#endif //__noname__
