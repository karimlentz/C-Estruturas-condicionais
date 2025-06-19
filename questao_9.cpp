#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	char calculo, tipo;
	float angulo;
	
	cin >> calculo >> tipo >> angulo;
	
	if (tipo == 'g'){
		angulo = ((angulo * M_PI) / 180);
	}
	
	if (calculo == 's'){
		cout << sin(angulo) << endl;
	} else if (calculo == 'c'){
		cout << cos(angulo) << endl;
	}

return 0;
}
