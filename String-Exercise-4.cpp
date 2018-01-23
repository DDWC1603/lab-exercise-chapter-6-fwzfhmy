//convert string to uppercase
//complete the fragment code below using the string to uppercase function.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int i;
	char lowerToUpper[80];

	strcpy(lowerToUpper, "This is a check");

	for(i=0;i<80;i++)
	{
		lowerToUpper[i] = toupper(lowerToUpper[i]);
	}
		cout<<lowerToUpper<<endl;
		return 0;
}
