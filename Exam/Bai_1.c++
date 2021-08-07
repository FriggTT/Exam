#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;
    cout << "Nhap x: ";
    cin >> x;
    x = x * M_PI / 180;
    double Pow = x*x*x;
    long long factorial = 6;
    int i = 2, Symbol = -1;
    double Sum = x, Check = Pow / factorial;
    while (Check >= 0.000001)
    {
        Sum += Symbol * Check;
        i++;
        Pow *= x * x;
        factorial *= (i + 1) * (i + 2);
        Check = Pow / factorial;
        Symbol *= -1;
    }
    cout << "sin(x) = " << Sum;
    return 0;
}