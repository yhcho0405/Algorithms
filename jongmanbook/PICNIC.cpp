#include <iostream>
#include <cstring>
using namespace std;

int C, n, m, a, b;
bool grp[10][10];

int solve(bool isFind[10]) {
	int start = -1;
	for(int i = 0; i < n; i++)
		if(!isFind[i]) {
			start = i;
			break ;
		}
	if(start == -1) return 1;
	int ret = 0;
	for(int i = start + 1; i < n; i++) {
		if(!grp[start][i] || isFind[i]) continue ;
		isFind[start] = isFind[i] = 1;
		ret += solve(isFind);
		isFind[start] = isFind[i] = 0;
	}
	return ret;
}

int main() {
	bool isFind[10];
	cin >> C;
	for(int i = 0; i < C; i++) {
		cin >> n >> m;
		for(int j = 0; j < m; j++) {
			cin >> a >> b;
			grp[a][b] = grp[b][a] = 1;	
		}
		memset(isFind, 0, sizeof(isFind));
		cout << solve(isFind) << endl;
		memset(grp, 0, sizeof(grp));
	}
	return 0;	
}