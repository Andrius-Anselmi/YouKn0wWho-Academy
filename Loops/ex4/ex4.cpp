#include <iostream>
using namespace std;

// 219432/problem/D
// D. Fixed Password

int main() {

int password;
int currentPassword = 1999;

while(1){
  cin >> password;
  if(password == currentPassword){
    cout << "Correct" << endl;
      break;
  }else{
    cout << "Wrong" << endl;
  }
 }


  return 0;

}


