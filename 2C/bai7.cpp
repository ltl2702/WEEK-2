//Nhập vào 6 số là các hệ số của hệ phương trình 2 ẩn bậc một. Kiểm tra xem hệ phương trình có nghiệm hay không, có vô số nghiệm hay không, là những nghiệm nào.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int d=a1*b2-a2*b1;
    int dx=c1*b2-b1*c2;
    int dy=a1*c2-a2*c1;
    if (d!=0) cout << "x = " << dx/d <<", y = " << dy/d;
    else if (d==0 && (dx!=0 || dy !=0)) cout << "Vo nghiem";
    else cout << "Vo so nghiem";
    return 0;
}
