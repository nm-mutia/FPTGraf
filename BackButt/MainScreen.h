#ifndef MAIN_SCREEN_H
#define MAIN_SCREEN_H

#include <wx/wx.h>
#include "global_settings.h"
#include "BaseScreen.h"

class TransparentStaticText;

class MainScreen : public BaseScreen
{
 private:

 protected:
        TransparentStaticText *m_txtTitle;
 wxButton *m_btnFile;
 /*wxButton *m_btnImport;
 wxButton *m_btnExport;
 wxButton *m_btnAbout;*/


 public:

 MainScreen( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = g_appSize, long style = wxTAB_TRAVERSAL );
 virtual ~MainScreen();

 void OnButtonClick(wxCommandEvent& event);
};

#endif // MAIN_SCREEN_H
