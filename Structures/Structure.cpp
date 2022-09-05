// To create a structure, use the struct keyword and declare each of its members inside curly braces.

#include <iostream>
using namespace std;
int main()
{
  struct
  {                  // Structure declaration
    int myNum;       // Member (int variable)
    string myString; // Member (string variable)
  } myStructure, myStructure1;

  // Assign values to members of myStructure
  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  // Print members of myStructure
  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";

  //------------------------------------------------------remove mystructure1 if don't want to execute 2 different varibles o/p
  // how to use a structure in two different variables
  myStructure1.myNum = 100;
  myStructure1.myString = "Request Accepted Congratulations!";

  cout << myStructure1.myNum << "\n";
  cout << myStructure1.myString << "\n";

  /*
          By giving a name to the structure, you can treat it as a data type.
          This means that you can create variables with this structure anywhere in the program at any time.

          comment everything below when not to show named structures
  */
  struct car
  {
    string brand;
    string model;
    int year;
  };

  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;

  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

  return 0;
}