/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<algorithm>
using namespace std;


int
main ()
{
  int arr[] = { 4, 3, 1, 4, 7, 5, 2, 9 };
  sort (arr, arr + 8);

  for (int i = 0; i < 8; i++)
    {
      cout << arr[i] << " ";
    }

  cout << endl;
  cout << lower_bound (arr, arr + 8, 7) - arr;
  return 0;
}
