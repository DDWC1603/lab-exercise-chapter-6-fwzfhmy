// MUHAMMAD FAWWAZ FAHMI BIN MOHD KAFII
// A17DW0064
// SIR ADIB HENSEM
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char strPswd[80];

	cout<<"Enter password: ";
		cin >> strPswd;

	if(strcmp(strPswd,"fawwaznice")!=0)
		{
			cout<<"invalid password "<<endl;
		}
	else
		{
			cout<<"Logged in "<<endl;
		}
	return 0;
}
