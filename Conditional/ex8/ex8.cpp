#include <iostream>
using namespace std;

// 219158/problem/K
// K. Max and Min

int main() {

  long long a, b, c;
  long long max, min;

  cin >> a >> b >> c;

  if(a == b && a == c){
    max = a;
    min = b;
  }else if(a == b){
    if(a > c){
      max = a;
      min = c;
    }else{
      max = c;
      min = a;
    }
  }else if(a == c){
    if(a > b){
      min = b;
      max = a;
    }else{
      max = b;
      min = a;
    }
  }else if(b == c){
    if(b > a){
      max = b;
      min = a;
    }else{
      max = a;
      min = b;
    }
  }else if(a > b && a > c){
    if(b > c){
      max = a;
      min = c;
    }else{
      max = a;
      min = b;
    }
  }else if(b > a && b > c){
    if(a > c){
      max = b;
      min = c;
    }else{
      max = b;
      min = a;
    }
  }else if(c > a && c > b){
      if(a > b){
        max = c;
        min = b;
      }else{
        max = c;
        min = a;
      }
  }

  cout << min << " " << max << endl; 


  return 0;

}
