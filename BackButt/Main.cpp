#include "wx\wx.h"
#include "Background.h"
#include "Butt.h"

class MainApp : public wxApp
{
public:
    virtual bool OnInit();
};

DECLARE_APP(MainApp)
IMPLEMENT_APP(MainApp)

bool MainApp::OnInit()
{
    Background *frame = new Background(wxT("Peddler Effective Way"));
    frame->Show(true);
    return true;
}
