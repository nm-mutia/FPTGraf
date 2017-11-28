#include "Butt.h"
#include "Background.h"
#include "BackgroundWind.h"

BEGIN_EVENT_TABLE(Butt, wxFrame)
    EVT_BUTTON (wxID_ANY, Butt::OnButtonClick)
END_EVENT_TABLE()

Butt::Butt(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title)
{
    //membuat panel dan memasangkan ke MyFrame
    wxPanel *panel = new wxPanel(this, wxID_ANY);
    //membuat button dan memasangkan ke panel
    //this->window = new BackgroundWind(this);
    wxButton* button = new wxButton(panel, wxID_ANY, wxT("START"),
    wxPoint(640, 100), wxDefaultSize);
}

void Butt::OnButtonClick(wxCommandEvent& event)
{
    wxMessageBox(wxT("Peddler Effective Way siap dijalankan"));
}
