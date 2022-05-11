/*
	Enumerator --> user defined data types or collection of data in a list assigned with integer values
	starting with 0,1,2,3,4,5,6,7,8 
	*******
	enum enumerated_datatypes{enumerator1, enumerator2, enumerator3,...};
	enumerated_dattypes c; c-->identifiers
	c= enumerator1; -->c=1
	int a=c; // assigning int datatypes with enum

*/

#include<iostream>

using namespace std ;

int main ()
{
	enum enumerated_data_types{sunday, monday, tuesday, wednesday, thrusday, friday, saturday
	};
	enumerated_data_types identifiers;
	identifiers = monday;
	cout<<"identifiers="<<identifiers<<endl;
	enumerated_data_types identifiers1= thrusday;
	cout<<"identifiers1="<<identifiers1<<endl;
	int integer_identifiers = saturday;
	int integers_identifier1 = identifiers1;
	cout<<"integer_identifiers="<<integer_identifiers<<" integers_identifiers1="<<integers_identifier1<<"\tsunday="<<sunday<<endl;
	return 0;
	
}
