
// BtcSafeTransaction.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "BtcSafeTransaction.h"
#include "BtcSafeTransactionDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBtcSafeTransactionApp

BEGIN_MESSAGE_MAP(CBtcSafeTransactionApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CBtcSafeTransactionApp ����

CBtcSafeTransactionApp::CBtcSafeTransactionApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CBtcSafeTransactionApp ����

CBtcSafeTransactionApp theApp;


// CBtcSafeTransactionApp ��ʼ��

BOOL CBtcSafeTransactionApp::InitInstance()
{

	CWinApp::InitInstance();
	CoInitializeEx(0,0);

	AfxEnableControlContainer();

#if _MFC_VER >= 0x0A00
	// ���� shell ���������Է��Ի������
	// �κ� shell ����ͼ�ؼ��� shell �б���ͼ�ؼ���
	CShellManager *pShellManager = new CShellManager;
#endif

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO: Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

	CBtcSafeTransactionDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: �ڴ˷��ô����ʱ��
		//  ��ȷ�������رնԻ���Ĵ���
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: �ڴ˷��ô����ʱ��
		//  ��ȡ�������رնԻ���Ĵ���
	}

#if _MFC_VER >= 0x0A00
	// ɾ�����洴���� shell ��������
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}
#endif

	// ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
	//  ����������Ӧ�ó������Ϣ�á�
	return FALSE;
}

