#include<iostream>
using namespace std;

int main() {
	float vc;
	for (vc=1;vc<=3;vc++) {
		cout << "Dia #" << vc << endl;
	}
	cout << "---------" << endl;
	for (vc=0;vc<=2;vc++) {
		cout << "Dia #" << vc << endl;
	}
	cout << "---------" << endl;
	for (vc=2;vc<=7;vc+=2) {
		cout << "Dia #" << vc << endl;
	}
	cout << "---------" << endl;
	for (vc=7;vc>=2;vc-=2) {
		cout << "Dia #" << vc << endl;
	}
	return 0;
}

