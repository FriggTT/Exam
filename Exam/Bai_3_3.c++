#include <iostream>

using namespace std;

int fibo(int n)
{
    if (n <= 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int m, n;
    cout << "Nhap doan can xet m, n: ";
    cin >> m >> n;
    for (int i = 0;; i++)
    {
        for (int j = m; j <= n; j++)
            if (fibo(i) % 2 != 0 && fibo(i) == j)
                cout << fibo(i) << " ";
        if (fibo(i) > n)
            return 0;
    }
    return 0;
}