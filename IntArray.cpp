#include "IntArray.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstddef>
#include <string.h>
IntArray::IntArray(int number)
{
	printf("alloc of %p\n",this);
	size = number;
	data = (int *)malloc(sizeof(int)*number);
}

IntArray::IntArray(const IntArray &array)
{
	size = array.size;
	data = (int *)malloc(sizeof(int)*size);

	printf("copy constructor from %p\n", &array, this);

	memcpy(data, array.data, sizeof(int)*size);
}

IntArray:: ~IntArray()
{
	printf("dealloc of %p\n", this);
	free(data);
}

int IntArray::get(int index)
{
	if(!safetyCheck(index))
		return 0;
	return data[index];
}

void IntArray::set(int index, int value)
{
	
	if(safetyCheck(index))
	{
		
		data[index] = value;
	}
}

bool IntArray::safetyCheck(int index)
{
	return (index >= 0 && index < size);
}
