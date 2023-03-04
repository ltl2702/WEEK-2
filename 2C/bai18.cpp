/*Bài 18. Viết chương trình tính điểm trung bình cho các môn học. Chương trình cho phép nhập vào điểm số của từng môn học trong khoảng từ 0 ... 10.
  Nếu điểm số nhập vào lớn hơn 10 thì yêu cầu nhập lại. Nếu điểm số nhỏ hơn 0 thì in ra điểm trung bình và kết thúc chương trình.
Kết quả ví dụ:
Diem mon hoc 1: 7
Diem mon hoc 2: 11
Nhap lai diem mon hoc 2 (trong khoang tu 0..10): 1
Diem mon hoc 3: -5
So mon hoc: 2
Diem trung binh cua 2 mon hoc: 4
*/

 #include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum=0;
    int dem=0;
    double n;
    do {
          cout << "Diem mon hoc: ";
            cin >> n;

          while (n>10)
            {
                  cout << "Nhap lai diem mon hoc (trong khoang tu 0...10): ";
                   cin >> n;
             }

          if (n<0) break;

          while (n>=0 && n<=10){
             sum+=n;
              dem++;
              }
  } while (n>=0 && n<=10);

cout << "So mon hoc: " << dem << endl;
cout << "Diem trung binh cua " << dem << " mon hoc: " << sum/dem;

}
