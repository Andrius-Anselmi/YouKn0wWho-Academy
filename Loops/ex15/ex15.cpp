#include <iostream>
using namespace std;

// 219432/problem/S
// S. Sum of Consecutive Odd Numbers

int functionSumConsecutiveOddNumbers(int a, int b){
    int min, max, sum = 0;
    if(a >= b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }

    for(int i = min + 1; i < max; i++){
        if(!(i % 2 == 0)){
            sum+=i;
        }
    }

    return sum;
}

int main(){

    int n, a, b;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << functionSumConsecutiveOddNumbers(a,b) << endl;
    }

    return 0;

}