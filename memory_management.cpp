/*
	Dynamic memory managment--> Allocating and freeing memory during runtime by user using pointer
	
	new keyword --> to allocate memory
	************
	datatype * identifier;
	identifier = new datatype;
	------
	direct way 
	datatype * identifier= new datatype;
	*********
	
	delete keyword --> to delete memory
	************
	delete identifier;
	delete []identifier; -->array
	************
*/

#include<iostream>

using namespace std;

int main()
{
	int *p =new int;
	*p = 5;
	cout<<*p<<endl;
	delete p;
	
	int *p1 = new int[5];
	p1[0]= 4;
	p1[1]=5;
	p1[2]=2;
	for(int i =0; i<3;i++)
	{
		cout<<p[i]<<endl;
	}
	delete []p1;
	cout<<p1[1]<<'\t'<<*p;
	return 0;
}
