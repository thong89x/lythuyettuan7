#include"Array.h"

Array::Array()
{
	array = NULL;
	size = 0;
}
Array::Array(int n)
{
	size = n;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = 0;
	}
}
Array::Array(int a[], int n)
{
	size = n;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = a[i];
	}
}
int Array::operator[](const int index)
{
	return (index >= 0) ? array[index] : 0;
}
int Array::getSize()
{
	return size;
}
Array::Array(const Array& a)
{
	size = a.size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = a.array[i];
	}
}
Array::~Array()
{
	delete[]array;
}
ostream& operator<<(ostream& os, Array& a)
{
	for (int i = 0; i < a.size; i++)
	{
		os << a[i] << " ";
	}
	os << endl;
	return os;
}
istream& operator>>(istream& is, Array& a)
{
	cout << "Input size: ";
	is >> a.size;
	a.array = new int[a.size];
	for (int i = 0; i < a.size; i++)
	{
		is >> a.array[i];
	}
	return is;
}
Array& Array::operator = (const Array& a)
{
	size = a.size;
	delete[]array;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = a.array[i];
	}
	return *this;
}

 Array::operator int*(){
	return this->array;
};