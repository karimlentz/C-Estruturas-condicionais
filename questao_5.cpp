#include <iostream>

using namespace std;

int main(){
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if ( d <= a){
		cout << d << endl << a << endl << b << endl << c << endl;
	} else if ( d > a && d <= b){
		cout << a << endl << d << endl << b << endl << c << endl;
	} else if ( d > b && d <= c){
		cout << a << endl << b << endl << d << endl << c << endl;
	} else if ( d >= c){
		cout << a << endl << b << endl << c << endl << d << endl;
	}		
		
return 0;
}
