#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	long double dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	cout << fixed << endl;
	cout << setprecision(4) << dist << endl;
	
	return 0;
}
