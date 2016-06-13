#include "stdafx.h"
#include "Setting.h"

BYTE g_signkey[] = { 0x91,0x93,0xcc,0x66,0x2a,0x1c,0xe,0xc1,
0x35,0xec,0x71,0xfb,0x7,0x19,0x4b,0x38,
0x15,0xf1,0x43,0xf5,0x7c,0xd2,0xb5,0x9a,
0xe3,0xdd,0xdb,0xe0,0xf1,0x74,0x36,0xd };

CSetting::CSetting()
{
	m_nResolutionWidth = 640;
	m_nResolutionHeight = 480;
	m_bMic = TRUE;
	m_bAux = TRUE;

	m_dwAppId = 1;
	memcpy(m_signkey, g_signkey, 32);
}


CSetting::~CSetting()
{
}
