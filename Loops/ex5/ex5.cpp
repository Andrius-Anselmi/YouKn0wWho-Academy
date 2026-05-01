#include <iostream>
using namespace std;

// 219432/problem/F
// F. Multiplication table

int main() {

    int n;

    cin >> n;

    for(int i = 1; i <= 12; i++){
        cout << n << " * " << i << " = " << i * n << endl;
    }


    return 0;
}

