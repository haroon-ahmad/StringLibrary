#include<iostream>
#include "String.h"
using namespace std;
String::String()
{
	str=new char[1];
	str[0]='\0';
}
String::String( const char *_str)
{
	int size=strlen(_str)+1;
	str=new char [size];
   strcpy(this->str,_str);
}
String::String(const String & _str)
{
	int size=strlen(_str.str)+1;
	str=new char [size];
	strcpy(str,_str.str);
}
String::~String()
{
	delete[]str;
}
String& String::operator=( const String& _str)////return type is string& for cascading a=b=bc=d=e=f=g=h=i=j==k=l=m=n=o=p=q
{
	 if (this==&_str) 
		return *this;
	else
	{
		delete[]str;
	   str=new char [strlen(_str.str)+1];
	  strcpy(str,_str.str);
	  return *this;
	}
}
//String a;
//String b(a);
//String c("abcddhfj");
//b=c;
//a="asdbhasf";
String& String::operator= (char* arr)
{
	str=new char [strlen(arr)+1];
	strcpy(str,arr);
	return *this;
}
String String::operator+(const String& _str)
{
	String temp;
	temp.str=new char[(strlen(str)+strlen(_str.str))+1];
	strcpy(temp.str,str);
	strcat(temp.str,_str.str);
	return temp;
}
//a=b+c
//a+=b;
//a=a+b
String String::operator+=(const String& _str)
{
     String temp;
	temp.str=new char[(strlen(str)+strlen(_str.str))+1];
	strcpy(temp.str,str);
	strcat(temp.str,_str.str);
	str=temp.str;
	return (*this);
}
char& String::operator[](int index)
{
	return str[index];
}
char* String::getstring()
{
	return str;
}
ostream& operator<<(ostream& os,String _str)
{
	os<<_str.getstring();
	return os;
}
char* String::setstring(char* _str)
{
	str=_str;
	return str;
}
istream& operator>>(istream& is,String& _str)
{
	
	char *temp;
	temp=new char[500];
	is>>temp;
	_str.setstring(temp);
	return is;
}
//"adsfad"+a;
 String operator+(const char a[] ,const String& _str)
 {
	 String temp;
	temp.str=new char[(strlen(a)+strlen(_str.str))+1];
	strcpy(temp.str,a);
	strcat(temp.str,_str.str);
	return temp;
 }
 bool String::operator==(const String&_str)
 {
	 
	return (*str==*_str.str);
 }
bool String::operator!=(const String&_str)
 {
	 
	return (*str!=*_str.str);
 }
