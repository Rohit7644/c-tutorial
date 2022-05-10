// Documentation section 
/**
 examples of data types 
 important notes : there is no short, long float and short double.
*/
#include<iostream>

using namespace std;
template <class T>
void sizes(T a)
{   
    cout<<typeid(a).name()<<"-->"<<sizeof(a)<<endl;
}

int main ()
{
    int f;
    sizes<char>('a');
    sizes<int>(4);
    sizes<short int>(4);
    sizes<long int>(5);
    sizes<float>(6);
    sizes<double>(5);
    sizes<long double>(8);
    cin>>f;
    return 0;

}