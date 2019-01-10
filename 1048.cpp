#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double salario;
	cin >> salario;
	if (salario<=400 and salario>=0)
	{
		double novo_salario=salario+(salario*0.15);
		cout << fixed;
		cout << setprecision(2) << "Novo salario: " << novo_salario << endl;
		cout << setprecision(2) << "Reajuste ganho: " << novo_salario - salario << endl;
		cout << "Em percentual: 15 %" << endl;
	}
	if (salario>=400.01 and salario<=800)
	{
		double novo_salario=salario+(salario*0.12);
		cout << fixed;
		cout << setprecision(2) << "Novo salario: " << novo_salario << endl;
		cout << setprecision(2) << "Reajuste ganho: " << novo_salario - salario << endl;
		cout << "Em percentual: 12 %" << endl;
	}
	if (salario>=800.01 and salario<=1200)
	{
		double novo_salario=salario+(salario*0.10);
		cout << fixed;
		cout << setprecision(2) << "Novo salario: " << novo_salario << endl;
		cout << setprecision(2) << "Reajuste ganho: " << novo_salario - salario << endl;
		cout << "Em percentual: 10 %" << endl;
	}
	if (salario>=1200.01 and salario<=2000)
	{
		double novo_salario=salario+(salario*0.07);
		cout << fixed;
		cout << setprecision(2) << "Novo salario: " << novo_salario << endl;
		cout << setprecision(2) << "Reajuste ganho: " << novo_salario - salario << endl;
		cout << "Em percentual: 7 %" << endl;
	}
	if (salario>2000)
	{
		double novo_salario=salario+(salario*0.04);
		cout << fixed;
		cout << setprecision(2) << "Novo salario: " << novo_salario << endl;
		cout << setprecision(2) << "Reajuste ganho: " << novo_salario - salario << endl;
		cout << "Em percentual: 4 %" << endl;
	}
	return 0;
}
