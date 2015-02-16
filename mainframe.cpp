#include <stdio.h>
#include <stdlib.h>
#include <wx/wx.h>
#include <wx/accel.h>

#include "mainframe.h"

BEGIN_EVENT_TABLE(CMainFrame, wxFrame)
END_EVENT_TABLE()



CMainFrame::CMainFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame((wxFrame *)NULL, -1, title, pos, size) 
{
} //constructor

void CMainFrame::CreateMyToolbar()
{
    m_toolbar=CreateToolBar(wxNO_BORDER | wxTB_HORIZONTAL,TOOLBAR_TOOLS);
    wxBitmap toolBarBitmaps[4];
    toolBarBitmaps[0] = wxBitmap(wxT("new.bmp"),wxBITMAP_TYPE_BMP);
    toolBarBitmaps[1] = wxBitmap(wxT("open.bmp"),wxBITMAP_TYPE_BMP);
    toolBarBitmaps[2] = wxBitmap(wxT("save.bmp"),wxBITMAP_TYPE_BMP);
    toolBarBitmaps[3] = wxBitmap(wxT("draw.bmp"),wxBITMAP_TYPE_BMP);
    m_toolbar->SetToolBitmapSize(wxSize(toolBarBitmaps[0].GetWidth(),
                                 toolBarBitmaps[0].GetHeight()));
    m_toolbar->AddTool(MENU_NEW, wxT("Nouveau"), toolBarBitmaps[0]);
    m_toolbar->AddTool(MENU_OPEN, wxT("Ouvrir"), toolBarBitmaps[1]);
    m_toolbar->AddTool(MENU_SAVE, wxT("Sauvegarder"), toolBarBitmaps[2]);
    m_toolbar->AddSeparator();
    m_toolbar->AddCheckTool(MENU_DRAW, wxT("Dessiner"), toolBarBitmaps[3]);

    m_toolbar->Realize();
    SetToolBar(m_toolbar);
}

    void CMainFrame::OnNew(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnOpen(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnSave(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnExit(wxCommandEvent& event)
    {
        Close(TRUE);
    }

    void CMainFrame::OnSize(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnColor(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnManage(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnVersion(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnToolbar(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnDraw(wxCommandEvent& event)
    {

    }

    void CMainFrame::OnTools(wxCommandEvent& event)
    {

    }