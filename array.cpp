/*
	Array :- group of simillar types of data in contiguous memory locations
	!if array is not provide value then it is set to be zero
	array name represent location or adress of array thus array is set to be pointer also;
	
	
*/

#include<iostream>

void demo_array();


int main()
{
	demo_array();
//	int a[4];  // declaration is done only in initial time by this method
	int a[] = {1, 2, 3, 4};
	return 0;
}
void demo_array(){
	int a1[10];
	int *p=a1;
	std::cout<<"*a1="<<*a1<<"  *p="<<*p<<" a1="<<a1<<" p="<<p<<"\n";
	int a[10] = {1, 2, 3, 4};// declaration is done only in initial time by this method
	for (int i=0 ; i < 5; i++)
	{
		if (i==4)
		{
			std::cout<<"!if array is not provide value then it is set to be zero\n a[4]=";
		}
		std::cout<<a[i]<<"\n";
	 } 
	for (int i=0 ; i < 5; i++)
	{
		if (i==4)
		{
			std::cout<<"!if array is not provide value then it is set to be zero\n *(a+4)=";
		}
		std::cout<<*(a+i)<<"\n";
	 } 
	 p = a;
	for (int i=0 ; i < 5; i++)
	{
		if (i==4)
		{
			std::cout<<"!if array is not provide value then it is set to be zero\n *(p+4)=";
		}
		std::cout<<*(p+i)<<"\n";
	 } 
}
