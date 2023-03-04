/*Viết chương trình tính điểm trung bình cho các môn học. Số môn học được nhập vào từ bàn phím. Với mỗi môn học có điểm số (từ 0,0..10,0) và hệ số (1 1,5 2 2,5 hoặc 3). Viết chương trình in ra tổng số môn học, tổng số hệ số và điểm trung bình. Chương trình cần kiểm tra các điều kiện cần thiết.
Kết quả ví dụ:
Tong so mon hoc can tinh DTB: 2
Diem mon hoc 1: 7
He so mon hoc 1: 1
Diem mon hoc 2: 3
He so mon hoc 2: 3
So mon hoc: 2
Tong so he so: 4
Diem trung binh cua 2 mon hoc: 4
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[1000], b[1000];
    double tonghs=0, sum=0;
    for (int i=0; i<n; i++){
        cin >> a[i]>> b[i];
        if (a[i]>10 || a[i]<0)
        {
            cout << "Sai diem so";
            return 0;
        }
        if (b[i]>3||b[i]<0)
        {
            cout << "Sai he so";
            return 0;
        }
    }
    cout << "Tong so mon hoc can tinh DTB: " << n << endl;

    for (int i=0; i<=n; i++)
    {
        sum+=a[i]*b[i];
        tonghs+=b[i];
    }
    for (int i=0; i<n; i++)
    {
        cout << "Diem mon hoc " << i << "Tong so mon hoc can tinh DTB: " << n << endl;
        cout << "He so mon hoc " << i << ": " << setprecision(1)<< fixed << 1.0*b[i] << endl;
    }
cout << "Tong so he so: " << tonghs << endl;
cout << "Diem trung binh cua " << n << " mon hoc: " << setprecision(1)<< fixed <<sum/tonghs;

}
