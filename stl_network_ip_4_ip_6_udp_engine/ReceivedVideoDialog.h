#pragma once
#include "afxwin.h"

class Cstl_network_ip_4_ip_6_udp_engineDialog;

// ���������� ���� CReceivedVideoDialog

class CReceivedVideoDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CReceivedVideoDialog)

public:
	CReceivedVideoDialog(CWnd* pParent = NULL);   // ����������� �����������
	virtual ~CReceivedVideoDialog();

// ������ ����������� ����
	enum { IDD = IDD_DIALOG_VIDEO_RECEIVED };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	CStatic static_image;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg void OnClose();

	Cstl_network_ip_4_ip_6_udp_engineDialog *main_dialog;
};
