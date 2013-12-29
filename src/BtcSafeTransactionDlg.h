
// BtcSafeTransactionDlg.h : ͷ�ļ�
//

#pragma once

#include <sdk/shared_ptr.h>
#include <string>

// CBtcSafeTransactionDlg �Ի���
class CBtcSafeTransactionDlg : public CDialog
{
// ����
public:
	CBtcSafeTransactionDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_BTCSAFETRANSACTION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
protected:
	shared_ptr<std::string> GetInputPassword();
	void InsertLog(const std::string& str);
	void UpdateDisableControl();
public:
	afx_msg void OnClose();
	afx_msg void OnEnChangeEditSendAmount();
	afx_msg void OnBnClickedButtonGetP2psignAddr();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButtonSendMoneyToP2psigAddr();
	afx_msg void OnBnClickedButtonEditP2psigAddrLabel();
	afx_msg void OnBnClickedButtonSelRecvAddr();
	afx_msg void OnBnClickedButtonRecvFromP2psigAddr();
	afx_msg void OnBnClickedButtonSigEndAndSend();
	afx_msg void OnBnClickedButtonConfig();
	afx_msg void OnBnClickedButtonEditP2psigAddrLabelTempl();
	afx_msg void OnBnClickedRadioModeSend1();
	afx_msg void OnBnClickedRadio1ModeRecv2();
	afx_msg void OnBnClickedRadio1ModeRecv1();
	afx_msg void OnBnClickedRadioModeSend2();
	afx_msg void OnBnClickedButtonWebView();
};
