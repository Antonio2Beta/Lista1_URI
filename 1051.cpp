#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double x;
	cin >> x;
	if (x>=0 and x<2000)
		cout << "Isento" << endl;
	if (x>=2000.01 and x<3000)
	{
		double taxa = ((x-2000)*0.08);
		cout << fixed << endl; 
		cout << "R$ " << setprecision(2) << taxa << endl;
	}
	if (x>=2000.01 and x<=4500)
	{
		double taxa = ((x-3000)*0.18)+80.0;
		cout << fixed << endl; 
		cout << "R$ " << setprecision(2) << taxa << endl;
	}
	if (x>4500)
	{
		double taxa = ((x-4500)*0.28)+350.0;
		cout << fixed << endl; 
		cout << "R$ " << setprecision(2) << taxa << endl;
	}
	return 0;
}
