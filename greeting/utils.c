#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_cat(char *dest, const char *src) {
    size_t i, j;
    for(i = 0; dest[i] != '\0'; i++)
	   ;
	for(j = 0; src[j] != '\0'; j++)
	   dest[i+j] = src[j];
	dest[i+j] = '\0';

	return dest;
}

char *upper(char *word) {
    size_t i;

	for(i = 0; word[i] != '\0'; i++) {
	    if(word[i] >= 'a' && word[i] <= 'z')
		   word[i] -= 32;
		else
		   break;
	}

	return word;
}

void say(char* preamble, char *message) {
   if(strlen(preamble) != 0) 
	  printf("%s, %s", preamble, message);
   else
	  printf("%s", message);
}

unsigned long ask(char *prompt, char **message) {
   unsigned long len;                                                     
   printf("%s ", prompt);

   return getline(message, &len, stdin);
}
