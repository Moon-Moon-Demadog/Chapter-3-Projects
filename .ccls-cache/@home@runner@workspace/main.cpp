//This program will adjust ingredients based off of how many cookies you want to bake.
#include <iostream>
using namespace std;
int man ()
{
  double flour, sugar, butter, NewFlour, NewSugar, NewButter, NewCookies;
  int OGcookies, cookies;
  flour = 2.5;
  sugar = 1.5;
  butter = 1.0;
  NewFlour = flour * NewCookies;
  NewSugar = sugar * NewCookies;
  NewButter = butter * NewCookies;
  NewCookies = cookies % OGcookies;
  OGcookies = 48;

  cout<< "Lets make a batch of cookies!! A standard batch of cookies yields aproximately 48 cookies." << endl;
  cout<< "With the standard reciepe you'll need " << flour << " cups of flour, " << sugar << " cups of sugar and " << butter << " cups of butter." << endl;
  cout<< "Type the number of cookies you'd like per batch and hit enter." << endl;
  cin>> cookies;
  cout<< "Perfect, you'll need " << NewFlour << " cups of flour, " << NewSugar << " cups of sugar and " << NewButter << " cups of butter to bake your cookies!" << endl;
  return 0;
}