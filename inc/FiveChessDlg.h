// FiveChessDlg.h : header file
//

#if !defined(AFX_FIVECHESSDLG_H__E2C58E22_5D6D_4059_A0AF_CE86F297AF00__INCLUDED_)
#define AFX_FIVECHESSDLG_H__E2C58E22_5D6D_4059_A0AF_CE86F297AF00__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFiveChessDlg dialog

#include "SetupDlg.h"
#include "Connect.h"
#include "ConnectData.h"
#include "Board.h"

class CFiveChessDlg : public CDialog
{
// Construction
public:
	void NewGameStart(BOOL isHost);
	void SetMenuState(BOOL bEnable);		//���ò˵�״̬
	void Accept();							//�������˿��������ӳɹ�ʱ����
	void Connect();							//�ͻ����������ӳɹ�����
	void Send(MSGSTRUCT * pmsg);			//��������
	void Restart();							//���¿�ʼ��Ϸ

	CFiveChessDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFiveChessDlg)
	enum { IDD = IDD_FIVECHESS_DIALOG };
	CBoard    m_board;			//�����̶���
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFiveChessDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

public:
	CConnect m_conncet;			//�����׽���
	CConnect m_sock;			//ʹ���׽���
	BOOL     m_bIsConnect;		//���ӱ�־
// Implementation
protected:
	HICON m_hIcon;				//ͼ�����
	CMenu m_main_menu;			//���˵�����
	CSetupDlg m_setup_dlg;		//���öԻ������

	// Generated message map functions
	//{{AFX_MSG(CFiveChessDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnUpdateNewGameMenu(CCmdUI* pCmdUI);
	afx_msg void OnUpdateExitGameMenu(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDrawGameMenu(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIVECHESSDLG_H__E2C58E22_5D6D_4059_A0AF_CE86F297AF00__INCLUDED_)
