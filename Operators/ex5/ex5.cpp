#include<iostream>
using namespace std;

// 219158/problem/R 
// R. Age in Days

int main(){

  const int year = 365, month = 30;
  int years = 0, months = 0, days = 0;

  int ageInDays;

  cin >> ageInDays;

  int temp;

  years = ageInDays / year;
  temp = ageInDays % year;
  months = temp / month;
  temp = temp % month;
  days = temp % month;

  cout << years << " years" << endl;
  cout << months << " months" << endl;
  cout << days << " days" << endl;

  return 0;

}


