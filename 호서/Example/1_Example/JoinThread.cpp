#include "JoinThread.h"
#include "AppManager.h"
#include "PlayerManager.h"

CJoinThread::CJoinThread()
{
}

CJoinThread::~CJoinThread()
{
}

void CJoinThread::Run()
{
	while (true)
	{
		if (!CAppManager::GetInstance()->IsTerminated())
		{

		}
		else // �� ����
		{
			// �α�

			break;
		}
	}
}
