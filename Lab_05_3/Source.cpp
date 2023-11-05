#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
	double tp, tk, z;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double dt = (tk - tp) / n;
	double t = tp;
	while (t <= tk)
	{
		z = s(2 * t + 1) + 2 * s(t * t) + sqrt(s(1));
		cout << t << " " << z << endl;
		t += dt;
	}
	return 0;
}
double s(const double x)
{
	if ((fabs(x) >= 1) && (x == 0))
		return (cos(x) * cos(x) + 1) / exp(x);
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = -x * x / ((3 * k - 2) * (3 * k - 1) * 3 * k);
			a *= R;
			S += a;
		} while (k < 4);
		return S;
	}
}