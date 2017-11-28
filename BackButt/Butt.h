#include "wx/wx.h"

class Butt : public wxFrame
{
public:
    Butt(const wxString &title);

    //Event handlers
    void OnButtonClick(wxCommandEvent& event);
private:
    DECLARE_EVENT_TABLE()
};
