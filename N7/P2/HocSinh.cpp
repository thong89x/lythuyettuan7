#include"HocSinh.h"

HocSinh::HocSinh()
{
	math = literature =gpa= 0;
	name = "";
}
HocSinh::HocSinh(const HocSinh& copy)
{
	math = copy.math;
	literature = copy.literature;
	gpa = copy.gpa;
	name = copy.name;
}
HocSinh::~HocSinh()
{
}
void HocSinh::setName(string ten)
{
	name = ten;
}
void HocSinh::setMath(float score)
{
	math = (score >= 0) ? ((score<=10)? score:10) :0 ;
	GPA();
}
void HocSinh::setLiterature(float score)
{
	literature = (score >= 0) ? ((score <= 10) ? score : 10) : 0;
	GPA();
}
float HocSinh::GPA()
{
	gpa= (math + literature) * 1.0 / 2;
	return gpa;
}

float HocSinh::getMath()
{
	return math;
}
float HocSinh::getLiterature()
{
	return literature;
}
string HocSinh::getName()
{
	return name;
}
HocSinh::operator char* ()
{
	char* c = &name[0];
	return c;
}
ostream& operator<<(ostream&os,const HocSinh&a)
{
	os << "Name: "<<a.name << endl;
	os << "Math: " << a.math << endl;
	os << "Literature: " << a.literature << endl;
	os << "GPA: " << a.gpa<< endl;
	return os;
}
istream& operator>>(istream&is, HocSinh&a)
{
	cout << "Input Name: ";
	getline( cin, a.name);
	float toan, van;
	cout << "Input score math: ";
	cin >> toan;
	cout << "Input score van: ";
	cin >> van;
	a.setLiterature(van);
	a.setMath(toan);
	return is;
}
HocSinh& HocSinh::operator=(const HocSinh& copy )
{
	math = copy.math;
	literature = copy.literature;
	gpa = copy.gpa;
	name = copy.name;
	return  *this;
}
bool HocSinh::operator<(const HocSinh&a)
{
	return (gpa < a.gpa);
}
bool HocSinh::operator>(const HocSinh&a)
{
	return (gpa > a.gpa);
}
bool HocSinh::operator==(const HocSinh&a)
{
	return (gpa == a.gpa);
}
bool HocSinh::operator!=(const HocSinh&a)
{
	return (gpa != a.gpa);
}
bool HocSinh::operator<=(const HocSinh&a)
{
	return (gpa <= a.gpa);
}
bool HocSinh::operator>=(const HocSinh&a)
{
	return (gpa >= a.gpa);
}