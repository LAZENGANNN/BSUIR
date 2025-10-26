#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double z, y, a, b, x, expr;
    int f;

        cout << "type a, b\n";
        cin >> a >> b;

        cout << "type z\n";
        cin >> z;

        if (z < 0) {
            cout << "z<0 => x=z" << endl;
            x = z;
        }
        else {
            cout << "z>=0 => x=sin(z)";
            x = sin(z);
        }

        cout << "\n select function \n 1) 2x (default)\n 2) x^2 \n 3) x/3 \n";
        cin >> f;

        switch (f) {
        default:
            cout << "Wrong choose" << endl;
        case 1:
            cout << "2x selected";
            expr = 2 * x;
            break;

        case 2:
            cout << "x^2 selected";
            expr = x * x;
            break;

        case 3:
            cout << "x/3 selected";;
            expr = x / 3.;
            break;
        }

        y = 2. / 3. * a * pow(sin(x), 2) - 3 * b / 4 * pow(cos(expr), 2);

        cout << "\n result: " << y << endl;
}
