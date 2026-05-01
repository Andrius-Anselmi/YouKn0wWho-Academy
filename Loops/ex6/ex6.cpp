#include <iostream>
#include <math.h>
using namespace std;

// 219432/problem/H
// H. One Prime

int main() {

    long long n;
    bool prime = true;

    cin >> n;

    if(n % 2 == 0 && n != 2 || n == 1){
        prime = false;
    }else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                prime = false;
            }
        }
    }

    if(prime){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;


}