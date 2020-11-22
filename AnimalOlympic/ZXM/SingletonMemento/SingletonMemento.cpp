#include"SingletonMemento.h"

using namespace std;

SnookerCompetition* SnookerCompetition::instance = nullptr;

int SingletonMemento::test() {

	cout << "设计模式简介：" << endl;
	cout << "Singleton:该设计模式属于创建型模式，它提供了一种创建对象的最佳方式。这种模式涉及到一个单一的类，该类负责创建自己的对象，同时确保只有单个对象被创建。保证一个类仅有一个实例，并提供一个访问它的全局访问点。当想要控制实例数目，节省系统资源的时候可以使用该模式。" << endl;
	cout << "Memento:该设计模式属于行为型模式。保存一个对象的某个状态，以便在适当的时候恢复对象。利用该设计模式可以给用户提供了一种可以恢复状态的机制，可以使用户能够比较方便地回到某个历史的状态。并且实现了信息的封装，使得用户不需要关心状态的保存细节。" << endl<<endl;

	for (int i = 0; i < 3000000000; i++) {}

	int count = 0;
	cout << "故事背景：今天是RM台球馆举行台球比赛的第一天。" << endl;
	SnookerCompetition* sc = SnookerCompetition::get_instance();
	CareTaker* careTaker = new CareTaker();
	State state0 = {"粉老虎",0,"长颈鹿",0,"初始状态"};
	sc->setState(state0);
	careTaker->add(sc->saveStateToMemento());

	for (int i = 0; i < 2000000000; i++) {

	}
	cout << endl<<"大家好，我是你们的可爱解说小奶猫。今天这场比赛是粉老虎和长颈鹿的世纪大战啊！比赛刚刚开始，目前的比分是0:0啊！" << endl;
	State curState = sc->getState();
	cout << endl;
	cout << "**************************************" << endl;
	cout << curState.leftPlayer<<" vs "<<curState.rightPlayer<<" ---- "<<curState.leftPoint<<" : "<<curState.rightPoint << endl;
	cout << "球桌的位置图：" << curState.ballMap << endl;
	cout << "**************************************" << endl << endl;

	count++;

	for (int i = 0; i < 2000000000; i++) {

	}

	cout << "我们可以看到今天这场比赛是长颈鹿先开球，只见他一直围绕着球桌好像在寻找一个合适的角度。。。终于，他击球了！"<<endl;
	cout << "球球正在运动中..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "只见白球将中间的6颗彩球统统打散。但是很可惜，并没有球进洞啊。这可是为粉老虎做了嫁衣啊。" << endl<<endl;
	State tmp = { "粉老虎",0,"长颈鹿",0,"状态1" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "球桌的位置图：" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "接下来到粉老虎出场了。我们可以看到他健壮的身姿，自信的眼神，一副胜券在握的样子！很快，他找好了位置。他，击球啦！" << endl;
	cout << "球球正在运动中..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "球进啦！" << endl<<endl;
	tmp = { "粉老虎",2,"长颈鹿",0,"状态2" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "球桌的位置图：" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "粉老虎乘胜追击，下一杆！" << endl;
	cout << "球球正在运动中..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "球进啦！粉老虎连进两球！" << endl<<endl;
	tmp = { "粉老虎",4,"长颈鹿",0,"状态3" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "球桌的位置图：" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "很快，今天的粉老虎很果断啊，下一杆！" << endl;
	cout << "球球正在运动中..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "球又进啦！今天的粉老虎状态非常好啊！旁边的长颈鹿神色越来越凝重了。" << endl << endl;
	tmp = { "粉老虎",6,"长颈鹿",0,"状态4" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "球桌的位置图：" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "我们可以看到现在场上的局势对粉老虎越来越有利啊。如果下一球粉老虎不失误的话，基本上已经锁定胜局啦！" << endl;
	cout << "球球正在运动中..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "啊！！太遗憾了！！这个失误太低级了，不是粉老虎该有的水平啊！！接下来换长颈鹿上场了。" << endl << endl;
	tmp = { "粉老虎",6,"长颈鹿",0,"状态5" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "球桌的位置图：" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "长颈鹿上场啦。显然，粉老虎失误之后，场上局势反而对长颈鹿更加有利啊！长颈鹿很快击出一杆。" << endl;
	cout << "球球正在运动中..." << endl;
	for (int i = 0; i < 1000000000; i++) {}
	cout << "球进啦。长颈鹿今天第一次得分。" << endl << endl;
	tmp = { "粉老虎",6,"长颈鹿",2,"状态6" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "球桌的位置图：" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	for (int i = 0; i < 2000000000; i++) {}
	cout << "哎！场上现在是什么情况？？粉老虎请求中止比赛，控诉长颈鹿犯规，让我们等待一下裁判的判决吧。" << endl;
	cout << "裁判与选手交流中..." << endl;
	for (int i = 0; i < 2000000000; i++) {}
	cout << "判决结果出来了！裁判判定长颈鹿犯规，请求恢复比赛至前一个状态。" << endl ;
	cout << "多亏我们赛委会设置了备忘录机制，每次击球后都会保存一次赛场状态，可以很方便地查看之前的赛场状态并将其恢复。" << endl<<endl;
	sc->getStateFromMemento(careTaker->get(count-1));
	State lastState = sc->getState();
	careTaker->add(sc->saveStateToMemento());
	count++;

	for (int i = 0; i < 3000000000; i++) {}
	cout << "赛场已经恢复啦！长颈鹿的犯规是错误的行为，屏幕前的小朋友千万不要跟着学哦！" << endl;
	cout << "**************************************" << endl;
	cout << lastState.leftPlayer << " vs " << lastState.rightPlayer << " ---- " << lastState.leftPoint << " : " << lastState.rightPoint << endl;
	cout << "球桌的位置图：" << lastState.ballMap << endl;
	cout << "**************************************" << endl << endl;


	for (int i = 0; i < 2000000000; i++) {}
	cout << "又回到粉老虎继续击球了。我们不难发现，粉老虎被长颈鹿彻底激发了斗志！" << endl;
	cout << "场上仅剩下最后的三个球了！！只要粉老虎这球能进，粉老虎将取得最后的胜利！" << endl;
	cout << "球动啦！！！" << endl;
	for (int i = 0; i < 2000000000; i++) {}
	cout << "球进啦！！！！！！！！恭喜粉老虎取得今天比赛的最终胜利！" << endl << endl;
	tmp = { "粉老虎",8,"长颈鹿",0,"状态7" };
	sc->setState(tmp);
	careTaker->add(sc->saveStateToMemento());
	count++;
	cout << "**************************************" << endl;
	cout << tmp.leftPlayer << " vs " << tmp.rightPlayer << " ---- " << tmp.leftPoint << " : " << tmp.rightPoint << endl;
	cout << "球桌的位置图：" << tmp.ballMap << endl;
	cout << "**************************************" << endl << endl;

	State tem;

	while (1) {
		cout << "是否查看比赛回放？（y/n）";
		char option;
		cin >> option;
		if (option == 'y') {
			for (int i = 1; i < count+1; i++) {
				sc->getStateFromMemento(careTaker->get(i));
				tem = sc->getState();
				cout << "**************************************" << endl;
				cout << tem.leftPlayer << " vs " << tem.rightPlayer << " ---- " << tem.leftPoint << " : " << tem.rightPoint << endl;
				cout << "球桌的位置图：" << tem.ballMap << endl;
				cout << "**************************************" << endl << endl;
				for (int i = 0; i < 1000000000; i++) {}

			}
			cout << endl << "感谢您的观看，我们下次再见！" << endl;
			break;
		}
		else if (option == 'n') {
			cout << endl << "感谢您的观看，我们下次再见！" << endl;
			break;
		}
		else {
			cout << endl << "输入不合规范" << endl;
		}
	}

	system("PAUSE");
	return 0;
	

}