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
		cout << "滴滴手表还未被发放！请您先将手表发放给参加跑步比赛小动物！\n";
	}
	else {
		cout << "正在下达相关通知！请稍等.\n";
		Sleep(1 * 1000);
		cout << "正在下达相关通知！请稍等..\n";
		Sleep(1 * 1000);
		cout << "正在下达相关通知！请稍等...\n";
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
		cout << "目前还没有小动物收到您的滴滴手表哦！请尽快发放给相应的参赛选手！\n";
	}
	else {
		cout << "目前，";
		for (; it != myPlayers.end(); ++it) {
			cout << (*it)->getName()<< "、";
		}
		cout << "已经收到了您发放的滴滴手表！一声令下，小动物们就会做好准备，尽快到达赛场！";
	}

}

vector<Player*> Subject::GetPlayers() {
	return myPlayers;
}//返回观察者列表！

State ConcreteSubject::GetState() {
	return m_state;
}//返回观察者列表！

void Subject::CheckAPlayer(string name) {

	vector<Player*>::iterator it = myPlayers.begin();
	if (!*it) {
		cout << name << "目前还没有小动物收到您的滴滴手表哦！请尽快发放给相应的参赛选手！\n";
	}
	else {
		cout << "正在联系" << name <<",请稍等.\n";
		Sleep(1 * 1000);
		cout << "正在联系" << name << ",请稍等..\n";
		Sleep(1 * 1000);
		cout << "正在联系" << name << ",请稍等...\n";
		Sleep(1 * 1000);
		for (; it != myPlayers.end(); ++it) {
			if((*it)->getName()==name)
			cout << name << "已经收到您发放的滴滴手表啦！正在时刻关注比赛动态！";
		}
	}
}//查询小动物是否接受到手表

void ConcreteSubject::ChangeState()
{
	vector<Player*>::iterator it = GetPlayers().begin();
		m_state = 1;
		Notify();
		//cout << "动物赛跑项目的状态已经更新啦！\n";
}