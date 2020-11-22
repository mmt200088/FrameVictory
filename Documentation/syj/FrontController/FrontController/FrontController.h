#pragma once
#include<iostream>
#include<string>
#include"FacilityProblemSolver.h"
#include "OlympicServiceCenter.h"
#include <Windows.h>
class FrontController {
public:
	void test() {
		cout << "实现模式：FrontController 实现场景：运动会服务中心" << endl;
		cout << "模式介绍：" << endl;
		cout << "  前端控制器模式（Front Controller Pattern）是用来提供一个集中的请求处理机制，将所有请求集中到一个类处理，由该类依据不同的请求来执行相应的动作。该类可以做认证/授权/记录日志，或者跟踪请求，然后把请求传给相应的处理程序。以下是这种设计模式的实体:" << endl;
		cout << "  前端控制器（Front Controller）:处理应用程序所有类型请求的单个处理程序，应用程序可以是基于 web 的应用程序，也可以是基于桌面的应用程序。" << endl;
		cout << "  调度器（Dispatcher）: 前端控制器可能使用一个调度器对象来调度请求到相应的具体处理程序。" << endl;
		cout << "  视图（View）: 视图是为请求而创建的对象。" << endl;
		cout << "  模式来源：https://www.runoob.com/design-pattern/front-controller-pattern.html" << endl;
		cout << "            http://www.uml.org.cn/sjms/200901074.asp" << endl;
		cout << "实现场景：运动会服务中心" << endl;
		cout << "          在运动会进行的过程中，无论是来观看比赛的观众、还是运动员、赛训组，都可能会遇到各种各样的问题，因此，运动会主办方设置了动物运动会服务中心，专门为小动物门提供各种服务以及问题解决方案。小动物们如果在运动会开展期间遇到什么问题，都可以来服务中心咨询和寻求帮助，服务中心会根据小动物们问题的不同，把他们的请求分类，然后采取不同的措施解决。" << endl;
		cout << "------------------------------------------------------------------------------------" << endl;
		Sleep(2000);

		OlympicServiceCenter* olympicServiceCenter = new OlympicServiceCenter();
		cout << "欢迎来到动物运动会服务中心~~~请问您需要什么样的帮助呢~~" << endl;
		Sleep(2000);
		cout << "小熊在爬树比赛中受伤了！于是他的朋友来到服务中心，想要获得医疗帮助" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("safeProblem", "小熊在爬树比赛受伤了，可以去帮一下他吗？");
		cout << "小兔子发现观众席的座椅坏掉啦~她想来让工作人员修一下" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("FacilityProblem", "森林广场的观众席座椅坏掉啦~可以来修一下吗？");
		cout << "真不巧！突然下起了大雨！小狗想知道下午的赛跑比赛还进行吗" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("MatchProblem", "下午的赛跑比赛还会如期进行吗？");
		cout << "猪猪正在运动会餐厅吃饭，突然他在饭里吃到了一块石头，猪猪很生气，猪猪要去服务台投诉！" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("FoodProblem", "餐厅的饭里面怎么有石头呀？");
		cout << "运动会进行地如火如荼，突然来了一个带着墨镜，穿着皮衣的闹事者！" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("NotExistProblem", "我是来闹事的、");
		system("pause");
	}
};