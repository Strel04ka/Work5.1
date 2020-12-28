// Lab5.1 
// Варіане 5 
// Котик Олег
#include <iostream>
#include <cmath>
using namespace std;

double h(const int a, const int b)
{
	return a / (b * b + 1) + 1 / (a * a + b * b);
}
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = pow(h(s, t), 4) + h(1, s * s + t * t) / 1 + pow(h(s * t, 1), 2);
	cout << "c = " << c;
	cin.get();
	return 0;
}