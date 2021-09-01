#include <iostream>
#include "Bag.h"
#include "BagSource.cpp"
using namespace std;

int main()
{
	ADTBag<int> IntItem;
	ADTBag<double> DoubleItem;
	IntItem.add(100);
	IntItem.add(200);
	DoubleItem.add(5.5);
	cout << IntItem.isEmpty() << endl;
	cout << IntItem.getCurrentSize() << endl;
	return 0;
}