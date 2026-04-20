#include <iostream>
#include <iomanip>
using namespace std;


// 219158/problem/E 
// E. Area of a Circle

int main() {

  double area;
  const double pi = 3.141592653;
  double r;

  cin >> r;

  area = pi * (r * r);

  cout << fixed << setprecision(9) << area << endl;

  return 0;

}


