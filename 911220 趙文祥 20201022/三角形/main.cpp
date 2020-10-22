#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c,a2,b2,c2;
    cout << "請輸入兩邊長度";
    cin >> a;
    cin >> b;
    a2 = a*a;
    b2 = b*b;
    c2=a2+b2;
    c = sqrt(c2);
    cout << c ;

}