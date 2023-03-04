//Viết chương trình tính tổng các chữ số của 1 số nguyên dương được nhập vào từ bàn phím.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dem=0;
    int du;
    while (n>0)
    {
        du=n%10;
        n=n/10;
        dem+=du;
    }
    cout << dem;
    }
