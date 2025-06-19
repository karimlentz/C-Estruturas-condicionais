#include <iostream>

using namespace std;

int main(){
	
	char monstro;
	int pessoas, dias, quarto;
	
	cin >> monstro >> pessoas >> dias;
	
	//andar	
	if (monstro == 'z' || monstro == 'm'){
		quarto = 100;
	} else if (monstro == 'l' || monstro == 'd'){
		quarto = 200;
	} else if (monstro == 'h' || monstro == 's'){
		quarto = 300;
	} else if (monstro == 'v' || monstro == 'f'){
		quarto = 400;
	}
	
	//corredor
	if (pessoas == 1){
		quarto += 10;
	} else if (pessoas == 2){
		quarto += 20;
	} else if (pessoas >= 3){
		quarto += 30;
	}
	
	//quarto
	if (dias == 1 || dias == 2){
		quarto += 1;
	} else if (dias == 3 || dias == 4){
		quarto += 2;
	} else if (dias == 5 || dias == 6){
		quarto += 3;
	}else if (dias >= 7){
		quarto += 4;
	}
	
	cout << quarto << endl;

return 0;
}
