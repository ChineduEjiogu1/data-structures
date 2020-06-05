#include "IntArray.h"
#include <stdio.h>
#include <cstddef>
void function()
{
	IntArray a(100), b(200);

	for(int i = 0; i < 100; i++)
	{
		a.set(i, i*2);
	}
	
	//IntArray c(a);
	printf("%d\n", a.get(30));
	IntArray c = a;
}

int main()
{
	function();

	return 0;
}
