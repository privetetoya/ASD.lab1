#pragma once
#include <iostream>
#include "Map.h"
#include "List.h"
using namespace std;

int main() {


	Map<int, int> map;

	map.insert(1, 2);
	map.insert(2, 4);
	map.insert(3, 6);
	map.insert(4, 8);

	cout << "Map: ";
	map.print();
	cout << endl << "Keys of Map: " << endl;
	List <int> getKeys = map.getKeys();
	for (int i = 0; i < getKeys.getSize(); i++)
		cout << getKeys.indexPointer(i) << " ";
	cout << endl << endl << "Values of Map: " << endl;
	List <int> getValues = map.getValues();
	for (int i = 0; i < getValues.getSize(); i++)
		cout << getValues.indexPointer(i) << " ";
	cout << endl << endl << "Removing element with key 4..." << endl;
	map.remove(4);
	cout << endl << "Map after removing element: " << endl;
	map.print();
	cout << endl << endl << "Keys of Map after removing element: " << endl;
	List <int> getKeysAfterRemoving = map.getKeys();
	for (int i = 0; i < getKeysAfterRemoving.getSize(); i++)
		cout << getKeysAfterRemoving.indexPointer(i) << " ";
	cout << endl << endl << "Values of Map after removing element: " << endl;
	List <int> getValuesAfterRemoving = map.getValues();
	for (int i = 0; i < getValuesAfterRemoving.getSize(); i++)
		cout << getValuesAfterRemoving.indexPointer(i) << " ";
	map.clear();
	cout << endl << "Map " << endl;
	map.print();
	return 0;
}