#include"StaticFactoryMethod.h"

using namespace std;

void StaticFactoryMethod::test() {

	cout << endl<<"StaticFactoryMethod:��̬���������ֽм򵥹���ģʽ�������ڣ��ڳ���ĸ����ط�����ҪnewһЩ���õĶ��󣬲��Ҷ�new�Ķ���Ҫ����һЩ��ʼ����new����ɢ���ڳ���ĸ����ط��������ڹ����ά�����������򵥹���ģʽ��ͳһ����������Ĵ�����" << endl<<endl;
	for (int i = 0; i < 3000000000; i++) {}

	cout << "���±��������ǵ���ȫ�����⣬ֻ�г�����ر�������֤���˶�Ա���ܽ�����س��ء��������˶��Ὺʼǰ����Ҫ��ÿλ�����������˶�Ա������֤��" << endl;
	for(int i = 0;i< 2000000000;i++){}
	cout << "���������Ŷ���ȡ����֤��" << endl;
	CompetitionCardFactory* cardFactory = new CompetitionCardFactory();
	for (int i = 0; i < 1000000000; i++) {}
	cout << "���˺ܾõĶӣ����ڵ����˳������" << endl;
	for (int i = 0; i < 800000000; i++) {}
	cout << "�����㱨����ʲô����߹����������A/B/C��" << endl;
	cout << "A.�ﾶ������B.���������C.ˮ�ϱ���" << endl;
	char option;
	cin >> option;
	while (1) {
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
		else {
			cout << "���淶�����룬�����䡣" << endl;
		}
	}

	system("PAUSE");
}