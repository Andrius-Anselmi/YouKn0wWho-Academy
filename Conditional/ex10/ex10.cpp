#include <iostream>
using namespace std;

// 219158/problem/T
// T. Sort Numbers

int greather(int a, int b){
  int temp;
  if(a > b){
    temp = a;
  }else{
    temp = b;
  }

  return temp;
}

int main(){

  long long a,b,c, first, second, last;

  cin >> a >> b >> c;

  first = greather(a,b);
  if(first == a){
    if(b > c){
      second = b;
      last = c;
    }else{
      last = b;
      first = greather(a,c);
      if(first == a){
        second = c;
      }else{
        second = a;
        }
      }
  }else{
      if(a > c){
        second = a;
        last = c;
      }else{
        last = a;
        first = greather(b,c);
        if(first == b){
          second = c;
        }else{
          second = b;
         }
        }
      }

  cout << last << endl << second << endl << first << endl << endl << a << endl << b <<endl << c << endl;

  

  return 0;

}
