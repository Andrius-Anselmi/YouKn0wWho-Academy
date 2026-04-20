#include <iostream>
#include <iomanip>
using namespace std;

// 219158/problem/Y 
// Y. The last 2 digits

int main() {

  long long a,b,c,d, res;

  cin >> a >> b >> c >> d;

  a = a % 100;
  b = b % 100;
  c = c % 100;
  d = d % 100;
  
  res = (a * b * c * d) % 100;

  cout << setfill('0') << setw(2) << res << endl;

  return 0;

}
