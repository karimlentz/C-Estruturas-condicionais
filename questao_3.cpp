#include <iostream>

using namespace std;

int main(){
	
	float n1, n2, n3, media;
	cin >> n1 >> n2 >> n3;
	
	media = ((n1*2)+(n2*3)+(n3*5))/10;
	cout << media << endl;
	
	if (media > 0.0 && media < 5.0){
		cout << 'E' << endl;
	} 
	
	else if ((media == 5.0) or ((media > 5.0) && (media < 6.0))){
		cout << 'D' << endl;
		
	} else if ((media == 6.0) || ((media > 6.0) && (media < 7.0))){
		cout << 'C' << endl;
		
	} else if ((media == 7.0) || ((media > 7.0) && (media < 8.0))){
		cout << 'B' << endl;
		
	} else if ((media == 8.0) || ((media > 8.0) && (media <= 10.0))){
		cout << 'A' << endl;
	}

return 0;
}
