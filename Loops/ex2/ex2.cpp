#include <iostream>
using namespace std;

int main() {

  int n;
  bool temp = false;

  cin >> n;

  for(int i = 1; i <= n; i++){
    if(i % 2 == 0){
      temp = true;
      cout << i << endl;
    }
  }

  if(temp == false){
    cout << - 1 << endl;
  }

  return 0;

}
  
