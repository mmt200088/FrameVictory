#include<iostream>
#include<vector>
#include<string>
#include<list>
#include"MenuComponent.h"
#include"Menu.h"
#include"MenuItem.h"
#include<windows.h>
#include"composite.h"
using namespace std;

void composite::test() {
	cout << "实现模式：Composite 实现场景：赛事导航" << endl;
	Sleep(2000);
	cout << "欢迎来到第66届动物运动会！~~~下面是本次运动会的赛事导航，可以帮助你更好地了解本次运动会所有体育项目的时间、地点和介绍~~~~" << endl;
	Sleep(2000);
	MenuComponent* mainMenu = new Menu("赛事导航", "", "", "");
	MenuComponent* landMenu = new Menu("陆地运动", "", "", "");
	MenuComponent* waterMenu = new Menu("水上运动", "", "", "");
	MenuComponent* skyMenu = new Menu("空中运动", "", "", "");
	MenuComponent* snowMenu = new Menu("雪地运动", "", "", "");

	mainMenu->Add(landMenu);
	mainMenu->Add(waterMenu);
	mainMenu->Add(skyMenu);
	mainMenu->Add(snowMenu);
	landMenu->Add(new MenuItem("赛跑", "11月15日", "青青草原", "最经典的体育赛事~~猎豹、狮子、斑马等小动物在同一赛道上来一场速度与激情的比拼，看看究竟是谁能在百米赛道上获得胜利呢~"));
	landMenu->Add(new MenuItem("爬树", "11月16日", "森林广场", "在茂密的森林当中，隐藏者许多爬树高手，猫咪、猴子、考拉……到底谁是真正的爬树冠军，让我们拭目以待！"));
	landMenu->Add(new MenuItem("跳高", "11月17日", "金色田野", "非常刺激的跳高比赛~~~袋鼠、兔子、松鼠……这些可爱的小选手们正在努力证明自己~挑战新高度！"));
	waterMenu->Add(new MenuItem("游泳", "11月20日", "彩虹河", "金鱼、鸭子、蝌蚪……这些动物界的游泳健将将在森林里唯一的河流……彩虹河中一决高下！"));
	waterMenu->Add(new MenuItem("水上芭蕾", "11月21日", "阳光海岸", "融合了游泳、技巧、舞蹈、音乐等各种元素的水上芭蕾，是一项非常优雅的水上项目，海马、海豚、章鱼……这些小动物们组成了一个个水上芭蕾舞队，来进行精彩的表演~"));
	waterMenu->Add(new MenuItem("赛龙舟", "11月26日", "彩虹河", "划龙舟比赛来啦~小动物们刻苦训练，划着它们精心制作的各种动物龙舟，齐心协力，乘风破浪，一往无前！"));
	skyMenu->Add(new MenuItem("飞行大赛", "11月27日", "观云台", "大雁、老鹰、麻雀……这些小动物们从观云台出发，绕着动物森林赛道飞行一周，看看谁能先到达终点，成为森林中当之无愧的飞行冠军！~"));
	snowMenu->Add(new MenuItem("堆雪人比赛", "11月29日", "雪人谷", "堆雪人是小动物们在冬天最喜爱的活动之一~~这一次，森林里的堆雪人高手小熊、小羊、小鹿……它们要来比一比谁堆的雪人最受大家喜爱呢~~"));
	snowMenu->Add(new MenuItem("高山滑雪", "11月30日", "喜马拉雅雪山", "小动物们从雪山山顶出发，率先到达山底的动物获胜！在银装素裹的冰雪世界里，来一场刺激的竞速比赛！"));

	mainMenu->print();

	system("pause");

}