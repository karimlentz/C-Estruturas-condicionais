#include <iostream>

using namespace std;

int main(){
	
	float peso, altura;
	cin >> peso >> altura;
	
	if (altura < 1.20){
		if ( peso < 60){
			cout << 'A' << endl;
		} else if (peso >= 60 && peso <=90){
			cout << 'D' << endl;
		} else if (peso < 90){
			cout << 'G' << endl;
		}
	} else if (altura >= 1.20 && altura <= 1.70){
		if ( peso < 60){
			cout << 'B' << endl;
		} else if (peso >= 60 && peso <=90){
			cout << 'E' << endl;
		} else if (peso < 90){
			cout << 'H' << endl;
		}
	} else if (altura > 1.70){
		if ( peso < 60){
			cout << 'C' << endl;
		} else if (peso >= 60 && peso <=90){
			cout << 'F' << endl;
		} else if (peso < 90){
			cout << 'I' << endl;
		}
	}
		
return 0;
}
