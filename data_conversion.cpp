// documentation section
// conversion data types explicit and implicit
// explicit --> done by programmer 
// implicit --> done by compiler itself



#include<iostream>
#include<typeinfo>

void implicits();
void explicits();


int main(){
	explicits();
	implicits();
	return 0;
}

void explicits()
{	
	float a=5.01;
	int b=(float)a ;// typecasting like u use in c programming 
	char c=int(b);// functional typecasting which is availiable in c++
	std::cout<<a<<b<<c<<typeid(4.01).name()<<"\n";
}

void implicits()
{
	int a=4;
	float b=5;
	std::cout<<"int + float ="<<typeid(a+b).name()<<"\t"<<(a+b)<<"\n";
}
