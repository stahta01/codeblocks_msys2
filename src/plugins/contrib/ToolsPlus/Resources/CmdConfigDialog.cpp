///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 17 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

CmdConfigDialog::CmdConfigDialog( wxWindow* parent, int id, wxPoint pos, wxSize size, int style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Known Commands"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( m_staticText27, 0, wxALL, 5 );
	
	m_commandlist = new wxListBox( this, ID_COMMANDLIST, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer43->Add( m_commandlist, 1, wxALL|wxEXPAND, 1 );
	
	bSizer40->Add( bSizer43, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_butnew = new wxButton( this, ID_NEW, wxT("New"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_butnew, 0, wxLEFT|wxRIGHT, 5 );
	
	m_butcopy = new wxButton( this, ID_COPY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_butcopy, 0, wxLEFT|wxRIGHT, 5 );
	
	m_butdelete = new wxButton( this, ID_DELETE, wxT("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_butdelete, 0, wxRIGHT|wxLEFT, 5 );
	
	bSizer11->Add( 0, 10, 1, wxALL, 5 );
	
	m_butup = new wxButton( this, ID_UP, wxT("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_butup, 0, wxRIGHT|wxLEFT, 5 );
	
	m_butdown = new wxButton( this, ID_DOWN, wxT("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_butdown, 0, wxRIGHT|wxLEFT, 5 );
	
	bSizer40->Add( bSizer11, 0, wxEXPAND, 5 );
	
	bSizer20->Add( bSizer40, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Command Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_staticText11, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_commandname = new wxTextCtrl( this, ID_COMMANDNAME, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_commandname, 2, wxALL, 1 );
	
	bSizer20->Add( bSizer21, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer211;
	bSizer211 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Command Line:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer211->Add( m_staticText12, 0, wxALIGN_CENTER|wxALL, 5 );
	
	bSizer20->Add( bSizer211, 0, wxEXPAND, 5 );
	
	m_command = new wxTextCtrl( this, ID_COMMAND, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_command, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer214;
	bSizer214 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Wildcards:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer214->Add( m_staticText28, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_wildcards = new wxTextCtrl( this, ID_WILDCARDS, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer214->Add( m_wildcards, 1, wxALL, 1 );
	
	m_staticText112 = new wxStaticText( this, wxID_ANY, wxT("Working Directory:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer214->Add( m_staticText112, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_workdir = new wxTextCtrl( this, ID_WORKDIR, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer214->Add( m_workdir, 1, wxALL, 1 );
	
	bSizer20->Add( bSizer214, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer212;
	bSizer212 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Menu Location"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( m_staticText13, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_menuloc = new wxTextCtrl( this, ID_MENULOC, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( m_menuloc, 1, wxALL, 1 );
	
	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Priority"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer212->Add( m_staticText16, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_menulocpriority = new wxSpinCtrl( this, ID_MENULOCPRIORITY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0);
	bSizer212->Add( m_menulocpriority, 0, wxALL, 1 );
	
	bSizer20->Add( bSizer212, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2121;
	bSizer2121 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText131 = new wxStaticText( this, wxID_ANY, wxT("Context Menu Location"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2121->Add( m_staticText131, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_cmenuloc = new wxTextCtrl( this, ID_CMENULOC, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2121->Add( m_cmenuloc, 1, wxALL, 1 );
	
	m_staticText161 = new wxStaticText( this, wxID_ANY, wxT("Priority"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2121->Add( m_staticText161, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_cmenulocpriority = new wxSpinCtrl( this, ID_CMENULOCPRIORITY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0);
	bSizer2121->Add( m_cmenulocpriority, 0, wxALL, 1 );
	
	bSizer20->Add( bSizer2121, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer213;
	bSizer213 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText111 = new wxStaticText( this, wxID_ANY, wxT("Mode:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer213->Add( m_staticText111, 0, wxALIGN_CENTER|wxALL, 5 );
	
	wxString m_modeChoices[] = { wxT("Windowed Console Notepage"), wxT("Code::Blocks Console"), wxT("Standard Shell") };
	int m_modeNChoices = sizeof( m_modeChoices ) / sizeof( wxString );
	m_mode = new wxChoice( this, ID_MODE, wxDefaultPosition, wxDefaultSize, m_modeNChoices, m_modeChoices, 0 );
	bSizer213->Add( m_mode, 0, wxALL|wxEXPAND, 1 );
	
	m_staticText1111 = new wxStaticText( this, wxID_ANY, wxT("Env Vars:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer213->Add( m_staticText1111, 0, wxALIGN_CENTER|wxALL, 5 );
	
	wxString m_envvarsChoices[] = {  };
	int m_envvarsNChoices = sizeof( m_envvarsChoices ) / sizeof( wxString );
	m_envvars = new wxChoice( this, ID_ENVVARS, wxDefaultPosition, wxDefaultSize, m_envvarsNChoices, m_envvarsChoices, 0 );
	bSizer213->Add( m_envvars, 0, wxALL|wxEXPAND, 1 );
	
	bSizer20->Add( bSizer213, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2131;
	bSizer2131 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer20->Add( bSizer2131, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer20 );
	this->Layout();
}
