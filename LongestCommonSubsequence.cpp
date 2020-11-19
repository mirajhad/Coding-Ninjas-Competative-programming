/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int
lcs (char *s1, char *s2)
{
  if (s1[0] == '\0' || s2[0] == '\0')
    {
      return 0;
    }

  if (s1[0] == s2[0])
    {
      return 1 + lcs (s1 + 1, s2 + 1);
    }
  else
    {
      int option1 = lcs (s1, s2 + 1);
      int option2 = lcs (s1 + 1, s2);
      return max (option1, option2);
    }
}

int
main ()
{
  char a[100];
  char b[100];
  cin >> a;
  cin >> b;
  cout << lcs (a, b) << endl;
  return 0;
}
