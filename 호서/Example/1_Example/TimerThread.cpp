#include "TimerThread.h"
#include "AppManager.h"
#include "MatchingFacade.h"

CTimerThread::CTimerThread()
{
}

CTimerThread::~CTimerThread()
{
}

void CTimerThread::Run()
{


	while (true)
	{
		if (!CAppManager::GetInstance()->IsTerminated())
		{
			MatchingFacade::RoomOnTimer();
		}
		else // �� ����
		{
			// �α�
			break;
		}
	}
}
