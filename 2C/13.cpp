//Nhập số N, in ra các số nguyên tố, các số hoàn hảo (hoàn chỉnh), các số chính phương từ 2…N.

  #include<bits/stdc++.h>
using namespace std;

bool lasonguyento(int n)
{
    if (n<2)
        return false;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0) return false;
    }
    return true;
}

bool lasohoanhao(int n)
{
    int sum=0;
    for (int i=1; i<n; i++)
    {
        if (n%i==0) sum+=i;
    }
    if (sum==n) return true;
    return false;
}
bool lasochinhphuong(int n)
{
    int i=sqrt(n);
    if(i*i==n) return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    for (int i=2; i<=n; i++)
    {
        if (lasonguyento(i)) cout << i << " ";
    }
    cout << endl;

    for (int i=2; i<=n; i++)
    {
        if (lasohoanhao(i)) cout << i << " ";
    }
    cout << endl;
    for (int i=2; i<=n; i++)
    {
        if (lasochinhphuong(i)) cout << i << " ";
    }
    cout << endl;
}
