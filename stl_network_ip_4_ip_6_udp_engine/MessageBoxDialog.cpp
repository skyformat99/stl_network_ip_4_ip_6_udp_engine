// MessageBoxDialog.cpp: ���� ����������
//

#include "stdafx.h"
#include "stl_network_ip_4_ip_6_udp_engine.h"
#include "MessageBoxDialog.h"
#include "afxdialogex.h"


// ���������� ���� CMessageBoxDialog

IMPLEMENT_DYNAMIC(CMessageBoxDialog, CDialogEx)

CMessageBoxDialog::CMessageBoxDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMessageBoxDialog::IDD, pParent)
{

	EnableAutomation();

}

CMessageBoxDialog::~CMessageBoxDialog()
{
}

void CMessageBoxDialog::OnFinalRelease()
{
	// ����� ����� ����������� ��������� ������ �� ������ �������������,
	// ���������� OnFinalRelease. ������� ����� �������������
	// ������ ������. ����� ������� �������� ������ ��������
	// �������������� �������, ����������� ������ �������.

	CDialogEx::OnFinalRelease();
}

void CMessageBoxDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_MESSAGE, message_text);
}


BEGIN_MESSAGE_MAP(CMessageBoxDialog, CDialogEx)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CMessageBoxDialog, CDialogEx)
END_DISPATCH_MAP()

// ����������: �� �������� ��������� ��� IID_IMessageBoxDialog, ����� ���������� ���������� � ����� ������ ����� ��������
//  �� VBA. ���� IID ������ ��������������� GUID, ���������� � 
//  disp-����������� � ����� .IDL.

// {AEE04BD7-E7D1-48DB-907F-16F11B1C3486}
static const IID IID_IMessageBoxDialog =
{ 0xAEE04BD7, 0xE7D1, 0x48DB, { 0x90, 0x7F, 0x16, 0xF1, 0x1B, 0x1C, 0x34, 0x86 } };

BEGIN_INTERFACE_MAP(CMessageBoxDialog, CDialogEx)
	INTERFACE_PART(CMessageBoxDialog, IID_IMessageBoxDialog, Dispatch)
END_INTERFACE_MAP()


// ����������� ��������� CMessageBoxDialog


void CMessageBoxDialog::SetParameters(LPCWSTR lpszText, LPCWSTR lpszCaption)
{
	member_caption = lpszCaption;
	member_text = lpszText;
}


BOOL CMessageBoxDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	SetWindowTextW(member_caption);
	message_text.SetWindowTextW(member_text);

	// TODO:  �������� �������������� �������������

	return TRUE;  // return TRUE unless you set the focus to a control
	// ����������: �������� ������� OCX ������ ���������� �������� FALSE
}
