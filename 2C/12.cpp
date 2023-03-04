//Viết chương trình nhập số nguyên dương n, kiểm tra n có là số chính phương không?

#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int n;
 cin >> n;
 int i=sqrt(n);
 if (i*i==n) cout << "YES";
 else cout << "NO";
}
