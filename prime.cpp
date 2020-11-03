/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

bool
checkprime (int n)
{
  int count = 0;
  for (int i = 1; i * i <= n; i++)
    {
      if (n % i == 0)
	{
	  if (i * i == n)
	    count += 1;
	  else
	    count += 2;

	}
    }
}

int
main ()
{
  int n;
  cin >> n;
  int count = 0;
  for (int i = 0; i <= n; i++)
    {
      if (checkprime (i) == true)
	{
	  count++;
	}
    }
  cout << count << endl;
  return 0;
}
