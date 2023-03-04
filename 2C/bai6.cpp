//Nhập tử số và mẫu số của một phân số, in ra phân số tối giản.

   #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m;
    cin >> t >> m;
    if (t==0)
    {
        cout << 0;
        return 0;
    }
    if ((t<0 && m>0)||(t>0 && m<0)) cout << "-";
    t=abs(t);
    m=abs(m);
    int u;
    for (int i=1; i<=min(t,m); i++){
        if (t%i==0 && m%i==0) u=i;
    }
    if (m/u==1) cout << t/u;
    else cout << t/u << "/" << m/u;
}
