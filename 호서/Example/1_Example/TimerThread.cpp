#include "TimerThread.h"
#include "AppManager.h"
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

		}
		else // �� ����
		{
			// �α�
			break;
		}
	}
}
