
// stl_network_ip_4_ip_6_udp_engine.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// Cstl_network_ip_4_ip_6_udp_engineApp:
// � ���������� ������� ������ ��. stl_network_ip_4_ip_6_udp_engine.cpp
//

class Cstl_network_ip_4_ip_6_udp_engineApp : public CWinApp
{
public:
	Cstl_network_ip_4_ip_6_udp_engineApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern Cstl_network_ip_4_ip_6_udp_engineApp theApp;