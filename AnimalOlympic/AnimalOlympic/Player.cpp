// observer.cpp
#include "Player.h"
#include "subject.h"

using namespace std;
void Player::outputState()
{
	//cout << m_name << " update state :" << m_observerState << endl;
	cout << m_name << "已经接到比赛提醒！正火速赶往田径场！\n";
}

void Player::update(Subject* sub)
{
	m_observerState = sub->GetState();
	outputState();
}

string Player::getName()
{
	return m_name;
}
