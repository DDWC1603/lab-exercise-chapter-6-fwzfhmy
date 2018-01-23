// MUHAMMAD FAWWAZ FAHMI BIN MOHD KAFII
// A17DW0064
// SIR ADIB HENSEM
#include <iostream>
using namespace std;

int mark[5]={19,10,8,17,9};
int main()
{
	int x;
	mark[3]=24;

	cout << "Please enter the new third element for array " << endl;
	cin >> mark[3];

	cout << "The first element of the array is " << mark[0] <<endl;

	cout << "The last element of the array is " << mark[4];
	return 0;
}
