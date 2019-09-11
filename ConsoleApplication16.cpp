#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double a, b, Sum, Difference, Product, Quotient;
	cout << "Enter a" << endl;
	cin >> a;
	a = fabs(a);
	cout << "Enter b" << endl;
	cin >> b;
	b = fabs(b);
	Sum = a + b;
	Difference = a - b;
	Product = a*b;
	Quotient = a/ b;
	cout << "Sum=" << Sum << endl;   // сумма модулей а и b //
	cout << "Difference=" << Difference << endl; // разность модулей а и b //
	cout << "Product=" << Product << endl; // произведение модулей а и b //
	cout << "Quotient=" << Quotient << endl; // частное модулей а и b //
	system("pause");
	return 0;

} 
