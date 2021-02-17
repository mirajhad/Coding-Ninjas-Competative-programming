#include <iostream>
using namespace std;

int lenght(char s[])
{
    if(s[0] == '\0')
    return 0;
    
    int smallStringLenght = lenght(s + 1);
    return smallStringLenght + 1;
}
int main() {
	char str[100];
	cin>>str;
	int l = lenght(str);
	cout<<l<<endl;
	return 0;
}