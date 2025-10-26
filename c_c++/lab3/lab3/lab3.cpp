#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//a-b  диапазон изменения x
	//h    на скроько изменятется x за повторение
	//n    скольуо повторений

	double
		x,
		r,
		s,
		y,
		a,
		b,
		h;

	int n = 6,
		k;


	cout << "from:\n";
	cin >> a;

	cout << "to:\n";
	cin >> b;

	cout << "step:\n";
	cin >> h;

	cout << "iterations:\n";
	cin >> n;


	for (x = a; x <= b; x += h) {

		r = s = 1;

		for (k = 1; k <= n; k++) {

			int factorialK = 1;
		
			for (int i = 1; i <= k; i++) {
				factorialK = factorialK * i;
			}

			r = (2. * k + 1) / factorialK * pow(x, 2 * k);

			s += r;      
		}

		y = (1 + 2 * x*x * exp(x*x));

		cout << "x=" << x << "\t" << "sum=" << s << "\t" << "y=" << y << "\t" << "x-y= " << abs(y - x) << endl;
	}
}






