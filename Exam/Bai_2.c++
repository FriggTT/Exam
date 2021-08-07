#include <iostream>

using namespace std;

void nhapMang(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

int kiemTraSoCoChuSoX(int n, int x)
{
    int last;
    for (; n != 0; n /= 10)
    {
        last = n % 10;
        if (last == x)
            return 1; // co chu so x
    }
    return 0; // khong co chu so x
}

void xuatSo(int a[], int size, int i, int x)
{
    if (i == size)
        return; // thoat de quy
    if (kiemTraSoCoChuSoX(a[i], x) == 1)
        cout << a[i] << endl;
    return xuatSo(a, size, i + 1, x);
}

int main()
{
    int a[100], size, x;
    cout << "Nhap so phan tu cho mang: ";
    cin >> size;
    nhapMang(a, size);
    cout << "Nhap chu so x: ";
    cin >> x;
    cout << "Cac phan tu co chu so " << x << " trong mang la: " << endl;
    xuatSo(a, size, 0, x);
    return 0;
}