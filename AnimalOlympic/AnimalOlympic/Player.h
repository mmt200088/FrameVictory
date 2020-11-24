// Player.h
#include<iostream>
#include<string>
#include<vector>
using namespace std;

typedef int State;

class Subject;

// π€≤Ï’ﬂ
class Player {
public:
	Player(string name, State init_state) {
		m_name = name;
		m_observerState = init_state;
	}
    ~Player() {}
    void update(Subject* sub) ;
    void outputState();
	string getName();

protected:
	string m_name;
	State m_observerState;
};
