#pragma once
#include "afxwin.h"

#include "resource.h"


// ���������� ���� CMessageBoxDialog

class CMessageBoxDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CMessageBoxDialog)

public:
	CMessageBoxDialog(CWnd* pParent = NULL);   // ����������� �����������
	virtual ~CMessageBoxDialog();

	virtual void OnFinalRelease();
	
	void SetParameters(LPCWSTR lpszText, LPCWSTR lpszCaption);

// ������ ����������� ����
	enum { IDD = IDD_DIALOG_MESSAGE_BOX };

protected:

	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()

	CString member_caption;
	CString member_text;

public:
	CStatic message_text;
	virtual BOOL OnInitDialog();
};
