//Nhập hai số nguyên dương x, y. In ước số chung lớn nhất

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    for(int i=min(x,y); i>=1; i--){
        if(x%i==0 && y%i==0){
            cout<<i;
            return 0;
        }
    }
}
