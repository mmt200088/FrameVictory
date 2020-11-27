#include"StaticFactoryMethod.h"
#include<windows.h>
using namespace std;

void StaticFactoryMethod::test() {

	cout << "StaticFactoryMethod:\n静态工厂方法又叫简单工厂模式，适用于以下情况：\n在程序的各个地方都需要new一些常用的对象，并且对new的对象要进行一些初始化，new操作散落在程序的各个地方，不便于管理和维护\n因此引入简单工厂模式来统一管理常见对象的创建。\n\n\n";
	Sleep(3000);

	cout << "故事背景：\n考虑到安全等问题，只有持有相关比赛参赛证的运动员才能进入相关场地。\n所以在运动会开始前，需要给每位报名比赛的运动员发参赛证。" << endl;
	for(int i = 0;i< 2000000000;i++){}
	cout << "请大家有序排队领取参赛证！" << endl;
	CompetitionCardFactory* cardFactory = new CompetitionCardFactory();
	for (int i = 0; i < 1000000000; i++) {}
	cout << "排了很久的队，终于到你的顺序啦！" << endl;
	for (int i = 0; i < 800000000; i++) {}
	cout << "请问你报名了什么比赛吖？（请输入A/B/C/D）" << endl;
	cout << "A.陆地比赛 B.空中比赛 C.水上比赛 D.雪地比赛" << endl;
	char option;
	while (1) {
		cin >> option;
		if (option == 'A') {
			CompetitionCard* AthleticsCard = cardFactory->createCard(Athletics);
			if (AthleticsCard != nullptr) {
				AthleticsCard->send();
			}
			break;
		}
		else if (option == 'B') {
			CompetitionCard* ballCard = cardFactory->createCard(Ball);
			if (ballCard != nullptr) {
				ballCard->send();
			}
			break;
		}
		else if (option == 'C') {
			CompetitionCard* waterCard = cardFactory->createCard(Water);
			if (waterCard != nullptr) {
				waterCard->send();
			}
			break;
		}
		else if (option == 'D') {
			CompetitionCard* winterCard = cardFactory->createCard(Winter);
			if (winterCard != nullptr) {
				winterCard->send();
			}
			break;
		}
		else {
			cout << "不规范的输入，请重输。" << endl;
		}
	}
}