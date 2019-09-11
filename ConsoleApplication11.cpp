
#include<iostream>

using namespace std;

int main()
{
	double a, b, Sum, Difference, Product, Quotient;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	Sum = a * a + b * b;
	Difference = a * a - b * b;
	Product = a * a*b*b;
	Quotient = a * a / (b*b);
	cout << "Sum=" << Sum << endl;   // сумма квадратов а и b //
	cout << "Difference=" << Difference << endl; // разность квадратов а и b //
	cout << "Product=" << Product << endl; // произведение квадратов а и b //
	cout << "Quotient=" << Quotient << endl; // частное квадратов а и b //
	system("pause");
	return 0;

}