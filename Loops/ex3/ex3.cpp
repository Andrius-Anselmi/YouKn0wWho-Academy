#include <iostream>
using namespace std;

// 219432/problem/C
// C. Even, Odd, Positive and Negative

int main() {

  int n, num = 0, even = 0, odd = 0, positive = 0, negative = 0;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> num;
    if(num > 0 && num != 0){
      positive++;
      if(num % 2 == 0){
          even++;
      }else{
        odd++;
      }
    }else if(num < 0){
      negative++;
      if(num % 2 == 0){
          even++;
      }else{
        odd++;
      }
    }else{
      even++;
   }
  }

    cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << positive << endl << "Negative: " << negative << endl;

    return 0;

  }

