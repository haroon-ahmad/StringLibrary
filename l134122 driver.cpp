#include <iostream>
using namespace std;
#include "String.h"
int main()
{
	String s1("computer programming"),s3;
	String s2,s4("abcd"),s5(s4),s6="cdef";
	String s7,s8("cdef");
	s7=s4;
	s2=s4+s6;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	cout<<s6<<endl;
	cout<<s7<<endl;
	cout<<s8<<endl;
	cout<<"Enter string\n";
	cin>>s3;
	cout<<s3;



	
	return 0;
}