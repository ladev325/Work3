#include "Shop.h"
#include <iostream>
#include <algorithm>


void Shop::addOvercoat(Overcoat item)
{
	shop.push_back(item);
}

void Shop::deleteOvercoat(int number)
{
	for (int i = 0; i < shop.size(); i++) {
		if (shop[i].getCounter() == number) {
			shop.erase(shop.begin() + i);
			cout << "Deleted!";
			return;
		}
	}
	cout << "Couldn`t find!";
}

void Shop::minusSize(int number)
{
	for (int i = 0; i < shop.size(); i++) {
		if (shop[i].getCounter() == number) {
			shop[i]--;
			cout << "Resized!";
			return;
		}
	}
	cout << "Couldn`t find!";
}

void Shop::plusSize(int number)
{
	for (int i = 0; i < shop.size(); i++) {
		if (shop[i].getCounter() == number) {
			shop[i]++;
			cout << "Resized!";
			return;
		}
	}
	cout << "Couldn`t find!";
}

void Shop::searchByType(string type)
{
	for (int i = 0; i < shop.size(); i++) {
		if (shop[i].getType() == type) {
			shop[i].showInfo();
			cout << endl;
		}
	}
}

void Shop::sortByPrice()
{
	vector<Overcoat> sorted;
	sorted = shop;
	sort(sorted.begin(), sorted.end(), [](const Overcoat& a, const Overcoat& b) {return a.getPrice() < b.getPrice();});
	for (int i = 0; i < sorted.size(); i++) {
		sorted[i].showInfo();
	}
}
