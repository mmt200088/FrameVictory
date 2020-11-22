#include "Client.h"
#include<iostream>
using namespace std;

Client::Client() {
	filtermanager = new FilterManager(new Page());
}

void Client::test() {
	cout << "模式简介：" << endl;
	cout << "设计模式visitor" << endl;
	cout << "将访问操作独立出来变成一个新的类，当我们需要增加访问操作的时候，直接增加新的类，原来的代码不需要任何的改变" << endl;
	cout << "本故事中通过将物资Goods的所有子类Food、Equipment、Tool共同的操作（如查看、增加数量、减少数量）和搬运工Porter的操作（查看）拿出来通过新的类Operation的子类实现" << endl;
	cout << "List实现查看功能、Add实现增加数量功能、Reduce实现减少数量功能" << endl;
	cout << endl;
	_sleep(2 * 1000);
	cout << "设计模式facade" << endl;
	cout << "如果两者需要交互，经过一定的处理过程才能实现某一个具体的功能，那么我们可以将这个处理的过程定义为一个新的类" << endl;
	cout << "本故事中将查看物资、查看动物搬运工、添加新物资、添加动物搬运工、采购已有物资、搬运（搬出）物资等功能通过一个新的类Page实现" << endl;
	cout << endl;
	_sleep(2 * 1000);
	cout << "interception filter" << endl;
	cout << "用于对应用程序的请求或响应做一些预处理/后处理。定义过滤器，并在把请求传给实际目标应用程序之前应用在请求上" << endl;
	cout << "本故事中通过类Filter的子类将命令行输入的操作进行预处理，过滤掉不符合规则的输入" << endl;
	cout << endl;
	_sleep(2 * 1000);
	cout << "故事背景：" << endl;
	cout << "啦啦啦~~~动物运动会就快开始啦~~" << endl;
	cout << "然而我们的物资储备仍是一片空白，怎么办呢？" << endl;
	cout << "别担心，我们具有物资子系统" << endl;
	cout << "我们可以采购现有的物资以及添加新物资，通过采购我们缺少的物资，从而充实我们的物资储备。" << endl;
	cout << endl;
	_sleep(2 * 1000);
	cout << "然而，我们应该如何进行物资的购买（搬入）和搬出呢？" << endl;
	cout << "别担心，我们具有搬运子系统。" << endl;
	cout << "我们可以添加新的动物搬运工，来帮助我们进行物资的购买（搬入）和搬出。" << endl;
	cout << "大猩猩、大象、老虎等大型动物可以帮助我们搬运大型的物资" << endl;
	cout << "老鼠、松鼠等小型动物可以帮助我们搬运小型的物资" << endl;
	cout << "不过切记大型的物资可不能交给小型的动物来搬运，小动物可搬不动那些大物资呢" << endl;
	cout << endl;
	_sleep(2 * 1000);
	cout << "物资子系统和搬运子系统共同建构了我们的后勤系统。" << endl;
	cout << "不过注意在使用后勤系统的时候，可不要输入错误的指令" << endl;
	cout << "输入错误指令的话，系统会要求你重新输入的喔" << endl;
	cout << endl;
	_sleep(2 * 1000);
	cout << "希望你能好好运作，让我们的后勤系统更富有生气喔" << endl;
	cout << endl;
	_sleep(2 * 1000);
	filtermanager->execute();
}