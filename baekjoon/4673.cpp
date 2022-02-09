#include <iostream>
using namespace std;
bool isntSelfNum[10001];
int main() {
	int sum;
	for(int i = 1; i < 10000; i++) {
		sum = i + (i / 1000) % 10 + (i / 100) % 10 + (i / 10) % 10 + i % 10; 
		isntSelfNum[sum] = 1;
	}
	for(int i = 1; i <= 10000; i++)
		if(!isntSelfNum[i]) cout << i << endl;
	return 0;
}