#include<iostream>
using namespace std;
int main() {
	int cv, n;
	do {
		cin >> n;
		cv = 0;
		for (int j=1;j<=n;j++) {
			if (n%j==0) {
				cv = cv+1;
			}
		}
	} while (cv!=2);
	return 0;
}

