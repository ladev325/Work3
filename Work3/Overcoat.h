#pragma once
#include <string>
using namespace std;

class Overcoat {
public:
	Overcoat();
	Overcoat(string name, string type, string size, int price);
	bool operator==(const Overcoat& a)const;
	bool operator!=(const Overcoat& a)const;
	bool operator>(const Overcoat& a)const;
	bool operator>=(const Overcoat& a)const;
	bool operator<(const Overcoat& a)const;
	bool operator<=(const Overcoat& a)const;

	Overcoat& operator++();
	Overcoat operator++(int);
	Overcoat& operator--();
	Overcoat operator--(int);

	friend istream& operator>>(istream& in, Overcoat& obj);
    friend ostream& operator<<(ostream& out, const Overcoat& obj);

	void setName(string name);
	void setType(string name);
	void setSize(string name);
	void setPrice(string name);

private:
	static int counter;
	string name;
	string type;
	string size;
	int price;
};