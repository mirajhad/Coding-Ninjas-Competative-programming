/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<algorithm>
using namespace std;

struct Interval{
  int st;
  int et;
};

bool compare(Interval i1, Interval i2)
{
    return i1.st<i2.st;
}
int main()
{
    Interval arr[]={{4,3},{1,4},{7,5},{2,9}};
    sort(arr,arr+4,compare);
    
    for(int i=0;i<4;i++)
    {
        cout<<arr[i].st<< ":"<<arr[i].et<<endl;
    }
    return 0;
}
