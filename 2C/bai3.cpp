//Viết chương trình nhập vào từ bàn phím ba số. Kiểm tra xem 3 số đó có thỏa mãn là độ dài các cạnh của một tam giác hay không (áp dụng bất đẳng thức tam giác)?
//Nếu có, in ra màn hình thông báo về chu vi của tam giác đó và cho biết tam giác đó là loại tam giác gì (đều, cân, vuông, …).

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int p=a+b+c;
    if ((a+b>c) && (b+c>a) && (c+a>b)) {
        cout << p << endl;
        if (a==b && b==c && c==a) cout << "deu";
        else if (a==b || b==c || c==a) cout << "can";
        else if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) cout << "vuong";
        else cout << "thuong";
    }
    else cout << "Invalid";
}
