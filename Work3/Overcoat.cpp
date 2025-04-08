#include "Overcoat.h"
#include <iostream>

Overcoat::Overcoat() {
    counter ++;
    number = counter;
	name = "";
	type = "";
	size = "S";
	price = 0;
}

Overcoat::Overcoat(string name, string type, string size, int price) {
    counter++;
    number = counter;
    this->name = name;
	this->type = type;
	this->size = size;
	this->price = price;
}

bool Overcoat::operator==(const Overcoat& a) const {
    return type == a.type;
}

bool Overcoat::operator!=(const Overcoat& a) const {
    return type != a.type;
}

bool Overcoat::operator>(const Overcoat& a) const
{
    return price > a.price;
}

bool Overcoat::operator>=(const Overcoat& a) const
{
    return price >= a.price;
}

bool Overcoat::operator<(const Overcoat& a) const
{
    return price < a.price;
}

bool Overcoat::operator<=(const Overcoat& a) const
{
    return price <= a.price;
}

Overcoat& Overcoat::operator++()
{ 
    if (size == "S") size = "M";
    else if (size == "M") size = "L";
    else if (size == "L") size = "XL";
    else if (size == "XL") size = "XXL";
    return *this;
}

Overcoat Overcoat::operator++(int)
{
    Overcoat tmp = *this;
    if (size == "S") size = "M";
    else if (size == "M") size = "L";
    else if (size == "L") size = "XL";
    else if (size == "XL") size = "XXL";
    return tmp;
}

Overcoat& Overcoat::operator--()
{
    if (size == "M") size = "S";
    else if (size == "L") size = "M";
    else if (size == "XL") size = "L";
    else if (size == "XXL") size = "XL";
    return *this;
}

Overcoat Overcoat::operator--(int)
{
    Overcoat tmp = *this;
    if (size == "M") size = "S";
    else if (size == "L") size = "M";
    else if (size == "XL") size = "L";
    else if (size == "XXL") size = "XL";
    return tmp;
}

void Overcoat::setName(string name)
{
    this->name = name;
}

void Overcoat::setType(string type)
{
    this->type = type;
}

void Overcoat::setSize(string size)
{
    this->size = size;
}

void Overcoat::setPrice(int price)
{
    this->price = price;
}

void Overcoat::showInfo() const
{
    cout << "---------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Type: " << type << endl;
    cout << "Size: " << size << endl;
    cout << "Price: " << price << endl;
    cout << "Id: " << number << endl;
    cout << "---------------" << endl;
}

int Overcoat::getCounter()const {
    return number;
}

string Overcoat::getType()const{
    return type;
}

int Overcoat::getPrice() const {
    return price;
}

string Overcoat::getSize() const {
    return size;
}

string Overcoat::getName() const {
    return name;
}

istream& operator>>(istream& in, Overcoat& obj)
{
    in.ignore();
    cout << "Enter name: ";
    getline(in, obj.name);
    cout << "Enter type: ";
    getline(in, obj.type);
    cout << "Enter size: ";
    getline(in, obj.size);
    cout << "Enter price: ";
    in >> obj.price;
    return in;
}

ostream& operator<<(ostream& out, const Overcoat& obj)
{
    out << "Name: " << obj.name << endl;
    out << "Type: " << obj.type << endl;
    out << "Size: " << obj.size << endl;
    out << "Price: " << obj.price << endl;
    return out;
}
