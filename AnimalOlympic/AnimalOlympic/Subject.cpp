// subject.cpp
#include "subject.h"
#include "Player.h"

void Subject::Attach(Player* pObs)
{
	myPlayers.push_back(pObs);
}

void Subject::Detach(Player* pObs)
{
	vector<Player*>::iterator it = myPlayers.begin();
	for (; it != myPlayers.end(); ++it)
	{
		if (*it == pObs)
		{
			myPlayers.erase(it);
			return;
		}
	}
}

void Subject::Notify()
{
	vector<Player*>::iterator it = myPlayers.begin();
	if (!*it) {
		cout << "�ε��ֱ�δ�����ţ������Ƚ��ֱ��Ÿ��μ��ܲ�����С���\n";
	}
	else {
		cout << "�����´����֪ͨ�����Ե�.\n";
		Sleep(1 * 1000);
		cout << "�����´����֪ͨ�����Ե�..\n";
		Sleep(1 * 1000);
		cout << "�����´����֪ͨ�����Ե�...\n";
		Sleep(1 * 1000);
		for (; it != myPlayers.end(); ++it){
			(*it)->update(this);
		}
	}

}

void Subject::GiveAllPlayers()
{
	vector<Player*>::iterator it = myPlayers.begin();
	if (!*it) {
		cout << "Ŀǰ��û��С�����յ����ĵε��ֱ�Ŷ���뾡�췢�Ÿ���Ӧ�Ĳ���ѡ�֣�\n";
	}
	else {
		cout << "Ŀǰ��";
		for (; it != myPlayers.end(); ++it) {
			cout << (*it)->getName()<< "��";
		}
		cout << "�Ѿ��յ��������ŵĵε��ֱ�һ�����£�С�����Ǿͻ�����׼�������쵽��������";
	}

}

vector<Player*> Subject::GetPlayers() {
	return myPlayers;
}//���ع۲����б�

State ConcreteSubject::GetState() {
	return m_state;
}//���ع۲����б�

void Subject::CheckAPlayer(string name) {

	vector<Player*>::iterator it = myPlayers.begin();
	if (!*it) {
		cout << name << "Ŀǰ��û��С�����յ����ĵε��ֱ�Ŷ���뾡�췢�Ÿ���Ӧ�Ĳ���ѡ�֣�\n";
	}
	else {
		cout << "������ϵ" << name <<",���Ե�.\n";
		Sleep(1 * 1000);
		cout << "������ϵ" << name << ",���Ե�..\n";
		Sleep(1 * 1000);
		cout << "������ϵ" << name << ",���Ե�...\n";
		Sleep(1 * 1000);
		for (; it != myPlayers.end(); ++it) {
			if((*it)->getName()==name)
			cout << name << "�Ѿ��յ������ŵĵε��ֱ���������ʱ�̹�ע������̬��";
		}
	}
}//��ѯС�����Ƿ���ܵ��ֱ�

void ConcreteSubject::ChangeState()
{
	vector<Player*>::iterator it = GetPlayers().begin();
		m_state = 1;
		Notify();
		//cout << "����������Ŀ��״̬�Ѿ���������\n";
}