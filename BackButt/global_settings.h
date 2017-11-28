#ifndef GLOBAL_SETTINGS_H
#define GLOBAL_SETTINGS_H

#include <wx/wx.h>
#include <wx/stdpaths.h>
#include <wx/filename.h>

// ************************************************************************
//                            SIZES
// ************************************************************************
// The size of the application window.
const wxSize g_appSize(640,480);

// The size of the image draw in the background of all screens.
const wxSize g_bgImageSize( 640,480 );

// ************************************************************************
//                            FONT NAMES
// ************************************************************************
const wxString g_fontNameTitle(_T("Calibry"));

// ************************************************************************
//                            FONTS
// ************************************************************************
const wxFont g_fontTitle( 24, 74, 90, 92, false, g_fontNameTitle );


// ************************************************************************
//                            TEXT
// ************************************************************************
// Application name that will appear in the title bar.
const wxString g_appName(_T("Peddler Effective Way"));

// Text in titles
const wxString g_mainMenuTitle(_T("Peddler Effective Way"));


// Text in buttons
const wxString g_txtFile(_T("&File"));
/*const wxString g_txtImport(_T("&Import"));
const wxString g_txtExport(_T("&Export"));
const wxString g_txtAbout(_T("&About"));*/

// ************************************************************************
//                            PATHS
// ************************************************************************
// Full path to image used as background in all screens.
const wxString g_pathToBgImage("images\\bg.jpg");


// ************************************************************************
//                            COLORS
// ************************************************************************
const wxColour g_TitleColor( 0, 0, 255 );
const wxColour g_PanelForegroundColor( 255, 255, 255 );
const wxColour g_PanelBackroundColor( 255, 255, 255 );

#endif //GLOBAL_SETTINGS_H
