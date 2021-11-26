#include<iostream>

using namespace std;


class Array
{
public:
	Array();
	Array(int);
	Array(int[], int);
	Array(const Array&);
	~Array();
	int getSize();
	int operator [] (const int index);
	Array& operator = (const Array&);
	friend ostream& operator<<(ostream&, Array& a);
	friend istream& operator>>(istream&, Array& a);
	operator int* ();
private:
	int* array;
	int size;
};


