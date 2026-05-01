#include <iostream>
#include <string.h>
#include <typeinfo>
using namespace std;

// 219432/problem/Q
// Q. Digits

void functionDigits(int n){
    string n_str = to_string(n);
    string n_str_final = n_str;

    for(int i = n_str.size() - 1, j = 0; i >= 0; i--, j++){
        n_str_final[j] = n_str[i];
        cout << n_str_final[j] << " ";
    }
}

int main() {

    int n, number;
    string n_str;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> number;
        functionDigits(number);
        cout << endl;

    }

    return 0;
}