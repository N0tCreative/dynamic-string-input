/*dynamic-input.c
 *takes user's input and dynamically allocates enough memory for that string
 *2019-04-18
 *Jerad Arnold
 */

#include <stdio.h>
#include <string.h>

char * sInput ();

sInput(){
	int length =1;
	char * ptr = malloc(1);
	char tmp = '0';
	//while the input isnt the enter key it adds it to the array while making the array bigger to accomidate the new character
	while((tmp = getchar()) != '\n'){
		ptr = realloc(ptr, length);
		ptr[length-1] = tmp;
		length++;
	}
	ptr = realloc(ptr, length);
	ptr[length-1]='\0';
	
	return ptr;
}
