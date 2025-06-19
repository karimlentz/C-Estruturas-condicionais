#include <iostream>

using namespace std;

int main(){
	
	int idade;
	float peso;
	
	cin >> idade >> peso;
	
	if (idade < 20){
		if (peso < 60){
			cout << '9' << endl;
		} else if ( peso >= 60 && peso <=90){
			cout << '8' << endl;
		} else if ( peso < 90){
			cout << '7' << endl;
		}
	} else if (idade >=20 && idade <=50){
		if (peso < 60){
			cout << '6' << endl;
		} else if ( peso >= 60 && peso <=90){
			cout << '5' << endl;
		} else if ( peso < 90){
			cout << '4' << endl;
		}
	} else if ( idade < 50){
		if (peso < 60){
			cout << '3' << endl;
		} else if ( peso >= 60 && peso <=90){
			cout << '2' << endl;
		} else if ( peso < 90){
			cout << '1' << endl;
		}
	}
		
return 0;
}
