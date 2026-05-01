#include <iostream>
using namespace std;

// 219432/problem/E
// E. Max


int main() {

    int n, number, max;
    max = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> number;
        if(max == 0){
            max = number;
        }
        
        if(number > max){
            max = number;
        }
    }

    cout << max << endl;


    return 0;
}