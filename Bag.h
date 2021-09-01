
// Notes about ifndef and define
// The ifndef is to stop the compiler not include the header twice.
// Lets say that you inluded another cpp file (Bag2.h) here
// and the same cpp file (Bag2.h) in main.cpp.
// The issue with that is that in main you're including it there and in here.
// This is a redefining issue. So use ifndef, define, and endif to prevent.

// Notes about const and passing by reference
// Const makes it so you can't change the variable or function or whatever it is attached to.
// The const ItemType& newEntry is called passed by const reference.
// Pass by reference is done by using the &
// Doing this saves memory and time since you're copying the whole complex object.
// One concern is that you're modifing an item owned by the client that used this method. So you use const with it.

#ifndef BAG_H
#define BAG_H
template <class ItemType> //With template class you can put any data type in here
class ADTBag
{
private:
	static const int BagSize = 6; //Static keyword makes it so the variable is shared by the objects.
	ItemType items[BagSize];
	int ItemCount;
	int MaxItems;

public:
	ADTBag(); //Constructor.
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType& newEntry); 
	bool remove(const ItemType& anEntry); 
	void clear();
	bool contains(const ItemType& anEntry) const; 
	int getFrequencyOf(const ItemType& anEntry) const; 
	//vector<ItemType> toVector() const;
};
#endif

