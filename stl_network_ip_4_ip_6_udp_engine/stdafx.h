
// stdafx.h: �������� ���� ��� ���������� ����������� ��������� ������
//��� ���������� ������ ��������, ����� ������������,
// �� ����� ����������

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // ��������� ����� ������������ ���������� �� ���������� Windows
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ��������� ������������ CString ����� ������

// ��������� ������� ������� ��������� ����� � ����� ������������ �������������� MFC
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // �������� � ����������� ���������� MFC
#include <afxext.h>         // ���������� MFC


#include <afxdisp.h>        // ������ ������������� MFC



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // ��������� MFC ��� ������� ��������� ���������� Internet Explorer 4
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // ��������� MFC ��� ������� ��������� ���������� Windows
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // ��������� MFC ��� ���� � ������� ����������


#include <afxsock.h>            // ���������� ������� MFC


#include <atlbase.h>

//#undef _WTL_USE_CSTRING
//#undef __ATLSTR_H__
//#include <atlapp.h>

#include <comutil.h>

#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <string>
#include <fstream>
#include <deque>
#include <map>
#include <algorithm>


#define BOOST_THREAD_USES_DATETIME

#include "boost/ref.hpp"
#include "boost/bind.hpp"
#include "boost/thread.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"

#include "boost/shared_ptr.hpp"
#include "boost/enable_shared_from_this.hpp"
#include "util/boost-shared_ptr.hpp"

#include "boost/scoped_array.hpp"

#include "boost/foreach.hpp"
#define boost_foreach BOOST_FOREACH

#include "boost/format.hpp"

#include "boost/thread.hpp"

#include "util/debug_report.h"

const int ENGINE_WINDOWS_SIZE_CX = 640;
const int ENGINE_WINDOWS_SIZE_CY = 480;


#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


