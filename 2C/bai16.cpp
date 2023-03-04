/*Bài 16. Viết chương trình nhập một chữ số từ màn hình, in ra thông báo chữ số đó dưới dạng chữ.
  Đọc các chữ số đến khi nào chữ số nhập nằm ngoài khoảng 0..9. Nếu giá trị nhập vào nằm ngoài khoảng 0..9 thì dừng chương trình.
Kết quả ví dụ:
Nhap vao mot so trong khoang 0..9: 0
Vua nhap chu so khong
Nhap vao mot so trong khoang 0..9: 5
Vua nhap chu so nam
Nhap vao mot so trong khoang 0..9: 10
Gợi ý: sử dụng cấu trúc switch. Sử dụng cấu trúc do … while để thực hiện yêu cầu lặp.
  (<biểu thức điều kiện>) sẽ kiểm tra số nhập vào có nằm trong khoảng từ 0 đến 9 hay không.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
 do {
      cout << "nhap 1 so trong khoang 0...9: ";
      cin >> n;
    switch (n){
    case 0: cout << "Vua nhap chu so khong\n";
           break;
    case 1: cout << "Vua nhap chu so mot\n";
            break;
    case 2: cout << "Vua nhap chu so hai\n";
            break;
    case 3: cout << "Vua nhap chu so ba\n";
            break;
    case 4: cout << "Vua nhap chu so bon\n";
            break;
    case 5: cout << "Vua nhap chu so nam\n";
            break;
    case 6: cout << "Vua nhap chu so sau\n";
            break;
    case 7: cout << "Vua nhap chu so bay\n";
            break;
    case 8: cout << "Vua nhap chu so tam\n";
            break;
    case 9: cout << "Vua nhap chu so chin\n";
            break;
   }

   } while (n>=0 && n<=9);

}
