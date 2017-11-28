#include "MyFrame.h"

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON (wxID_ANY, MyFrame::OnButtonClick)
END_EVENT_TABLE()

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title)
{
    //membuat panel dan memasangkan ke MyFrame
    wxPanel *panel = new wxPanel(this, wxID_ANY);
    //membuat button dan memasangkan ke panel
    wxButton* button = new wxButton(panel, wxID_ANY, wxT("START"),
    wxPoint(640, 100), wxDefaultSize);
}

void MyFrame::OnButtonClick(wxCommandEvent& event)
{
    wxMessageBox(wxT("Peddler Effective Way siap dijalankan"));
}
