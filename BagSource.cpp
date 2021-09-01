#include "Bag.h"
#include <iostream>

using namespace std;

// You have to use template<class ItemType> for each function that you want to be a template

template<class ItemType>
ADTBag<ItemType>::ADTBag(): ItemCount(0), MaxItems(BagSize)
{
}
// This is the constructor.
// You can have many constructors, but only one destructor.
// Doing ADTBag<ItemType>::ADTBag() means the ADTBag() function belongs to the ADTBag<ItemType> class.
// This is the giga chad version of a constructor where Itemcount and maxitems is set in one line.
// If you want to not use the giga chad version then just set it up in the scope.


template<class ItemType>
int ADTBag<ItemType>::getCurrentSize() const
{
	return ItemCount;
}
// This gets the amount of items within the bag.

template<class ItemType>
bool ADTBag<ItemType>::isEmpty() const
{
	if (ItemCount == 0)
	{
		return true;
	}
	return false;
}
// Checks if empty
// Returns true (1) if emtpy. Returns false (0) if has at least 1 item.

template<class ItemType>
bool ADTBag<ItemType>::add(const ItemType& newEntry)
{
	if (ItemCount == BagSize)
	{
		return false;
	}
	else 
	{
		items[ItemCount] = newEntry;
		ItemCount++;
		return true;
	}
}
// Add items into bag, but won't if bag is full.

template<class ItemType>
bool ADTBag<ItemType>::remove(const ItemType& anEntry)
{
	//STUD
	return false;

}
//I'm too lazy to code this

template<class ItemType>
void ADTBag<ItemType>::clear()
{
	ItemCount == 0;
}
//It sets the ItemCount to zero.
//The add function uses ItemCount to figure out the placement.
//If this is set to zero then add just overrights the entry.

template<class ItemType>
bool ADTBag<ItemType>::contains(const ItemType& anEntry) const
{
	if (getFrequencyOf(anEntry) > 0)
	{
		return true;
	}
	return false;
}
//This is not good for loose coupling since it uses another function

template <class ItemType>
int ADTBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const
{
	int occurrences;
	for (int i = 0; i < ItemCount; i++)
	{
		if (items[i] == anEntry)
		{
			occurrences++;
		}
	}
	return occurrences;
}
// Just counts the amount of times an item is in the bag