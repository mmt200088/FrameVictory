#include<iostream>
#include"CommitteeOfGame.h"
//�ڶ���������ί�� ���˶�����ί��Ĵ���
class CommitteeOfDigging {

public:  CommitteeOfDigging() {};
		 void askForVCR();//����ۿ�¼��
		 void quit();//�´μ���Ŭ��
		 void askForRegame();//���������ܲ� ����һ������
		 void askForFire();//�����Ͳ��� ����һ������
private:
	CommitteeOfGame *myCom = new CommitteeOfGame();
};