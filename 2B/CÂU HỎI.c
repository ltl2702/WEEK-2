Câu 1: Đoạn mã nào phía dưới có thể thay thế cho lệnh (tam nguyên) sau:
min = (a<b) ? a : b;
a.	if (a>b) min = a;
 	else min = b;
b.   if (a<b) min = a;
 	else min = b;
c.	(a>b) min = a;
 	else min = b;
d.   Không có đáp án đúng

// b

Câu 2.  Khoanh tròn đáp án đúng:
a.	Nhãn default là bắt buộc phải có trong cấu trúc lệnh switch.
b.   Lệnh ngắt break là bắt buộc có trong tập lệnh mặc định của  nhãn default trong cấu trúc lệnh switch.
c.	Quên lệnh ngắt break trong cấu trúc lệnh switch là mắc lỗi biên dịch.
d.   Ứng dụng hay gặp của cấu trúc lệnh switch là tạo MENU.

//a

Câu 3.  Các nhãn case trong cấu trúc switch phải là:
a.    Biểu thức trả về kiểu số nguyên
b.   Biểu thức trả về kiểu ký tự
c.    Phải là hằng (kiểu số nguyên hoặc kiểu ký tự), chứ không thể là biến hay biểu thức chứa biến.
d.   Kiểu số thực

//c

Câu 4.  Khoanh tròn đáp án đúng cho đoạn mã lệnh sau:
int n = 5, k;
  for (k = 1; k <= 50; k++) {
  	if ( (k%n)) continue;
      cout << k << “\t”;
  }
a.	In ra các số nguyên không chia hết cho 5 nằm trong khoảng từ 1 tới 50.
b.   In ra các số nguyên chia hết cho 5 nằm trong khoảng từ 1 tới 50.
c.	In ra các số nguyên nằm trong khoảng từ 1 tới 50.
d.   Không in ra gì vì biểu thức logic trong phần điều kiện của lệnh if sai.

//d

Câu 5.  Trong cấu trúc của vòng lặp for (khởi_tạo; điều_kiện_lặp; cập_nhật)
a.	Nhất định phải đủ cả ba biểu thức  khởi_tạo, điều_kiện_lặp và cập_nhật.
b.   Có thể thiếu hai trong ba biểu thức trên
c.	Có thể thiếu một trong ba biểu thức trên
d.   Có thể thiếu bất cứ biểu thức nào trong ba biểu thức trên.

//d

Câu 6.  Để kết thúc sự lặp lại hiện hành mà không thực thi các câu lệnh còn lại trong khối vòng lặp. Sự điều khiển trở về ngay lập tức với điều kiện kiểm tra, xác định xem có cần kết thúc chính vòng lặp hoặc tiếp tục với sự lặp lại kế tiếp hay không, ta gọi lệnh nào sau đây:
a.	break;
b.   continue;
c.	goto;
d.   return  (0);

Câu 7.  Khoanh tròn đáp án đúng cho đoạn mã lệnh sau:
       	int x = 10;
	   	for (int x = 0; x <= 20; x ++);
       	cout << x;
a.    In ra 20
b.   In ra 21
c.    In ra 10
d.   Các đáp án trên đều sai, đoạn mã lệnh có lỗi

//c

Câu 8.  Khoanh tròn các đáp án sai:
a.  Trong 3 kiểu lặp: while, do- while và for thì do- while là linh hoạt nhất.
b. Trong 3 kiểu lặp: while, do- while và for thì while là linh hoạt nhất
c.  Trong 3 kiểu lặp: while, do- while và for thì for là linh hoạt nhất
d.       Một đoạn code bất kỳ sử dụng một trong 3 kiểu lặp while, do- while hoặc for thì nó cũng có thể được xây dựng bằng một trong hai kiểu lặp còn lại.
e.  for là phép lặp “đếm” tự nhiên.

Câu 9.  Cho đoạn chương trình sau:
if (i == j) {
  	cout << "A" << endl;
}
else if ((i % j) < 3) {
 	cout << "B" << endl;
}
else if (i < (j-1)) {
  	cout << "C" << endl;
}
else {
  	cout << "D" << endl;
}
Nếu i =4 và j = 9, kết quả xuất ra màn hình sẽ là?
a.       A
b.  	D
c.   	B
d.  	C

