#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double betta, x, y, z, res1, res2;

    cout << "type x, y, z" << endl;

    cin >> x >> y >> z;

    //x = 16.55 * pow(10, -3); // 0.01655
    //y = -2.75;
    //z = 0.15;

    res1 = sqrt(10 * (pow(x, (1 / 3)) + pow(x, y + 2))); 
    res2 = trunc((pow(asin(z), 2) - abs(x - y))*10)/10;  //-2.7

    betta = res1 * res2;

    //cout << x << "  " << y << "  " << z << endl << res1 << "  " << res2 << endl << betta;

    cout <<endl << "result: " << betta;
}

