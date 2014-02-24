//#include<stdio.h>
//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//using namespace std;
//
//map<string, vector<string> > adj;
//map<string, int> weight;
//map<string, bool> visited;
//map<string, int> results;
//
//string head;
//int curSize, curWeight;
//
//void dfs(string str) {
//
//	visited[str] = true;
//	curSize++;
//	curWeight += weight[str];
//	if (weight[str] > weight[head])
//		head = str;
//
//	for (vector<string>::iterator it = adj[str].begin(); it != adj[str].end();
//			++it) {
//		if (!visited[(*it)])
//			dfs((*it));
//	}
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n, k;
//	cin >> n >> k;
//	int i;
//	string a, b;
//	int time;
//	for (i = 0; i < n; i++) {
//		cin >> a >> b >> time;
//		adj[a].push_back(b);
//		adj[b].push_back(a);
//		weight[a] += time;
//		weight[b] += time;
//		visited[a] = false;
//		visited[b] = false;
//	}
//
//	for (map<string, bool>::iterator it = visited.begin(); it != visited.end();
//			it++) {
//		if ((*it).second == false) {
//			head = (*it).first;
//			curSize = 0;
//			curWeight = 0;
//			dfs(head);
//
//			if (curSize > 2 && curWeight > k * 2)
//				results[head] = curSize;
//
//		}
//
//	}
//	cout << results.size() << endl;
//	for (map<string, int>::iterator it = results.begin(); it != results.end();
//			++it)
//		cout << (*it).first << " " << (*it).second << endl;
//
//	return 0;
//}
