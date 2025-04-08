#include <iostream>
#include "Overcoat.h"
#include "Shop.h"
using namespace std;

int Overcoat::counter = 0;

int main() {
	Shop shop;
	shop.addOvercoat(Overcoat("Name1", "Type1", "S", 100));
	shop.addOvercoat(Overcoat("Name2", "Type2", "M", 1000));
	shop.addOvercoat(Overcoat("Name3", "Type3", "L", 2000));
	shop.addOvercoat(Overcoat("Name4", "Type4", "XL", 500));

	shop.sortByPrice();
	cout << "==============" << endl;
	shop.deleteOvercoat(2);
	shop.printGoods();
	cout << "==============" << endl;
	shop.plusSize(1);
	shop.printGoods();
	cout << "==============" << endl;
	shop.searchByType("Type1");

	return 0;
}