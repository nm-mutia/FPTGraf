/***************************************************************
 * Name:      ImageViewerApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2017-11-26
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "ImageViewerApp.h"
#include "ImageViewerMain.h"

IMPLEMENT_APP(ImageViewerApp);

bool ImageViewerApp::OnInit()
{
    
    ImageViewerDialog* dlg = new ImageViewerDialog(0L, _("wxWidgets Application Template"));
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
