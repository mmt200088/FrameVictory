// observer.cpp
#include "Player.h"
#include "subject.h"

using namespace std;
void Player::outputState()
{
	//cout << m_name << " update state :" << m_observerState << endl;
	cout << m_name << "�Ѿ��ӵ��������ѣ������ٸ����ﾶ����\n";
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
