#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int a, b;
    cin >> a >> b;

    //cout << fixed;      // 소수점 고정시켜 반올림
    cout.precision(10);  // 소수점 10자리까지 표현
    /* 출력 값의 절대오차 또는 상대오차가 10^9이하 
     = 오차 허용 범위가 소수 9자리 말고 10자리까지 가능*/

    cout << (double)a/b << endl;
    return 0;
}