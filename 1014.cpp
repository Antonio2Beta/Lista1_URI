#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int x;
	double y;
	cin>>x;
	cin>>y;
	double c = x/y;
	cout << fixed;
	cout << setprecision(3) << c << " km/l" << endl;
	
	return 0;
}
