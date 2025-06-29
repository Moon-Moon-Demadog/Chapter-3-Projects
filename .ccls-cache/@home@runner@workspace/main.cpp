//This program will adjust ingredients based off of how many cookies you want to bake.
#include <iostream>
using namespace std;
int main ()
{
  double flour, sugar, butter, NewFlour, NewSugar, NewButter, NewCookies;
  int OGcookies, cookies;

  cout<< "Lets make a batch of cookies!! A standard batch of cookies yields aproximately 48 cookies." << endl;
  cout<< " number of cookies you'd like per batch and hit enter : ";
  cin>> cookies ;
  
  OGcookies = 48;
  NewCookies = cookies / OGcookies;
  flour = 2.75;
  sugar = 1.5;
  butter = 1.0;
  NewFlour = flour * NewCookies;
  NewSugar = sugar * NewCookies;
  NewButter = butter * NewCookies;
  
  cout<< "Perfect, you'll need " << NewFlour << " cups of flour, " << NewSugar << " cups of sugar and " << NewButter << " cups of butter to bake your cookies!" << endl;
  return 0;
}