#include <iostream>
using namespace std;

// 219158/problem/Q
// Q. Coordinates of a Point

int main() {
  
  //x > 0 && y > 0 -> Q1 
  //x > 0 && y < 0 -> Q4
  //y > 0 && x < 0 -> Q2
  //y < 0 && x < 0 -> Q3
  //x == 0 && y == 0 -> origem
  //x != 0 & y == 0 -> Eixo X
  //y != 0 && x == 0-> Eixo Y


  double x, y;

  cin >> x >> y;

  if(x != 0){
    if(y == 0){
      cout << "Eixo X";
  }else if(x > 0){
    if(y > 0){
      cout << "Q1" << endl;
    }else{
      cout << "Q4" << endl;
    }
  }else if(x < 0){
        if(y > 0){
          cout << "Q2" << endl;
        }else{
          cout << "Q3" << endl;
        }
    }
  }else if(y != 0){
    cout << "Eixo Y" << endl;
  }else{
    cout << "Origem" <<endl;
  }

  return 0;

}


