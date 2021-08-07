#include <iostream>

using namespace std;

int sum(int n, int k)
{
    if (n <= 0)
        return 0;
    else
    {
        if ((n % 10) % k == 0)
            return (n % 10) + sum(n / 10, k);
        else
            return sum(n / 10, k);
    }
}

int Sumk1(int n, int k)
{
    int sum = 0;
    while (n > 0)
    {
        if ((n % 10) % k == 0)
            sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    int n, k;
    cout << "Nhap N, k: ";
    cin >> n >> k;
    cout << "De quy: " << sum(n, k) << endl;
    cout << "Khu de quy: " << Sumk1(n, k);
    return 0;
}