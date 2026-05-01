#include <iostream>
using namespace std;

// 219432/problem/R
// R. Sequence of Numbers and Sum

void functionSumOfNumbers(int v1, int v2){

    int i = 0, k = 0, sum = 0;

    if(v1 < v2){
        i = v1;
        k = v2;
    }else{
        i = v2;
        k = v1;
    }

    for(int j = i; j <= k; j++){
        sum+= j;
        cout << j << " ";
        if(j == k){
            cout << "sum =" << sum;
        }
    }


}

int main() {

    int n,m;

    while(1){

        cin >> n >> m;

        if(n <= 0 || m <= 0){
            break;
        }else{
            functionSumOfNumbers(n,m);
            cout << endl;
        }

       

        
    }


    return 0;
};