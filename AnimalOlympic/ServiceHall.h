#pragma once
#include<FactoryMethod.h>
#include<Interpreter.h>
#include<ObjectPool.h>
#include<Windows.h>

/* �������ܣ������˶������������˿ͽ��ź���л����˽Ӵ��������˻����
 * ����������������ܡ�����Ʊ����С�Թ��򣬷�װ��衣���ھ������ã��û�
 * Ŀǰÿ��ֻ������һ�ֹ��ܡ��������·�Ϊ��Ļ�����а���������û�������
 * ������ϣ�����������顣
 *
 * ������������Ӧ�Ҹ�����������ģʽ��
 * 1.��Ʊ���� ���� Factory Method
 * 2.С�Թ��� ���� Interpreter
 * 3.��װ��� ���� Objectpool
 *
 * ÿ�����ģʽ��ԭ����ʵ�����Ʋ������ģʽͬ����ͷ�ļ������������ṩ���꾡��ע�͡�
 *
 * 1853806 Wu Jiaqi
 */

class ServiceHall {
public:
	//���Դ���
	void test() {
		cout << "This is animal olympic games project." << endl;
		cout << "And these scenes are designed by Wujiaqi." << endl << endl;
		cout << "/* �������ܣ������˶������������˿ͽ��ź���л����˽Ӵ��������˻����" << endl;
		cout << " * ����������������ܡ�����Ʊ����С�Թ��򣬷�װ��衣���ھ������ã��û�" << endl;
		cout << " * Ŀǰÿ��ֻ������һ�ֹ��ܡ��������·�Ϊ��Ļ�����а���������û�������" << endl;
		cout << " * ������ϣ�����������顣" << endl;
		cout << " *" << endl;
		cout << " * ������������Ӧ�Ҹ�����������ģʽ��" << endl;
		cout << " * 1.��Ʊ���� ���� Factory Method" << endl;
		cout << " * 2.С�Թ��� ���� Interpreter" << endl;
		cout << " * 3.��װ��� ���� Objectpool" << endl;
		cout << " *" << endl;
		cout << " * ÿ�����ģʽ��ԭ����ʵ�����Ʋ������ģʽͬ����ͷ�ļ������������ṩ���꾡��ע�͡�" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " */" << endl;
		cout << "*********************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		//�޸�������ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		cout << "# Background:" << endl;
		cout << "#   I design a comprehensive service hall for sports meeting." << endl;
		cout << "# And it is constructed for the audience.In this hall, I set " << endl;
		cout << "# three functional areas for animals. Each of them corresponds" << endl;
		cout << "# to a design pattern. Next,you will act as a customer to test." << endl;
		cout << "#   Let's start your journey!" << endl << endl;
		cout << "# Roles:" << endl;
		cout << "#   Green  ���� You" << endl;
		cout << "#   Red    ���� NPC" << endl;
		cout << "#   White  ���� Narrator" << endl;
		cout << "#   Yellow ���� Static items" << endl << endl;
		Sleep(6000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(Open the door and go in)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:Welcome to the service hall of Olympic games." << endl;
		Sleep(1000);
		cout << "Robot:We will serve you faithfully." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Well,what services do you have?" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:In service hall, you have 3 choices." << endl;
		Sleep(1000);
		cout << "Robot:Please look at our service panel." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(look up at the panel curiously)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "************************************************************" << endl;
		cout << "* 1.Buy tickets for today's game(Factory Method)           *" << endl;
		cout << "* 2.Buy snacks to enjoy the game(Interpreter)              *" << endl;
		cout << "* 3.Rent fan's costumes for your favorite team(ObjectPool) *" << endl;
		cout << "************************************************************" << endl << endl;
		Sleep(5000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:Which one do you want to choose?" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Emmm...let me think." << endl;
		
		//���ѡ�񳡾������ģʽ��
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(System prompt)Please make your choice(1:Pattern 1, 2:Pattern 2, 3:Pattern 3)";
		string s;
		cin >> s;

		//����1
		if (s == "1") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Well,I think I'll buy tickets first." << endl << endl;
			Sleep(3000);
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Robot:OK,you can go with me." << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
			cout << "First scene is over." << endl;
			cout << "-------------------------------------------" << endl;
			Sleep(3000);
			system("cls");

			//������Ӧ���ģʽ��ʵ��
			FactoryMethod factory;
			factory.test();
		}

		//����2
		else if (s == "2") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Well,I think I'll buy snacks first.I'm really hungry now." << endl << endl;
			Sleep(3000);
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Robot:OK,you can go with me." << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
			cout << "First scene is over." << endl;
			cout << "-------------------------------------------" << endl;
			Sleep(3000);
			system("cls");
			
			//������Ӧ���ģʽ��ʵ��
			Interpreter in;
			in.test();
		}

		//����3
		else if (s == "3") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Well,I think I'll rent costumes first.I'm a big fan of Mr.Ma." << endl << endl;
			Sleep(3000);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Robot:OK,you can go with me." << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
			cout << "First scene is over." << endl;
			cout << "-------------------------------------------" << endl;
			Sleep(3000);
			system("cls");

			//������Ӧ���ģʽ��ʵ��
			ObjectPool obj;
			obj.test();
		}

		//�쳣���룬����β֭
		else {
			cout << endl;
			cout << "(System prompt)ERROR!ERROR!ERROR!" << endl;
			cout << "(System prompt)You will exit in 3 seconds!" << endl;;
			Sleep(3000);
			return;
		}

		//��������
		cout << "(evening)" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:You've had a great day just by looking at your state." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Yes, I told you, I watched a wonderful match today..." << endl << endl;
		Sleep(5000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(1 hour later)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:Well,the service hall is closing." << endl;
		Sleep(1000);
		cout << "Robot:Maybe you'll come back tomorrow." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Thanks for your service today.I hope tomorrow will come soon." << endl;
		Sleep(1000);
		cout << "Customer(you):Bye!" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "End(To be continued...)" << endl;
		cout << "-------------------------------------------" << endl;
	}

};