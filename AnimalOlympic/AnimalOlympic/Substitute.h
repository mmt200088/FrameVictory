#pragma once
#include<vector>
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

class Substitute {
public:

	//算法问题解决方案1
	vector<int> smallerNumbersThanCurrent1(vector<int>& nums) {
		vector<int> ret;
		int n = nums.size();
		//遍历数组并统计
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = 0; j < n; j++) {
				if (nums[j] < nums[i]) {
					cnt++;
				}
			}
			ret.push_back(cnt);
		}
		return ret;
	}

	//算法问题重构解决方案2
	vector<int> smallerNumbersThanCurrent2(vector<int>& nums) {
		vector<int> cnt(101, 0);
		int n = nums.size();
		//记录数组中每个数出现的频次
		for (int i = 0; i < n; i++) {
			cnt[nums[i]]++;
		}
		//计算小于某个数的数出现的频次
		for (int i = 1; i <= 100; i++) {
			cnt[i] += cnt[i - 1];
		}
		vector<int> ret;
		for (int i = 0; i < n; i++) {
			ret.push_back(nums[i] == 0 ? 0 : cnt[nums[i] - 1]);
		}
		return ret;
	}

	//测试代码
	void test() {
		cout << "This is activity area." << endl;
		cout << "It is designed with substitute algorithm! " << endl;
		cout << "Please refer to the annotations and source code for the specific implemetation." << endl << endl;
		cout << "/* 替换算法模式，即解决一个问题有许多算法，当你发现有更清晰的算法时，就应该" << endl;
		cout << " * 使用清晰的算法替代复杂的算法。随着对问题有了更多理解，你往往会发现，在你的" << endl;
		cout << " * 原先做法之外，有更简单的解决方案，此时你就需要改变原先的算法。如果你开始使用" << endl;
		cout << " * 程序库，而其中提供的某些功能/特性与你自己的代码重复，那么你也需要改变原先的算法。" << endl;
		cout << " *" << endl;
		cout << " * 替换算法模式使用步骤如下：" << endl;
		cout << " *	1.准备好你的另一个（替换用）算法，让它通过编译；" << endl;
		cout << " * 2.针对现有测试，执行上述的新算法。如果结果与原本结果相同，重构结束；" << endl;
		cout << " * 3.如果测试结果不同于原先，在测试和调试过程中，以旧算法为比较参照标准；" << endl;
		cout << " * 对于每个测试用例，分别以新旧两种算法执行，并观察两者结果是否相同。这可以帮助你看到哪一个用例出现麻烦，以及出现了怎样的麻烦。" << endl;
		cout << " *" << endl;
		cout << " * 场景：这是服务大厅的活动区，每天将会进行不同的促销活动。今天又是经典的答题赠门票活动。" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " */" << endl;
		cout << "*************************************************************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		cout << "工作人员：欢迎来到服务大厅的活动区，这里每天都会有各种各样的奇特游戏等您参与。" << endl;
		Sleep(1000);
		cout << "工作人员：今天是经典的答题有奖活动。我们今天给出的是一道简单的算法题。" << endl;
		Sleep(1000);
		cout << "工作人员：请看上方大屏幕。" << endl << endl;
		Sleep(1000);

		//题目
		cout << "***********************************************************************" << endl;
		cout << "* 给你一个数组 nums，对于其中每个元素 nums[i]，请你统计数组中比它小的 *" << endl;
		cout << "* 所有数字的数目。换而言之,对于每个nums[i],你必须计算出有效的j的数量，*" << endl;
		cout << "* 其中 j 满足 j != i 且 nums[j] < nums[i] 。以数组形式返回答案。      *" << endl;
		cout << "* 提示：2 <= nums.length <= 500；0 <= nums[i] <= 100                  *" << endl;
		cout << "***********************************************************************" << endl << endl;
		Sleep(5000);

		cout << "工作人员：这就是今天的题目了，我们要求你的算法在保证正确的情况下，时间复杂度尽可能的低。" << endl;
		cout << "工作人员：我们将会为时间复杂度最低的参与者免费赠送今日比赛的门票。" << endl << endl;
		Sleep(5000);

		cout << "(你思考了一会)" << endl;
		cout << "顾客（你）：我大体有思路了，请问能透露一下现在性能最高的算法是什么吗？" << endl << endl;
		cout << "工作人员（小声）：可以偷偷告诉你，目前大家基本上使用的还是暴力解法，即对于数组中的每一个元素，都遍历一次，统计小于当前元素的数的数目。" << endl << endl;
		cout << "顾客（你）：看来大家的算法还停留在O（N^2）的水平上，我有信心超过他们。" << endl << endl;
		Sleep(5000);

		cout << "(思考中)如果现将数组中每个数出现的频次做个统计，计算一下小于当前数的频次之和不就是所需的答案了吗。" << endl;
		cout << "(思考中)对了，数组中每个元素的大小是有限的，那么我可以建立一个频次数组cnt,cnt[i]表示数字i出现的次数。那么对于数字i而言，小于它的数目就为cnt[0...i−1]的总和。" << endl << endl;
		Sleep(5000);

		cout << "(五分钟后)" << endl;
		cout << "顾客（你）：我写好了，我觉得今天的冠军一定是我，我已经把算法提升至0（N+K）的水平了。" << endl;
		cout << "工作人员：好的，我测试一下。" << endl << endl;
		cout << "(测试中...)" << endl;

		//测试方法：已知原算法正确，现将替换算法测试结果与原算法结果比较。如果相等则重构结束。
		vector<int> test1 = { 8,1,2,2,3 };
		vector<int> test2 = { 6,5,4,8 };
		vector<int> test3 = { 7,7,7,7 };
		vector<int> result1 = smallerNumbersThanCurrent1(test1);
		vector<int> result2 = smallerNumbersThanCurrent1(test2);
		vector<int> result3 = smallerNumbersThanCurrent1(test3);
		vector<int> result4 = smallerNumbersThanCurrent2(test1);
		vector<int> result5 = smallerNumbersThanCurrent2(test2);
		vector<int> result6 = smallerNumbersThanCurrent2(test3);

		if (result1 == result4) {
			cout << "测试1正确" << endl;
		}
		else {
			cout << "测试1错误" << endl;
		}
		if (result2 == result5) {
			cout << "测试2正确" << endl;
		}
		else {
			cout << "测试2错误" << endl;
		}
		if (result3 == result6) {
			cout << "测试3正确" << endl << endl;
		}
		else {
			cout << "测试3错误" << endl << endl;
		}
		Sleep(5000);

		cout << "工作人员：恭喜你，你的代码是正确的。经过专家组的评定，你是今天的冠军。" << endl;
		cout << "工作人员：这是今天的门票，希望你以后多来参加。" << endl << endl;
		cout << "顾客（你）：（拿过票）谢谢，我会的。" << endl;
		Sleep(3000);
		system("cls");
	}
};