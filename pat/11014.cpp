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
