//Viết phương trình nhập vào 3 hệ số của một phương trình bậc hai. Giải phương trình bậc hai đó, có tính nghiệm phức.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double denta=b*b-4*a*c;
    if (denta<0) {
cout  << setprecision(0) << fixed <<-b/(2*a)<<-sqrt(abs(denta))/(2*a)<<'i' <<endl;
cout  << setprecision(0) << fixed <<-b/(2*a)<<"+"<<sqrt(abs(denta))/(2*a)<<'i' <<endl;
    }

    else if (denta==0) cout << setprecision(2) << fixed << -b/(2*a);
    else
{
cout  << setprecision(2) << fixed <<(-b-sqrt(denta))/(2*a) <<endl;
cout <<(-b+sqrt(denta))/(2*a)<<endl;
    return 0;
}

}
