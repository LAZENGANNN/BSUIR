#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double z, y, c, a, b, fi, exp;
    int x;

    cout << "type z\n";
    cin >> z;

    cout << "type a, b, fi\n";
    cin >> a >> b >> fi;

    cout << "chose X \n 1) 2x\n 2) x^2 \n 3) x/3 \n";
    cin >> x;

    if (z < 0) {
        switch (x) {
        case 1:
            exp = 2 * z * fi;
            break;

        case 2:
            exp = pow(z, 2) * fi;
            break;

        case 3:
            exp = z / 3. * fi;
            break;

        default:
            cout << "wrong X";
            return 0;
        }
    }
    else{
        switch (x) {
        case 1:
            exp = 2 * sin(z) * fi;
            break;

        case 2:
            exp = pow(sin(z), 2) * fi;
            break;

        case 3:
            exp = sin(z) / 3. * fi;
            break;

        default:
            cout << "wrong X";
            return 0;
        }
    }

    y = (2. / 3.) * a * pow(sin(z), 2) - ((3 * b) / 4) * pow(cos(exp), 2);


    cout << "result: " << y;
}
