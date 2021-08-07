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

int kiemTraSoCoBaChuSo(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int tinhTich(int a[], int size, int tich, int i)
{
    if (i == size)
        return tich;
    if (a[i] % 2 == 0 && kiemTraSoCoBaChuSo(a[i]) == 3)
        tich *= a[i];
    return tinhTich(a, size, tich, i + 1);
}

int main()
{
    int a[100], size;
    cout << "Nhap so phan tu cho mang: ";
    cin >> size;
    nhapMang(a, size);
    cout << "Tich cac so chan co 3 chu so trong mang la: " << tinhTich(a, size, 1, 0) << endl;
    return 0;
}