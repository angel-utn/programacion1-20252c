#include<iostream>
using namespace std;

int main() {
	int actual, c, l, m, n;
   
	cout << "Materia: ";
	cin >> m;
   
	while (m!=0) {
		actual = m;
		c = 0;
		cout << "INICIO DE CARGA DE LA MATERIA" << endl;
		while (m==actual) {
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
		cout << "La cantida de aprobados son de la materia #" << actual << ": " << c << endl;
	}
	cout << "FIN DEL PROGRAMA" << endl;
	return 0;
}

