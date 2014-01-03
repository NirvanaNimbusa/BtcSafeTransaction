#pragma once

#include <sdk/shared_ptr.h>
#include <string>
// CBookListDlg �Ի���

class CBookListDlg : public CDialog
{
    DECLARE_DYNAMIC( CBookListDlg )

public:
    CBookListDlg( shared_ptr<std::string> pResultAddr, bool NotInsertMulSignAddress = true,
                  CWnd* pParent = NULL );  // ��׼���캯��
    virtual ~CBookListDlg();

// �Ի�������
    enum { IDD = IDD_DIALOG_BOOK };
protected:
    shared_ptr<std::string> m_pStr;
    bool m_HideMulSignAddress;
protected:
    virtual BOOL OnInitDialog();
    virtual void DoDataExchange( CDataExchange* pDX );  // DDX/DDV ֧��

    DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedOk();
};
