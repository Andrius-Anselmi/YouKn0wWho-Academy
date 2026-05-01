#include <iostream>
using namespace std;

// 219432/problem/G
// G. Factorial

long long factorial(int number){
    
    long long fat = 1;
    for(int i = 1; i <= number; i++){
        fat = fat * i;
    }
    return fat;
}

int main() {

    int n;
    long long value;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> value;
        value = factorial(value);
        cout << value << endl;
    }
    

    return 0;
}

