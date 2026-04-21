#include <iostream>
using namespace std;

// 219158/problem/N
// N. Char

int main() {

  char x;

  cin >> x;

  if(int(x) >= 65 && int(x) <= 90){
      x = int(x) + 32;
      cout << char(x) << endl;
  }else{
    x = int(x) - 32;
    cout << char(x) << endl;
  }

  return 0;

}


