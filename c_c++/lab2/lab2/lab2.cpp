#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double z, y, c, a, b, fi;
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
            y = (2 / 3) * a * pow(sin(z), 2) - ((3 * b) / 4) * pow(cos(2 * z * fi), 2);
            break;

        case 2:
            y = (2 / 3) * a * pow(sin(z), 2) - ((3 * b) / 4) * pow(cos(pow(z, 2) * fi), 2);
            break;

        case 3:
            y = (2 / 3) * a * pow(sin(z), 2) - ((3 * b) / 4) * pow(cos(z / 3 * fi), 2);
            break;

        default:
            cout << "wrong X";
            return 0;
        }
    }
    else{
        switch (x) {
        case 1:
            y = (2 / 3) * a * pow(sin(z), 2) - ((3 * b) / 4) * pow(cos(2 * sin(z) * fi), 2);
            break;

        case 2:
            y = (2 / 3) * a * pow(sin(z), 2) - ((3 * b) / 4) * pow(cos(pow(sin(z), 2) * fi), 2);
            break;

        case 3:
            y = (2 / 3) * a * pow(sin(z), 2) - ((3 * b) / 4) * pow(cos(sin(z) / 3 * fi), 2);
            break;

        default:
            cout << "wrong X";
            return 0;
        }
    }

    cout << "result: " << y;
}
