#pragma once
#include <vector>
#include <string>
#include "Overcoat.h"
using namespace std;

class Shop {
public:
	void addOvercoat(Overcoat item);
	void deleteOvercoat(int number);
	void minusSize(int number);
	void plusSize(int number);
	void searchByType(string type);
	void sortByPrice();
	void printGoods()const;
private:
	vector<Overcoat> shop;
};