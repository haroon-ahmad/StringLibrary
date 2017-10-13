#include<iostream>
using namespace std;
class String
{
private:
	char * str;
public:
	String();
	String(const char *);
	String(const String&);
	~String();
	char* getstring();
	char* setstring(char * _str);
	String& operator= (const String&) ;
	String& operator= (char*);
	String operator+(const String&); 
	String operator+=(const String&);
	char& operator[](int index);
	bool operator==(const String&);
	bool operator!=(const String& );
	friend  ostream& operator<<(ostream& os,String _str); 
	friend istream& operator>>(istream& is,String& _str);
	friend  String operator+(const char[],const String& _str);
};

