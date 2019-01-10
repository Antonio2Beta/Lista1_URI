#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b,c;
	cin >> a >> b >> c;
	double tr=(a*c)/2;
	cout << fixed;
	cout << "TRIANGULO: " << setprecision(3) << tr << endl;
	double pi=3.14159, circle = pi*(c*c);
	cout << fixed;
	cout << "CIRCULO: " << setprecision(3) << circle << endl;
	double tp=((a+b)*c)/2;
	cout << fixed;
	cout << "TRAPEZIO: " << setprecision(3) << tp << endl;
	double square = b*b;
	cout << fixed;
	cout << "QUADRADO: " << setprecision(3) << square << endl;
	double ret = a*b;
	cout << fixed;
	cout << "RETANGULO: " << setprecision(3) << ret << endl;
	
	return 0;
}
