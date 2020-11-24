#pragma once
#include <iostream>
#include<string>
#include"RequestDispatcher.h"
using namespace std;
/**
  前端控制器的最顶级类，是用户使用界面。
  本例中，我们将运动会的服务中心作为前端控制器，
  观众或运动员向运动会服务中心发出一些请求，
  之后我们将请求用我们的请求调度器调度给相应的请求处理器来解决问题。
  并且我们能够记录下所有的请求，实现日志的功能。
*/
class OlympicServiceCenter {
public:
	RequestDispatcher* dispatcher = new RequestDispatcher();
	// 记录请求，实现日志功能。
	void trackRequest(string requestType, string requestContent);

	 /* 分配请求，唯一的共有函数，是所有外界用户使用它的入口。
     * 只要向它提供请求的类型以及请求的内容，它会调用调度器来找到合适的请求处理器，
     * 之后用它来解决用户的问题。
	 */
	void dispatchRequest(string requestType, string requestContent);
private:
	string descStr = "DisneyServiceCenter : (";
};