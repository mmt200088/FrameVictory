#include<vector>
#include<string>
#include<windows.h>

using namespace std;

typedef int State;

class Player;//�μ���Ŀ��ѡ��

// ���۲��߳���
class Subject {
public:
	Subject() {}
	virtual ~Subject() {}
	virtual void Attach(Player* player); // ע��۲���
	virtual void Detach(Player* player); // ע���۲���
	virtual void Notify();  // ֪ͨ�۲���
	virtual void GiveAllPlayers(); // ������й۲���
	virtual State GetState() { return 0; };//�ı����״̬
	virtual vector<Player*> GetPlayers();
	virtual void CheckAPlayer(string name);
private:
	//�۲����б�
	vector<Player*> myPlayers;
};

// ���۲���
class ConcreteSubject : public Subject
{
public:
	ConcreteSubject() {}
	~ConcreteSubject() {}
	State GetState();
	void ChangeState();

private:
	State m_state = 0;//������δ��ʼ
};
