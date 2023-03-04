 //Nhập vào ba số Min, Max và Step_size. Viết chương trình chuyển đổi nhiệt độ (như trong bài 4) với nhiệt độ F bắt đầu từ Min, kết thúc ở Max và nhảy theo Step_size.
 // Trong bài 9 Min = 0, Max = 300 và Step_size = 20.

  #include<bits/stdc++.h>
using namespace std;
int main()
{
    double min,max,step;
    cin >> min>> max >> step;
    for (double i=min; i<=max; i+=step){
        cout << setprecision(2) << fixed << i << " " << (i-32)*5/9 << " "<< (i-32)*5/9+273.15 << endl;
    }
    return 0;
}
