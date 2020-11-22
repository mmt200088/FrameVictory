#include"SingletonMemento.h"

using namespace std;

SnookerCompetition* SnookerCompetition::instance = nullptr;

int SingletonMemento::test() {

	cout << "���ģʽ��飺" << endl;
	cout << "Singleton:�����ģʽ���ڴ�����ģʽ�����ṩ��һ�ִ����������ѷ�ʽ������ģʽ�漰��һ����һ���࣬���ฺ�𴴽��Լ��Ķ���ͬʱȷ��ֻ�е������󱻴�������֤һ�������һ��ʵ�������ṩһ����������ȫ�ַ��ʵ㡣����Ҫ����ʵ����Ŀ����ʡϵͳ��Դ��ʱ�����ʹ�ø�ģʽ��" << endl;
	cout << "Memento:�����ģʽ������Ϊ��ģʽ������һ�������ĳ��״̬���Ա����ʵ���ʱ��ָ��������ø����ģʽ���Ը��û��ṩ��һ�ֿ��Իָ�״̬�Ļ��ƣ�����ʹ�û��ܹ��ȽϷ���ػص�ĳ����ʷ��״̬������ʵ������Ϣ�ķ�װ��ʹ���û�����Ҫ����״̬�ı���ϸ�ڡ�" << endl<<endl;

	for (int i = 0; i < 3000000000; i++) {}

	int count = 0;
	cout << "���±�����������RM̨��ݾ���̨������ĵ�һ�졣" << endl;
	SnookerCompetition* sc = SnookerCompetition::get_instance();
	CareTaker* careTaker = new CareTaker();
	State state0 = {"���ϻ�",0,"����¹",0,"��ʼ״̬"};
	sc->setState(state0);
	careTaker->add(sc->saveStateToMemento());

	for (int i = 0; i < 2000000000; i++) {

	}
	cout << endl<<"��Һã��������ǵĿɰ���˵С��è�������ⳡ�����Ƿ��ϻ��ͳ���¹�����ʹ�ս���������ոտ�ʼ��Ŀǰ�ıȷ���0:0����" << endl;
	State curState = sc->getState();
	cout << endl;
	cout << "**************************************" << endl;
	cout << curState.leftPlayer<<" vs "<<curState.rightPlayer<<" ---- "<<curState.leftPoint<<" : "<<curState.rightPoint << endl;
	cout << "������λ��ͼ��" << curState.ballMap << endl;
	cout << "**************************************" << endl << endl;

	count++;

	for (int i = 0; i < 2000000000; i++) {

	}

	cout << "���ǿ��Կ��������ⳡ�����ǳ���¹�ȿ���ֻ����һֱΧ��������������Ѱ��һ�����ʵĽǶȡ��������ڣ��������ˣ�"<<endl;
	cout << "���������˶���..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "ֻ�������м��6�Ų���ͳͳ��ɢ�����Ǻܿ�ϧ����û����������������Ϊ���ϻ����˼��°���" << endl<<endl;
	State tmp = { "���ϻ�",0,"����¹",0,"״̬1" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "�����������ϻ������ˡ����ǿ��Կ�������׳�����ˣ����ŵ�����һ��ʤȯ���յ����ӣ��ܿ죬���Һ���λ�á�������������" << endl;
	cout << "���������˶���..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "�������" << endl<<endl;
	tmp = { "���ϻ�",2,"����¹",0,"״̬2" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "���ϻ���ʤ׷������һ�ˣ�" << endl;
	cout << "���������˶���..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "����������ϻ���������" << endl<<endl;
	tmp = { "���ϻ�",4,"����¹",0,"״̬3" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "�ܿ죬����ķ��ϻ��ܹ��ϰ�����һ�ˣ�" << endl;
	cout << "���������˶���..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "���ֽ���������ķ��ϻ�״̬�ǳ��ð����Աߵĳ���¹��ɫԽ��Խ�����ˡ�" << endl << endl;
	tmp = { "���ϻ�",6,"����¹",0,"״̬4" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "���ǿ��Կ������ڳ��ϵľ��ƶԷ��ϻ�Խ��Խ�������������һ����ϻ���ʧ��Ļ����������Ѿ�����ʤ������" << endl;
	cout << "���������˶���..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "������̫�ź��ˣ������ʧ��̫�ͼ��ˣ����Ƿ��ϻ����е�ˮƽ������������������¹�ϳ��ˡ�" << endl << endl;
	tmp = { "���ϻ�",6,"����¹",0,"״̬5" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "����¹�ϳ�������Ȼ�����ϻ�ʧ��֮�󣬳��Ͼ��Ʒ����Գ���¹����������������¹�ܿ����һ�ˡ�" << endl;
	cout << "���������˶���..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "�����������¹�����һ�ε÷֡�" << endl << endl;
	tmp = { "���ϻ�",6,"����¹",2,"״̬6" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "��������������ʲô����������ϻ�������ֹ���������߳���¹���棬�����ǵȴ�һ�²��е��о��ɡ�" << endl;
	cout << "������ѡ�ֽ�����..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	cout << "�о���������ˣ������ж�����¹���棬����ָ�������ǰһ��״̬��" << endl ;
	cout << "���������ί�������˱���¼���ƣ�ÿ�λ���󶼻ᱣ��һ������״̬�����Ժܷ���ز鿴֮ǰ������״̬������ָ���" << endl<<endl;
	sc->getStateFromMemento(careTaker->get(count-1));
	State lastState = sc->getState();
	careTaker->add(sc->saveStateToMemento());
	count++;

	for (int i = 0; i < 3000000000; i++) {}
	cout << "�����Ѿ��ָ���������¹�ķ����Ǵ������Ϊ����Ļǰ��С����ǧ��Ҫ����ѧŶ��" << endl;
	cout << "**************************************" << endl;
	cout << lastState.leftPlayer << " vs " << lastState.rightPlayer << " ---- " << lastState.leftPoint << " : " << lastState.rightPoint << endl;
	cout << "������λ��ͼ��" << lastState.ballMap << endl;
	cout << "**************************************" << endl << endl;


	for (int i = 0; i < 2000000000; i++) {}
	cout << "�ֻص����ϻ����������ˡ����ǲ��ѷ��֣����ϻ�������¹���׼����˶�־��" << endl;
	cout << "���Ͻ�ʣ�������������ˣ���ֻҪ���ϻ������ܽ������ϻ���ȡ������ʤ����" << endl;
	cout << "����������" << endl;
	for (int i = 0; i < 2000000000; i++) {}
	cout << "�����������������������ϲ���ϻ�ȡ�ý������������ʤ����" << endl << endl;
	tmp = { "���ϻ�",8,"����¹",0,"״̬7" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	State tem;

	while (1) {
		cout << "�Ƿ�鿴�����طţ���y/n��";
		char option;
		cin >> option;
		if (option == 'y') {
			for (int i = 1; i < count+1; i++) {
				sc->getStateFromMemento(careTaker->get(i));
				tem = sc->getState();
				cout << "**************************************" << endl;
				cout << tem.leftPlayer << " vs " << tem.rightPlayer << " ---- " << tem.leftPoint << " : " << tem.rightPoint << endl;
				cout << "������λ��ͼ��" << tem.ballMap << endl;
				cout << "**************************************" << endl << endl;
				for (int i = 0; i < 1000000000; i++) {}

			}
			cout << endl << "��л���Ĺۿ��������´��ټ���" << endl;
			break;
		}
		else if (option == 'n') {
			cout << endl << "��л���Ĺۿ��������´��ټ���" << endl;
			break;
		}
		else {
			cout << endl << "���벻�Ϲ淶" << endl;
		}
	}

	system("PAUSE");
	return 0;
	

}