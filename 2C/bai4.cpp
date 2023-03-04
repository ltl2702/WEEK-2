//Nhập hai số nguyên dương x, y. In bội số chung nhỏ nhất.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    a=abs(a);
    b=abs(b);
    int m=a*b;
    if (a==0 || b==0)
    {
        cout << 0;
        return 0;
    }
    else {
        for (int i=max(a,b); i<=m; i++){
            if (i%a==0 && i%b==0){
                cout << i;
                return 0;
            }
        }
    }
    return 0;
}
