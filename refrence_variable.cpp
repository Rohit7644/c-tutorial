/*
	Reference variable ---> it is alias or other/second name of variables 
	it cannot be re-initailized and not null
	uses in call by refrence

syntax : data_types &identifiers = same_data_types_identifiers;

*/

#include<iostream>


using namespace std;
int main()
{
	int a = 5;
	int &refrence_alias=a; 
	/*
	error
	int &refrence_alias; ///refrence variables should never be null
	refrence_alias=a;
	*/
	
	cout<<&refrence_alias<<endl<<&a<<endl<<refrence_alias;
	return 0;
	
	
	
}
