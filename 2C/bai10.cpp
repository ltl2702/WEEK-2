/*Để chuyển đổi nhiệt độ dưới dạng độ F (Fahrenheit) sang nhiệt độ dưới dạng độ C (Celsius), ta trừ cho 32, nhân 5 sau đó chia cho 9.
    Để chuyển đổi nhiệt độ dưới dạng độ C (Celsius) sang nhiệt độ dưới dạng độ K (Kelvin), ta cộng thêm 273.15.
    Viết chương trình hiển thị ra màn hình giá trị tương ứng độ C, độ K của một số nguyên nhập vào từ bàn phím. Định dạng in ra như trong màn hình dưới:
    	Fahrenheit   	Celsius  	Absolute Value

    	   0          	-17.78     	255.37
    	   20         	-6.67      	266.48
    	   40         	4.44       	277.59
    	   ...        	......     	......
    	   ...        	......     	......
    	   300        	148.89     	422.04

        */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double f;
    cin >> f;
    cout << f << " " << setprecision(2) << fixed<<  (f-32)*5/9 << " " << (f-32)*5/9 +273.15;
}
