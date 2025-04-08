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
	void setType(string type);
	void setSize(string size);
	void setPrice(int price);
	void showInfo()const;
	int getCounter()const;
	string getType()const;
	int getPrice()const;
	string getSize()const;
	string getName()const;

private:
	static int counter;
	string name;
	string type;
	string size;
	int price;
};