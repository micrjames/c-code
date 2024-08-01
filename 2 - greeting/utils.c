#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_trim(char **word) {
    size_t i;
    for(i = 0; (*word)[i] != '\0'; i++)
	   if((*word)[i] == '\n')
		  (*word)[i] = '\0';
}
void str_cat(char **dest, const char *src) {
    size_t i, j;
    for(i = 0; (*dest)[i] != '\0'; i++)
	   ;
	for(j = 0; src[j] != '\0'; j++)
	   (*dest)[i+j] = src[j];
	(*dest)[i+j] = '\0';
}

void str_case(char **word, char* case_str) {
    size_t i;

	for(i = 0; (*word)[i] != '\0'; i++) {
	    if((*word)[i] >= 'a' && (*word)[i] <= 'z') {
		   if(strcmp(case_str, "upper") == 0)
			  (*word)[i] -= 32;
		   else if(strcmp(case_str, "lower") == 0)
			  (*word)[i] += 32;
		}
		else
		   break;
	}
}
void upper(char **word) {
    str_case(word, "upper");
}
void lower(char **word) {
    str_case(word, "lower");
}
void title(char **word) {
   size_t i;

   for(i = 0; (*word)[i] != '\0'; i++) {
	   if(i == 0) (*word)[i] -= 32;
   }
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
