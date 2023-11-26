#pragma once
#include "Lock.h"
#include "Timer.h"

#include <unordered_map>
#include <functional>

enum class ERoomState
{
	ERoomState_WAIT = 0, // �����
	ERoomState_RUN,		 // ������
};

class CPlayer;
class CRoom
{
public:
	CRoom();
	~CRoom();

public:
	void AddPlayer(CPlayer* player);
	void DeletePlayer();
	const int GetId();
	void OnDestroy();
	const bool IsJoinable();
	const bool IsRunable();
	void Start();
	void End();
	const bool IsFinish();
	void Foreach(std::function<void(CPlayer*)> func);

private:
	std::unordered_map<int, CPlayer*> m_PlayerList;
	ERoomState m_State;
	int m_StartTick;
	CTimer m_Timer;
	int m_Id;

private:
	CLock m_RoomLock;
};

