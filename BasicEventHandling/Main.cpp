#include "wx\wx.h"
#include "MyFrame.h"

class MainApp : public wxApp
{
public:
    virtual bool OnInit();
};

DECLARE_APP(MainApp)
IMPLEMENT_APP(MainApp)

bool MainApp::OnInit()
{
    MyFrame *frame = new MyFrame(wxT("Basic Event Handling"));
    frame->Show(true);
    return true;
}
