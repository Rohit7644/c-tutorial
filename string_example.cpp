/*
!!!!! at last character of string is null character ----> '\0'
	string--> array of characters data types
	******
	initializing as array
	char identifiers[] ="string" or {s,t,r,i,n,g}
	*********
	string handeling function
	
1. strlen(identifier_string); ---> return int and length of string
2. strcpy(destination_string, source_string); ---> void funtion for copy string
3. strrev(string) ---> void function reverse string      !!!!!!!!!!!be carefull it reverse the string in its own location
4. strcat(string1,string2) -->return type string and concat
5. strcmp(string1, string2) --> return type integer	
string1- string2 ------>ascii value subtraction
return 0 if string is equal


input a string special function

1.cin.get(str_name, size_max_character, character_for_ending)----> default delimeter '\n'
!!!! be carefull it does not delete the delimeter from buffer so using two times consequently function cause error in program

2. cin.getline(str_name, size_max_character, delimeter) --> it removes delimeter from buffer

*/



#include<iostream>
#include<string.h>
using namespace std;
void string_tutorial(char[], char[] );

int main()
{
	char s1[5];
	char s2[5];
	/*
	!!!error
	cin.get(s1,5) -->delimeter is optional
	cin.get(s2,5)
	
	!!!error
	cin.getline() --> function should only use if u use or it should be use at top of cin>>function
	
	cin>>s2;
	cin.getline(s1,5);
	
	but valid/not error
	cin.getline(s1,5);
	cin>>s2;
	
	*/
	
	
	cin.getline(s1,5);
	cin.getline(s2,6);
	string_tutorial(s1,s2);
	return 0;
}
void string_tutorial(char string1[], char string2[])
{
	cout<<"string1 length= "<<strlen(string1);
	cout<<" concatentaion "<<strcat(string1, string2);
	cout<<" string compare= "<<strcmp(string1, string2);
	cout<<" string copy--> string2 ="<<strcpy(string1, string2);
	cout<<" string reverse "<<string1<<"-->";
	cout<<strrev(string1);
	
}

