#include"StaticFactoryMethod.h"
#include<windows.h>
using namespace std;

void StaticFactoryMethod::test() {

	cout << "StaticFactoryMethod:\n��̬���������ֽм򵥹���ģʽ�����������������\n�ڳ���ĸ����ط�����ҪnewһЩ���õĶ��󣬲��Ҷ�new�Ķ���Ҫ����һЩ��ʼ����new����ɢ���ڳ���ĸ����ط��������ڹ����ά��\n�������򵥹���ģʽ��ͳһ����������Ĵ�����\n\n\n";
	Sleep(3000);

	cout << "���±�����\n���ǵ���ȫ�����⣬ֻ�г�����ر�������֤���˶�Ա���ܽ�����س��ء�\n�������˶��Ὺʼǰ����Ҫ��ÿλ�����������˶�Ա������֤��" << endl;
	for(int i = 0;i< 2000000000;i++){}
	cout << "���������Ŷ���ȡ����֤��" << endl;
	CompetitionCardFactory* cardFactory = new CompetitionCardFactory();
	for (int i = 0; i < 1000000000; i++) {}
	cout << "���˺ܾõĶӣ����ڵ����˳������" << endl;
	for (int i = 0; i < 800000000; i++) {}
	cout << "�����㱨����ʲô����߹����������A/B/C/D��" << endl;
	cout << "A.½�ر��� B.���б��� C.ˮ�ϱ��� D.ѩ�ر���" << endl;
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
			cout << "���淶�����룬�����䡣" << endl;
		}
	}
}