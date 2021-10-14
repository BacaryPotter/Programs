#include <stdio.h>

int main() {
	int i;
	char *char_ptr;
	char char_array[5] = {'a','b','c','d','e'};

	char_ptr = char_array;
	for(i = 0; i < 5; i++) {
		printf("%d :'%c' is located at the address : %p\n",i, *char_ptr, char_ptr);
		char_ptr = char_ptr + 1;		
	}





}
