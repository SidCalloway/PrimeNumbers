// October 11th 2019 //
// Day 4 of Writing Programs // 
// Project 00005 | 'Prime Number' //
// Language: C++ //
// Blessed Sid Build //

#include <iostream>
using namespace std;

int main()
{
	
	int i, no;
	cout<<" Enter your Number: ";
	cin>>no;
	if(no==1)

	{
	
	cout<<" Smallest Prime Number: 2";
	
	}

for(i=2 ; i<no ;i++)
{
	if(no%i==0)
	{
	cout<<" False: Not Prime";
	break;
	}
}

if(no==i)

{
	cout<<" Positive: Prime";
}

return 0;

}

//---Respectfully
//---Sid Calloway---//