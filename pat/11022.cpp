//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//typedef struct Book {
//	int id;
//	char title[85];
//	char author[85];
//	vector<string> keywords;
//	char publisher[85];
//	char year[10];
//
//} Book;
//
//Book book[10005];
//
//int cmp(const void*a, const void*b) {
//	Book* aa = (Book*) a;
//	Book* bb = (Book*) b;
//	return aa->id - bb->id;
//
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	int i;
//	char keyword[15];
//	for (i = 0; i < n; i++) {
//		scanf("%d", &book[i].id);
//		getchar();
//		gets(book[i].title);
//		gets(book[i].author);
//
//		char ch;
//		while (scanf("%s", keyword)) {
//			string s = keyword;
//			book[i].keywords.push_back(s);
//			ch = getchar();
//			if (ch == '\n')
//				break;
//		}
//
//		gets(book[i].publisher);
//		scanf("%s", book[i].year);
//
//	}
//	qsort(book, n, sizeof(Book), cmp);
//
//	int m;
//	scanf("%d", &m);
//	getchar();
//	char query[100];
//	while (m--) {
//		int found = 0;
//		gets(query);
//		printf("%s\n", query);
//		if (query[0] == '1') {
//			for (i = 0; i < n; i++) {
//				if (strcmp(book[i].title, &query[3]) == 0) {
//					printf("%07d\n", book[i].id);
//					found = 1;
//				}
//			}
//		} else if (query[0] == '2') {
//			for (i = 0; i < n; i++) {
//				if (strcmp(book[i].author, &query[3]) == 0) {
//					printf("%07d\n", book[i].id);
//					found = 1;
//				}
//			}
//		} else if (query[0] == '3') {
//			int j;
//			for (i = 0; i < n; i++) {
//				for (j = 0; j < book[i].keywords.size(); j++)
//					if (strcmp(book[i].keywords[j].c_str(), &query[3]) == 0) {
//						printf("%07d\n", book[i].id);
//						found = 1;
//					}
//			}
//
//		} else if (query[0] == '4') {
//			for (i = 0; i < n; i++) {
//				if (strcmp(book[i].publisher, &query[3]) == 0) {
//					printf("%07d\n", book[i].id);
//					found = 1;
//				}
//			}
//		} else {
//			for (i = 0; i < n; i++) {
//				if (strcmp(book[i].year, &query[3]) == 0) {
//					printf("%07d\n", book[i].id);
//					found = 1;
//				}
//			}
//
//		}
//		if(!found)
//			printf("Not Found\n");
//
//	}
//
//	return 0;
//}
