#include <iostream>
using namespace std;

// 219432/problem/K
// K. Divisors

int main() {

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }

    return 0;
}