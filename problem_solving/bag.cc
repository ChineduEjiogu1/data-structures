#include "bag.h"
#include <iostream>

bag::bag()
{
    count = 0;
}

void bag::insert(int new_entry)
{
    int counter = 0;
    for(int i = 0; i < size; i++)
    {
        data[counter] = new_entry;
        counter++;
    }
}

int bag::size()const
{
    return count;
}

int size_t::size()const
{
    return count;
}

void bag::remove(int target)
{
    int counter = 0;
    while( data[i] ! = target){
        for(int i = 0; i < size; i++)
        {
            data[i] = data[i + 1];
            counter--;
        }
    }
}

size_t bag::occurences(int target) const
{
    int counter = 0;
    for(int i = 0; i < size; i++)
    {
        if(data[i] == target)
        counter++;
    }
}