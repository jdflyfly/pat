/**
题意

这道题是排队模拟题。银行有 N 个窗口，每个窗口允许排队 M 个人，如果 N 个窗口占满了排队的人，更多的人需要在黄线外等待。 每个人都会选择尽可能人少的窗口排队，如果有多个窗口等待队列一样长，则选择编号小的窗口。 前 N 个用户设定在 8:00 开始接受服务。给定了 K 个用户所需要接受服务的时间长度，要求在这个排队模型下，每个人的完成处理的时间点。

分析

相对另外几个队列模拟题，这个题是很简单的。没有达到时间的差异，只需要不断的从等待队列中取出人员即可。 当然，由于黄线内等待的每个窗口都有 M 人，所以必须单独的模拟每个窗口。 可以使用 queue 模拟每个窗口，循环遍历下次离开窗口的人，继而从等待队列中补上。 需要注意结束条件，如果 17:00 以后还没有开始接受服务，则不用再等待。
*/
#include<stdio.h>
#include<queue>
#include<vector>
#include<map>

using namespace std;

#define END 540

int n, m, k, q;
int processTime[1005];

typedef struct Cus {
	int id;
	int processTime;
	int processMoment; //start from 8:00

} Cus;

queue<Cus> toBeProcessed;
vector<queue<Cus> > windows;
map<int, Cus> results;

void process() {
	int i;
	for (i = 0; i < n; i++) {
		queue<Cus> line;
		windows.push_back(line);
	}
	int lineLen = m;
	while (lineLen--) {
		for (i = 0; i < n; i++) {
			if (!toBeProcessed.empty()) {
				windows[i].push(toBeProcessed.front());
				toBeProcessed.pop();
			}

		}
	}
	int timer = 0;
	while (timer < END) {
		int minTime = 0x7fffffff;
		int minWinIdx = -1;
		for (i = 0; i < n; i++) {
			if (!windows[i].empty()&&windows[i].front().processTime < minTime) {
				minTime = windows[i].front().processTime;
				minWinIdx = i;
			}
		}
		if (minWinIdx == -1)
			break;

		timer += minTime;
		windows[minWinIdx].front().processMoment = timer;
		results[windows[minWinIdx].front().id] = windows[minWinIdx].front();
		windows[minWinIdx].pop();

		for (i = 0; i < n; i++) {
			if(!windows[i].empty()&&i!=minWinIdx)
				windows[i].front().processTime -= minTime;
		}

		if (!toBeProcessed.empty()) {
			windows[minWinIdx].push(toBeProcessed.front());
			toBeProcessed.pop();

		}

	}

}

int main() {
	freopen("in.txt","r",stdin);
	scanf("%d%d%d%d", &n, &m, &k, &q);
	int i;
	for (i = 0; i < k; i++) {
		Cus tmp;
		tmp.id = i + 1;
		scanf("%d", &tmp.processTime);
		toBeProcessed.push(tmp);
	}
	process();

	for (i = 0; i < q; i++) {
		int cusId;
		scanf("%d", &cusId);
		int moment = results[cusId].processMoment;
		if(moment==0)
			printf("Sorry\n");
		else{
			int hour = 8 + moment / 60;
			int min = moment % 60;
			printf("%02d:%02d\n", hour, min);
		}
	}

	return 0;
}
