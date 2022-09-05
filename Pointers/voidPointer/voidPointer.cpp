#include <iostream>  
using namespace std;  
int main()  
{  
  void *ptr; // void pointer declaration  
  int *ptr1; // integer pointer declaration  
  int data=10; // integer variable initialization  
  ptr=&data;  // storing the address of data variable in void pointer variable  
  ptr1=(int *)ptr; // assigning void pointer to integer pointer  
  std::cout << "The value of *ptr1 is : " <<*ptr1<< std::endl;  
  return 0;  
}  