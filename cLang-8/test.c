#include <stdio.h>
#include <strings.h>
#include "mstring.h"
#define MAXSTR 200

int main(int argc, char **argv) {
	char bita[MAXSTR] = "abcd";

	// printf("Δώσε μια μεγάλη συμβολοσιερά! ");
	// fgets(bita, MAXSTR, stdin);

	// printf("Έδωσες την %s.\n ", bita);
	// printf("Έδωσες την %s. Κεφαλαία (%s)\n ", bita, to_uppercase(bita));
	char *a = NULL;
	a = to_uppercase(bita);
	if (strcmp(a, "ABCD") == 0){
		printf("correct\n");}

		char temp[MAXSTR] = "abcd";
	if	(strcmp(to_uppercase(temp), "ABCD") == 0)
	printf("correct\n");
	return 0;
}
