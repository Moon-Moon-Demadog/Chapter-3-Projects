//This program will allow you to calculate interrest earned within the year on a savings account.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
  double principal, Rate, T, Amount;
  cout<< "What is the principal amount?" << endl;
  cin>> principal;
  cout<< "What is the interest rate?" << endl;
  cin>> Rate;
  cout<< "How often is the interest rate compounded?" << endl;
  cin>> T;
  Amount = principal *( 1 +Rate / T);
  cout<< "Interest Rate:";
  cout<< setw(20) << Rate << "%" << endl;
  cout<< "Times Compounded:";
  cout<< setw(14) << T << endl;
  cout<< "Principal:";
  cout<< setw(23) << principal << endl;
  cout<< "Amount in savings:";
  cout<< setw(18) << Amount << endl;
  return 0;
}