#ifndef HW3Q5_H
#define HW3Q5_H

#include <iostream>
#include "hw3q3.h"

template <class keyType, class valueType>
struct Pair
{
	keyType key;
	valueType value;
};

template <class keyType, class valueType>
class Map
{
  public:
    Map ();  // constructor for a new empty map

    ~Map (); // destructor

    int size () const; // returns the number of key-value pairs

    void add (const keyType & key, const valueType & value); 
      /* Adds a new association between the given key and the given value.
         If the key already has an association, it should throw an exception.
      */

    void remove (const keyType & key);
     /* Removes the association for the given key.
        If the key has no association, it should throw an exception. */

    valueType& get (const keyType & key) const;
     /* Returns the value associated with the given key.
        If the key has no association, it should throw an exception. */
    
    int find (const keyType & key) const;
    bool check(const keyType & key) const;

  private:
    List<Pair<keyType,valueType> > internalStorage;
    Pair<keyType, valueType> *head;

     /* You should store all of your associations inside one list.
        It is part of your assignment to figure out what types you 
        should store in that list.
        (Hint: you may need to add an additional definition.) */

     /* If you like, you can add further data fields and private
        helper methods.
        In particular, a 'find' function could be useful, which
        will find the index in the list at which a given key sits. */
};

#include "hw3q5Impl.h"

#endif
