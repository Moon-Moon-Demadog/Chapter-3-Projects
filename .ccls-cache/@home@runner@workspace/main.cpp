//This program will allow younger students to practice basic addition
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <random>
using namespace std;
int main ()
{
  srand(time(NULL));
  long number1, number2, Answer, Sum;
  const int MIN_VALUE = 0;
  const int MAX_VALUE = 350;
  number1 = (rand() % (MAX_VALUE-MIN_VALUE));
  number2 = (rand() % (MAX_VALUE-MIN_VALUE));
  Sum = number1 + number2;
  cout<< "Lets practice some basic addition." << endl;
  cout << number1 << " + " << number2 << endl;
  cout <<":   " << endl;
  cin>> Answer;
  if (Answer != Sum)
    cout<< Answer << " is incorrect " << Sum << " is the correct answer." << endl;
  else
    cout << "That is correct!" << endl;
  return 0;
}