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
		a = 0.1,
		b = 1.0,
		h = 0.1;

	int n=6, 
		k;

	for (x = a; x <= b; x += h) {

		r = s = 1;

		for (k = 1; k <= n; k++) {

			int factorialK = 1;
		
			for (int i = 1; i <= k; i++) {
				factorialK = factorialK * i;
			}

			r = ((2. * k + 1.) / (factorialK)) * pow(x, 2 * k);

			s += r;      
		}

		y = (1 + 2 * pow(x, 2)) * exp(pow(x,2));

		cout << "x=" << x << "   " << "sum=" << s << "   "<< "y=" << y << "   " << endl;
	}
}






