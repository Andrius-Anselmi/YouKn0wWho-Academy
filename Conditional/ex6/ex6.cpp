#include <iostream>
using namespace std;

// 219158/problem/U
// U. Flutuar ou int

int main() {

  double n;
  double temp;
  
  cin >> n;

  if(int(n) == n){
    cout << "int " << int(n) << endl;
  }else{
    temp = n;
    n = n - int(n);
    cout << "float " << int(temp) << " " << n << endl;
  }


  return 0;

}

