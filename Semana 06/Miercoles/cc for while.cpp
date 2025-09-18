#include<iostream>
using namespace std;

int main() {
	int c, l, m, n;
   
	for (int i=1;i<=4;i++) {
		c = 0;
      
		cout << "INICIO DE CARGA DE LA MATERIA" << endl;
		cout << "Materia: ";
		cin >> m;
      
		while (m!=0) {
			cout << "Legajo: ";
			cin >> l;
			cout << "Nota: ";
			cin >> n;
			if (n>=6) {
				c = c+1;
			}
			cout << "Materia: ";
			cin >> m;
		}
		cout << "FIN DE CARGA DE LA MATERIA" << endl;
		cout << "La cantida de aprobados son: " << c << endl;
	}
	cout << "FIN DEL PROGRAMA" << endl;
	return 0;
}

