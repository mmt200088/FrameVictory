#include"SingletonMemento.h"
#include<windows.h>

using namespace std;

SnookerCompetition* SnookerCompetition::instance = nullptr;

int SingletonMemento::test() {

	cout << "���ģʽ��飺" << endl;
	cout << "Singleton:�����ģʽ���ڴ�����ģʽ�����ṩ��һ�ִ����������ѷ�ʽ������ģʽ�漰��һ����һ���࣬���ฺ�𴴽��Լ��Ķ���ͬʱȷ��ֻ�е������󱻴�������֤һ�������һ��ʵ�������ṩһ����������ȫ�ַ��ʵ㡣����Ҫ����ʵ����Ŀ����ʡϵͳ��Դ��ʱ�����ʹ�ø�ģʽ��" << endl;
	cout << "Memento:�����ģʽ������Ϊ��ģʽ������һ�������ĳ��״̬���Ա����ʵ���ʱ��ָ��������ø����ģʽ���Ը��û��ṩ��һ�ֿ��Իָ�״̬�Ļ��ƣ�����ʹ�û��ܹ��ȽϷ���ػص�ĳ����ʷ��״̬������ʵ������Ϣ�ķ�װ��ʹ���û�����Ҫ����״̬�ı���ϸ�ڡ�" << endl<<endl;

	Sleep(2000);
	int count = 0;
	cout << "���±�����������Ħ��ľ׮����̨������ĵ�һ�졣" << endl;
	SnookerCompetition* sc = SnookerCompetition::get_instance();
	CareTaker* careTaker = new CareTaker();
	SState state0 = {"���ϻ�",0,"����¹",0,"��ʼ״̬"};
	sc->setState(state0);
	careTaker->add(sc->saveStateToMemento());
	Sleep(2000);
	cout << endl<<"��Һã��������ǵĿɰ���˵С��è�������ⳡ�����Ƿ��ϻ��ͳ���¹�����ʹ�ս���������ոտ�ʼ��Ŀǰ�ıȷ���0:0����" << endl;
	SState curState = sc->getState();
	cout << endl;
	cout << "**************************************" << endl;
	cout << curState.leftPlayer<<" vs "<<curState.rightPlayer<<" ---- "<<curState.leftPoint<<" : "<<curState.rightPoint << endl;
	cout << "������λ��ͼ��" << curState.ballMap << endl;
	cout << "**************************************" << endl << endl;

	count++;

	Sleep(2000);
	cout << "���ǿ��Կ��������ⳡ�����ǳ���¹�ȿ���ֻ����һֱΧ��������������Ѱ��һ�����ʵĽǶȡ��������ڣ��������ˣ�"<<endl;
	cout << "���������˶���..." << endl;
	Sleep(1000);
	cout << "ֻ�������м��6�Ų���ͳͳ��ɢ�����Ǻܿ�ϧ����û����������������Ϊ���ϻ����˼��°���" << endl<<endl;
	SState tmp = { "���ϻ�",0,"����¹",0,"״̬1" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	Sleep(2000);
	cout << "�����������ϻ������ˡ����ǿ��Կ�������׳�����ˣ����ŵ�����һ��ʤȯ���յ����ӣ��ܿ죬���Һ���λ�á�������������" << endl;
	cout << "���������˶���..." << endl;
	Sleep(1000);
	cout << "�������" << endl<<endl;
	tmp = { "���ϻ�",2,"����¹",0,"״̬2" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	Sleep(2000);
	cout << "���ϻ���ʤ׷������һ�ˣ�" << endl;
	cout << "���������˶���..." << endl;
	Sleep(1000);
	cout << "����������ϻ���������" << endl<<endl;
	tmp = { "���ϻ�",4,"����¹",0,"״̬3" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;
	Sleep(2000);
	cout << "�ܿ죬����ķ��ϻ��ܹ��ϰ�����һ�ˣ�" << endl;
	cout << "���������˶���..." << endl;
	Sleep(1000);
	cout << "���ֽ���������ķ��ϻ�״̬�ǳ��ð����Աߵĳ���¹��ɫԽ��Խ�����ˡ�" << endl << endl;
	tmp = { "���ϻ�",6,"����¹",0,"״̬4" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	Sleep(1000);
	cout << "���ǿ��Կ������ڳ��ϵľ��ƶԷ��ϻ�Խ��Խ�������������һ����ϻ���ʧ��Ļ����������Ѿ�����ʤ������" << endl;
	cout << "���������˶���..." << endl;
	Sleep(2000);
	cout << "������̫�ź��ˣ������ʧ��̫�ͼ��ˣ����Ƿ��ϻ����е�ˮƽ������������������¹�ϳ��ˡ�" << endl << endl;
	tmp = { "���ϻ�",6,"����¹",0,"״̬5" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	Sleep(2000);
	cout << "����¹�ϳ�������Ȼ�����ϻ�ʧ��֮�󣬳��Ͼ��Ʒ����Գ���¹����������������¹�ܿ����һ�ˡ�" << endl;
	cout << "���������˶���..." << endl;
	Sleep(1000);
	cout << "�����������¹�����һ�ε÷֡�" << endl << endl;
	tmp = { "���ϻ�",6,"����¹",2,"״̬6" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	Sleep(2000);
	cout << "��������������ʲô����������ϻ�������ֹ���������߳���¹���棬�����ǵȴ�һ�²��е��о��ɡ�" << endl;
	cout << "������ѡ�ֽ�����..." << endl;
	Sleep(2000);
	cout << "�о���������ˣ������ж�����¹���棬����ָ�������ǰһ��״̬��" << endl ;
	cout << "���������ί�������˱���¼���ƣ�ÿ�λ���󶼻ᱣ��һ������״̬�����Ժܷ���ز鿴֮ǰ������״̬������ָ���" << endl<<endl;
	sc->getStateFromMemento(careTaker->get(count-1));
	SState lastState = sc->getState();
	careTaker->add(sc->saveStateToMemento());
	count++;

	Sleep(3000);
	cout << "�����Ѿ��ָ���������¹�ķ����Ǵ������Ϊ����Ļǰ��С����ǧ��Ҫ����ѧŶ��" << endl;
	cout << "**************************************" << endl;
	cout << lastState.leftPlayer << " vs " << lastState.rightPlayer << " ---- " << lastState.leftPoint << " : " << lastState.rightPoint << endl;
	cout << "������λ��ͼ��" << lastState.ballMap << endl;
	cout << "**************************************" << endl << endl;


	Sleep(2000);
	cout << "�ֻص����ϻ����������ˡ����ǲ��ѷ��֣����ϻ�������¹���׼����˶�־��" << endl;
	cout << "���Ͻ�ʣ�������������ˣ���ֻҪ���ϻ������ܽ������ϻ���ȡ������ʤ����" << endl;
	cout << "����������" << endl;
	Sleep(2000);
	cout << "�����������������������ϲ���ϻ�ȡ�ý������������ʤ����" << endl << endl;
	tmp = { "���ϻ�",8,"����¹",0,"״̬7" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "������λ��ͼ��" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	SState tem;

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
				Sleep(1000);

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

	return 0;
	

}