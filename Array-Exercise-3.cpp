// MUHAMMAD FAWWAZ FAHMI BIN MOHD KAFII
// A17DW0064
//SIR ADIB HENSEM
#include <iostream>
using namespace std;

main(void)
{
  int array[10];
  int sum=0;
  int x;

    cout<<"Enter the 10 numbers:"<<endl;

for(x=0;x<10;x++)
{
    cout <<endl<< x+1 << ". Enter your number" <<endl;
    cin>>array[x];

    sum=sum+array[x];
}
    cout<<"the sum of the 10 numbers : "<<sum<<endl;
}
