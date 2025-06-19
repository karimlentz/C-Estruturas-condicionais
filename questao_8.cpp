#include <iostream>

using namespace std;

int main(){
	
	float hExtra, hFalta;
	cin >> hExtra >> hFalta;
	
	int h;
	h = (hExtra - (2/3 * hFalta))*60;
	
	if (h > 2400){
		cout << "500" << endl;
	} else if ( h > 1800 && h <= 2400){
		cout << "400" << endl;
	} else if ( h > 1200 && h <= 1800){
		cout << "300" << endl;
	} else if ( h > 600 && h <= 1200){
		cout << "200" << endl;
	} else if ( h <= 600){
		cout << "100" << endl;
	}
	
return 0;
}
