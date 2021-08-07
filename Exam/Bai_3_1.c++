#include <iostream>
#include <math.h>

using namespace std;

long Giai_thua(int n)
{
    if (n == 1)
        return 1;
    else
        return n * Giai_thua(n - 1);
}
long Giai_thua1(int n)
{
    int gt = 1;
    for (int i = 1; i <= n; i++)
        gt *= i;
    return gt;
}

int main()
{
    float sum = 0, sum1 = 0;
    float P1 = 1;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + Giai_thua(i) / sqrt(i + 1);
        sum1 = sum1 + Giai_thua1(i) / sqrt(i + 1);
    }
    cout << "Dung de quy: " << sum;
    cout << "Khu de quy: " << sum1;
    return 0;
}
