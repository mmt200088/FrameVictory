#include"Myprototype.h"
#include<windows.h>
using namespace std;

void Myprototype::test(){

	cout <<endl<< "Prototype:\n该设计模式属于创建型模式，是用于创建重复的对象，同时又能保证性能。它提供了一种创建对象的最佳方式。这种模式是实现了一个原型接口，该接口用于创建当前对象的克隆。当直接创建对象的代价比较大时，则采用这种模式。" << endl<<endl;
	
	Sleep(2000);
	cout << "故事背景：在很久很久以前，动物们在准备第一届动物运动会的时候邀请了镇上最最最有名的冶炼大师小刺猬来为运动会打造奖牌。" << endl;
	for (int i = 0; i < 2000000000; i++) {}
	cout << "小刺猬在冥思苦想了很久之后，调配了各种金属元素的比例，最终为运动会设计出了最为坚固美观的三种奖牌的配方。" << endl<<endl;
	cout << "哼哧哼哧哼哧..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	GoldMedal* Medal1 = new GoldMedal();
	Medal1->setLogoName("第一届动物运动会的logo");
	Medal1->setType("金牌");
	Medal1->show();
	cout << endl;
	cout << "哼哧哼哧哼哧..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	SilverMedal* Medal2 = new SilverMedal();
	Medal2->setLogoName("第一届动物运动会的logo");
	Medal2->setType("银牌");
	Medal2->show();
	cout << endl;

	cout << "哼哧哼哧哼哧..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	CopperMedal* Medal3 = new CopperMedal();
	Medal3->setLogoName("第一届动物运动会的logo");
	Medal3->setType("铜牌");
	Medal3->show();
	cout << endl;


	for (int i = 0; i < 2000000000; i++) {}
	cout <<endl<< "太好啦！之后每年运动会奖牌的制作只要修改奖牌上的logo就可以做好咯！" << endl;
	
	for (int i = 0; i < 1000000000; i++) {}
	cout << "今年是第66届动物运动会了。让我们一起来制作今年的奖牌吧！" << endl<<endl;
	for (int i = 0; i < 1000000000; i++) {}


	cout << "哼哧哼哧哼哧..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	GoldMedal* newMedal1 = Medal1->Clone();
	newMedal1->setLogoName("第666届动物运动会的logo");
	newMedal1->show();
	cout << endl;

	cout << "哼哧哼哧哼哧..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	SilverMedal* newMedal2 = Medal2->Clone();
	newMedal2->setLogoName("第666届动物运动会的logo");
	newMedal2->show();
	cout << endl;

	cout << "哼哧哼哧哼哧..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	CopperMedal* newMedal3 = Medal3->Clone();
	newMedal3->setLogoName("第666届动物运动会的logo");
	newMedal3->show();
	cout << endl;

}
