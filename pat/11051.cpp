//#include<stdio.h>
//#include<stack>
//using namespace std;
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int m, n, k;
//	int seq[1005];
//	scanf("%d%d%d", &m, &n, &k);
//	int i;
//	while (k--) {
//		for (i = 1; i <= n; i++)
//			scanf("%d", &seq[i]);
//		int ok = 1;
//
//		stack<int> s;
//		int a = 1, b = 1;
//		while (b <= n) {
//			if (a == seq[b]) {
//				s.push(a);
//				if (s.size() > m) {
//					ok = 0;
//					break;
//				}
//				s.pop();
//				a++;
//				b++;
//			} else if (!s.empty() && s.top() == seq[b]) {
//				s.pop();
//				b++;
//			} else if (a <= n) {
//				s.push(a);
//				a++;
//				if (s.size() > m) {
//					ok = 0;
//					break;
//				}
//			} else {
//				ok = 0;
//				break;
//			}
//
//		}
//
//		if (ok)
//			printf("YES\n");
//		else
//			printf("NO\n");
//
//	}
//
//	return 0;
//}
