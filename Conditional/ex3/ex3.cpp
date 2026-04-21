#include <iostream>
using namespace std;

// 219158/problem/M
// M. Capital or Small or Digit

int main(){

  char x;

  cin >> x;

  int value = int(x);

  if(x >= 48 && x <= 64){
    cout << "IS DIGIT" << endl;
  }else if(x >= 65 && x <= 96){
    cout << "ALPHA" << endl;
    cout << "IS CAPITAL" << endl;

    }else{
      cout << "ALPHA" << endl;
      cout << "IS SMALL" << endl;
    }

  return 0;

}

