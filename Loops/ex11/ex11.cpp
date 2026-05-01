#include <iostream>
using namespace std;

// 219432/problem/O
// O. Pyramid

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
       for(int j = 0; j < i + 1; j++){
        cout << "*";
       }
       cout << endl;
    }


    return 0;
}