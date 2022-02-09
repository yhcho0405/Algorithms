#include <iostream>
using namespace std;
int N, ans = 99;
int main() {
	cin >> N;
	for(int i = 100; i <= N; i++)
		if(i / 100 - (i / 10) % 10 == (i / 10) % 10 - i % 10) ans++;
	if(N <= 99) ans = N;
	cout << ans;
}