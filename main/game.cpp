#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{ cout << "Welcome to Cone Clankers!\n";
cout << "Created by Joe Palmer\n";
cout << "v1.0.0\n";
cout << "What is your name? ";
string colour;
cin >> colour;
cout << "Hello "; cout << colour; cout << " Welcome to the game!\n";
cout << "Loading 1-1...\n";
cout << "A Fire Imp appeared!\n";
cout << "He looks weak...\n";
cout << "What would you like to do? (Attack/Run) ";
string choice1;
cin >> choice1;
if (choice1 == "Attack");
   cout << "You hit the enemy and killed it!";
if (choice1 == "Run");
   cout << "You cant do that right now."
return 0;
}