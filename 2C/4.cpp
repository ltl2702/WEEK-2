/*Tương tự bài trên với dạng tam giác sau (với N bằng 5):
*********
 *******
  *****
   ***
    *
*/
Cach 1:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=n; i>=1; i--){
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
    	for (int j=2*i-1; j>=1; j--){
    		cout << "*";
		}
		cout << endl;
		}
}


/* Cach 2:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n+i-1; j++){
        	if (j<=n-i)	cout << " ";
        	else cout << "*";
        }
        cout << endl;
    }
}
/*
