#include <iostream>
using namespace std;

// 219432/problem/N
// N. Numbers Histogram

void functionS(char s, int n){
    int i = 0;
    while(i < n){
        cout << s;
        i++;
    }
}

int main() {

    char s;
    int n, n2;

    cin >> s;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> n2;
        functionS(s,n2);
        cout << endl;
    }


    return 0;
}