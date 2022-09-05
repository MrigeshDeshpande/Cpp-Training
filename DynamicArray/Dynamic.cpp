#include <iostream>
using namespace std;
int main()
{
   int i, n;
   cout << "Enter total number of elements:"
        << "\n";
   cin >> n;
   int *a = new int(n); // Dynamic memory is allocated using operator new.
   cout << "Enter " << n << " elements" << endl;
   for (i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   cout << "Entered elements are: ";
   for (i = 0; i < n; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl;
   // delete (a);
   delete a;   // releases the memory of a single element allocated using new
   delete[] a; // releases the memory allocated for arrays of elements using new and a size in brackets ([]).
   return 0;
}