//C

Câu 10.    Cho đoạn chương trình sau:
#include <iostream>
using namespace std;

int main()
{
   int x=7,y=45,z=63,min_num;
	if (x<z)
      min_num=x;
	else
      min_num=z;
	if(y<z)
      min_num=y;
	else
	   min_num=z;

   cout<<"The minimum is:" <<min_num;
   system ("pause");
   return 0;
}
a.   	7
b.  	45
c.   	63
d.  	Tất cả các đáp trên đều sai

//b

Câu 11.    Kết quả xuất ra khi biên dịch khối lệnh sau:
int num = 5, sum = 0;
while (num > 0)
{
  	if (num %2 !=0)
      sum+=num;
  	--num;
}
cout << "The sum is " << sum << endl;

a.   The sum is 0
b.  	The sum is 5
c.   	The sum is 9
d.  	The sum is 15

//c

Câu 12.    Cho biết kết quả xuất ra của đoạn chương trình sau đây trên màn hình là gì?
int1 = 120;
cin >> int2;        	// Giả sử người sử dụng nhập vào 30
if ((int1 > 100) && (int2 = 50))
int3 = int1 + int2;
else
int3 = int1 - int2;
cout << int1 << ' ' << int2 << ' ' << int3;
a.       120   30  150
b.      120   50  170
c.       120   30  170
d.      120   30  90

//d (==)

Câu 13.    Cho biết kết quả xuất ra của đoạn chương trình sau đây trên màn hình là gì?
int a=1,b=2;
if (a<b)
   if (a>b) 	a=a+1;
   else       	b=b+1;
else          	a=a+b;
cout<<a*b;
a.       2
b.      3
c.       6
d.      12

//b

Câu 14.    Trong các đoạn code phía dưới, đoạn nào không có lỗi?
a.       while ( c <= 5 )
     	{
              	product *= c;
     	     	c++;

b.      if ( gender == 1 )
      cout << "Woman" << endl;
     	else;
      cout << "Man" << endl;

c.       while ( z >= 0 ) // nguoi dung khoi tao z = 2
                    	sum += z;

d.      while ( i <= y )
           	{
    	            	power *= x;
i++;
}

Câu 15.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
int x = -1;
     	do {
	          	cout<<"Hello, world!\t";
	          	x++;
     	} while ( !x );
In ra màn hình:
a.       Hello, world!
b.      Hello, world!   Hello, world!
c.       Hello, world!   Hello, world!           	Hello, world!
d.      Không in gì

//b

Câu 16.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
int x = -3;
     	do {
	          	cout<<"Hello, world!\t";
	          	x++;
     	} while ( x );
In ra màn hình:
a.       Hello, world!
b.      Hello, world!   Hello, world!
c.       Hello, world!   Hello, world!           	Hello, world!
d.      Không in gì

//c

Câu 17.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
int x = -3;
     	while (x) {
	          	cout<<"Hello, world!\t";
	          	x++;
     	}
In ra màn hình:
a.       Hello, world!
b.      Hello, world!   Hello, world!
c.       Hello, world!   Hello, world!           	Hello, world!
d.      Không in gì

//c

Câu 18.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
int x = -3;
     	while (!x) {
	          	cout<<"Hello, world!\t";
	          	x++;
     	}
In ra màn hình:
a.       Hello, world!
b.      Hello, world!   Hello, world!
c.       Hello, world!   Hello, world!           	Hello, world!
d.      Không in gì

//d

Câu 19.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
int x = -3;
     	while (-3) {
	          	cout<<"Hello, world!\t";
	          	x++;
              	if (!x)
                          	break;
     	}
In ra màn hình:
a.       Hello, world!
b.      Hello, world!   Hello, world!
c.       Hello, world!   Hello, world!           	Hello, world!
d.      Không in gì

//c

Câu 20.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
int i = -3;
           	for( ; ; ) {
	                	cout<<"Hello, world!\n";
                    	i ++;
	                	if (i == 0) break;
           	} ;
In ra màn hình:
a.       Hello, world!   Hello, world!
b.      Hello, world!   Hello, world!           	Hello, world!
c.       Đoạn code có lỗi.
d.      Không in gì.

//b
