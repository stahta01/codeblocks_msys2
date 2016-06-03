/*
 * This file is part of the Code::Blocks IDE and licensed under the GNU Lesser General Public License, version 3
 * http://www.gnu.org/licenses/lgpl-3.0.html
 */

#ifndef SDK_COMMON_H
#define SDK_COMMON_H

//This file should be included only by sdk.h and sdk_precomp.h
//It includes all the common and necessary header files for precompilation.

/*
 * Enable backwards-compatibility for gcc 3.3 and lower.
 * Although the compiler does not support precompiled headers, the build might still use them.
 * We might significantly reduce the compile time for old compilers, by undefining CB_PRECOMP and thus
 * not including every header file twice.
 * This also allows us to reliably shortcut some includes for compilers that *do* support precompilation.
 */
#if defined(__GNUC__) && !defined(__APPLE__)
    #if ( (__GNUC__ < 3) || ( (__GNUC__ == 3) && (__GNUC_MINOR__ < 4) ) )
        #undef CB_PRECOMP
    #endif
#endif // __GNUC__ && !__APPLE__

#if defined(NOPCH)
    #undef CB_PRECOMP
#endif // NOPCH

#if ( defined(CB_PRECOMP) && !defined(WX_PRECOMP) )
    #define WX_PRECOMP
#endif // CB_PRECOMP

// basic wxWidgets headers : this one itself will check for precompiled headers
// and if so will include a list of wx headers, at the bottom we add some more headers
// in the case of precompilation (note : some headers are in both lists)
// so even if NO CB_PRECOMP we can still have WX_PRECOMP turned on in this "wxprec" header
#include <wx/wxprec.h>

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#include "prep.h" // this is deliberately not inside the #ifdef block

#ifdef CB_PRECOMP

    // Some common non GUI wxWidgets Headers
    #include <wx/app.h>          // wxBase
    #include <wx/arrstr.h>       // wxBase
    #include <wx/choicdlg.h>     // wxBase
    #include <wx/confbase.h>     // wxBase not in wx/wx.h
    #include <wx/datetime.h>     // wxBase not in wx/wx.h
    #include <wx/dir.h>          // wxBase not in wx/wx.h
    #include <wx/dynarray.h>     // wxBase
    #include <wx/event.h>        // wxBase
    #include <wx/file.h>         // wxBase not in wx/wx.h
    #include <wx/filename.h>     // wxBase not in wx/wx.h
    #include <wx/fs_zip.h>       // wxBase not in wx/wx.h
    #include <wx/hashmap.h>      // wxBase
    #include <wx/intl.h>         // wxBase
    #include <wx/list.h>         // wxBase
    #include <wx/log.h>          // wxBase
    #include <wx/process.h>      // wxBase not in wx/wx.h
    #include <wx/regex.h>        // wxBase not in wx/wx.h
    #include <wx/socket.h>       // wxNet  not in wx/wx.h
    #include <wx/string.h>       // wxBase
    #include <wx/thread.h>       // wxBase not in wx/wx.h
    #include <wx/timer.h>        // wxBase
    #include <wx/txtstrm.h>      // wxBase not in wx/wx.h
    #include <wx/utils.h>        // wxBase
    #include <wx/wfstream.h>     // wxBase not in wx/wx.h

    // Some common GUI wxWidgets Headers
    #include <wx/bmpbuttn.h>     // wxCore
    #include <wx/button.h>       // wxCore
    #include <wx/checkbox.h>     // wxCore
    #include <wx/checklst.h>     // wxCore
    #include <wx/choice.h>       // wxCore
    #include <wx/colordlg.h>     // wxCore not in wx/wx.h
    #include <wx/combobox.h>     // wxCore
    #include <wx/dcclient.h>     // wxCore
    #include <wx/dialog.h>       // wxCore
    #include <wx/filedlg.h>      // wxCore
    #include <wx/font.h>         // wxCore
    #include <wx/frame.h>        // wxCore
    #include <wx/image.h>        // wxCore
    #include <wx/imaglist.h>     // wxCore not in wx/wx.h
    #include <wx/listbox.h>      // wxCore
    #include <wx/listctrl.h>     // wxCore not in wx/wx.h
    #include <wx/menu.h>         // wxCore
    #include <wx/menuitem.h>     // wxCore
    #include <wx/msgdlg.h>       // wxCore
    #include <wx/notebook.h>     // wxCore not in wx/wx.h
    #include <wx/panel.h>        // wxCore
    #include <wx/print.h>        // wxCore not in wx/wx.h
    #include <wx/radiobox.h>     // wxCore
    #include <wx/radiobut.h>     // wxCore
    #include <wx/sizer.h>        // wxCore
    #include <wx/slider.h>       // wxCore
    #include <wx/spinctrl.h>     // wxCore not in wx/wx.h
    #include <wx/splitter.h>     // wxCore not in wx/wx.h
    #include <wx/statbmp.h>      // wxCore
    #include <wx/stattext.h>     // wxCore
    #include <wx/textctrl.h>     // wxCore
    #include <wx/textdlg.h>      // wxCore
    #include <wx/toolbar.h>      // wxCore
    #include <wx/treectrl.h>     // wxCore not in wx/wx.h
    #include <wx/xrc/xmlres.h>   // wxXRC  not in wx/wx.h


    #include "wx/wxscintilla.h"  // Code::Blocks/wxscintilla header

    // basic headers
    #include "settings.h"
    #include "globals.h"
    #include "sdk_events.h"
    #include "cbexception.h"

    // absolute base classes
    #include "logger.h"
    #include "editorbase.h"
    #include "cbeditor.h"
    #include "compileoptionsbase.h"
    #include "compiletargetbase.h"
    #include "projectbuildtarget.h"
    #include "projectfile.h"
    #include "cbplugin.h"
    #include "cbproject.h"
    #include "cbtool.h"
    #include "cbworkspace.h"
    #include "compilerfactory.h"
    #include "compiler.h"
    #include "workspaceloader.h"
    #include "editorcolourset.h"
    #include "pipedprocess.h"
    #include "scrollingdialog.h"
    #include "cbauibook.h"


    // managers
    #include "manager.h"
    #include "configmanager.h"
    #include "editormanager.h"
    #include "logmanager.h"
    #include "projectmanager.h"
    #include "menuitemsmanager.h"
    #include "scriptingmanager.h"
    #include "toolsmanager.h"
    #include "templatemanager.h"
    #include "macrosmanager.h"
    #include "pluginmanager.h"
    #include "personalitymanager.h"
    #include "uservarmanager.h"
    #include "filemanager.h"

    // other base files
    #include "xtra_res.h"
    #include "safedelete.h"
    #include "infowindow.h"
    #include "licenses.h"

#endif // CB_PRECOMP

#endif // SDK_COMMON_H
