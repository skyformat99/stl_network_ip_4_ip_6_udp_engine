#include "stdafx.h"
#include "NetworkManager.h"


struct NetworkManager::Impl
{
	Impl()
	{
	}

	~Impl()
	{
	}

	WSAData wsadata;
};


NetworkManager::NetworkManager()
: pimpl( new Impl )
{
	/*
	WSASYSNOTREADY 	�l�b�g���[�N�T�u�V�X�e����
	�l�b�g���[�N�ւ̐ڑ��������ł��Ă��Ȃ�
	WSAVERNOTSUPPORTED 	�v������ WinSock �̃o�[�W������
	���̃V�X�e���Œ񋟂���Ă��Ȃ�
	WSAEINPROGRESS 	�u���b�L���O����̎��s���ł���
	�܂��̓T�[�r�X�v���o�C�_���R�[���o�b�N�֐����������Ă���
	WSAEPROCLIM 	WinSock �������ɏ����ł���ő�v���Z�X�ɒB������
	WSAEFAULT 	lpWSAData �͗L���ȃ|�C���^�ł͂Ȃ� 
	*/
	int res = WSAStartup( MAKEWORD(2,0), &pimpl->wsadata );
	switch( res )
	{
	case WSASYSNOTREADY:
		break;
	case WSAVERNOTSUPPORTED:
		break;
	case WSAEINPROGRESS:
		break;
	case WSAEPROCLIM:
		break;
	case WSAEFAULT:
		break;
	}
}


NetworkManager::~NetworkManager()
{
	int res = WSACleanup();
	BHDebug( 0 != res, L"WSACleanup error.\n" );
}

