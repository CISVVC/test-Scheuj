#include <iostream>

using namespace std;

int main()
{
string s;
int date;
int month_n;
  
  cout << "Enter Month Number: ";
  cin >> month_n;
  cout << "Enter Date: ";
  cin >> date;

if (month_n == 1 || month_n == 2 || month_n == 3)
 { s="Winter";
  if (month_n/3>=1 && date>=21){
    if (s=="Winter")
        s="Spring";
  cout << "The sesaon is: " + s;
  }  
  else 
    cout << "The sesaon is: " + s;
 }
else if (month_n == 4 || month_n == 5 || month_n == 6)
 { s="Spring";
  if (month_n/3>1 && month_n/3<=2 && date>=21){
    if (s=="Spring")
        s="Summer";
  cout << "The sesaon is: " + s;
  }  
  else 
    cout << "The sesaon is: " + s;
 }
 else if (month_n == 7 || month_n == 8 || month_n == 9)
 { s="Summer";
  if (month_n/3>2 && month_n/3<=3 && date>=21){
    if (s=="Summer")
        s="Fall";
  cout << "The sesaon is: " + s;
  }  
  else 
    cout << "The sesaon is: " + s;
 }
 else if (month_n == 10 || month_n == 11 || month_n == 12)
 { s="Fall";
  if (month_n/3>3 && month_n/3<=4 && date>=21){
    if (s=="Fall")
        s="Winter";
  cout << "The sesaon is: " + s;
  }  
    cout << "The sesaon is: " + s;
 }
  return 0;
}