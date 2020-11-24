#include<vector>
#include<string>
#include<windows.h>

using namespace std;

typedef int State;

class Player;//参加项目的选手

// 被观察者抽象
class Subject {
public:
	Subject() {}
	virtual ~Subject() {}
	virtual void Attach(Player* player); // 注册观察者
	virtual void Detach(Player* player); // 注销观察者
	virtual void Notify();  // 通知观察者
	virtual void GiveAllPlayers(); // 输出所有观察者
	virtual State GetState() { return 0; };//改变比赛状态
	virtual vector<Player*> GetPlayers();
	virtual void CheckAPlayer(string name);
private:
	//观察者列表
	vector<Player*> myPlayers;
};

// 被观察者
class ConcreteSubject : public Subject
{
public:
	ConcreteSubject() {}
	~ConcreteSubject() {}
	State GetState();
	void ChangeState();

private:
	State m_state = 0;//比赛还未开始
};
