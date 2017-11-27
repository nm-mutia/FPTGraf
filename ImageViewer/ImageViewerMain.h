/***************************************************************
 * Name:      ImageViewerMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2017-11-26
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef IMAGEVIEWERMAIN_H
#define IMAGEVIEWERMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "ImageViewerApp.h"


#include <wx/button.h>
#include <wx/statline.h>
class ImageViewerDialog: public wxDialog
{
    public:
        ImageViewerDialog(wxDialog *dlg, const wxString& title);
        ~ImageViewerDialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // IMAGEVIEWERMAIN_H
