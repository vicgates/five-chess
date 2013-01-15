#ifndef __CONNECT_DATA_H__
#define __CONNECT_DATA_H__

// ������Ϣ
#define MSG_PUTSTEP     0x01
// ����������Ϣ
#define MSG_DRAW        0x02
// ͬ�������Ϣ
#define MSG_AGREE_DRAW	0x03
// �ܾ�������Ϣ
#define MSG_REFUSE_DRAW	0x04
// ������Ϣ
#define MSG_EXTERN		0x05

typedef struct _tagMsgStruct {
    USHORT len;
	// ��ϢID
    BYTE msgType;
    // ������Ϣ
    int x;
    int y;
    int color;
    // ������Ϣ����
    BYTE byMsg[128];
} MSGSTRUCT;

#endif