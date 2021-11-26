#pragma once
#include"HocSinh.h"
#include<iostream>
#include<string>

using namespace std;
class HocSinh
{
public:
	HocSinh();
	HocSinh(const HocSinh& copy);
	~HocSinh();
	
	friend ostream& operator<<(ostream& , const  HocSinh&);
	friend istream& operator>>(istream&,HocSinh&);
	void setName(string);
	void setMath(float);
	void setLiterature(float);
	float GPA();
	float getMath();
	float getLiterature();
	string getName();
	HocSinh& operator=(const HocSinh&);
	bool operator<(const HocSinh&);
	bool operator>(const HocSinh&);
	bool operator==(const HocSinh&);
	bool operator!=(const HocSinh&);
	bool operator<=(const HocSinh&);
	bool operator>=(const HocSinh&);
	operator char* ();
private:
	string name;
	float math, literature,gpa;
};

