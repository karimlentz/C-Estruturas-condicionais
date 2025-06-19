#include <iostream>

using namespace std;

int main(){
	
	int codProd, codPais;
	float pesoKg;
	
	cin >> codProd >> pesoKg >> codPais;
	
	float pesoG, precoBruto, imposto, precoTotal;
	
	pesoG = pesoKg * 1000;
	
	if(codProd >= 1 && codProd <=4){
		precoBruto = pesoG * 10;
	} else if (codProd >=5 && codProd <=7){
		precoBruto = pesoG * 25;
	} else if (codProd >=8 && codProd <=10){
		precoBruto = pesoG * 35;
	}
	
	if(codPais == 1){
		imposto = precoBruto * 0;
	} else if (codPais == 2){
		imposto = precoBruto * 0.15;
	} else if (codPais == 3){
		imposto = precoBruto * 0.25;
	}
	
	precoTotal = precoBruto + imposto;
	
	cout << pesoG << endl << precoBruto << endl << imposto << endl << precoTotal << endl; 
		
return 0;
}
