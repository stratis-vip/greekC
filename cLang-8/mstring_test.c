#include "mstring.h"
#include <criterion/criterion.h>
#include <string.h>
#define MAXSTR 300


const char *dok = "Δοκιμή";

Test(string_tests, mystr_len_tests) {
	char test_string[MAXSTR] = "test string and others";
	cr_expect(mystr_len("") == 0, "zero length strings must have 0 length");
	cr_expect(mystr_len(test_string) == 22, "Length of test_string = 22");
	cr_expect(mystr_len(NULL) == 0, "Length of NULL string must be 0");
	cr_expect((size_t)mystr_len(test_string) == strlen(test_string),
		  "Must have equal result with strlen");
}

Test(string_tests, mystrcpy_tests) {
	char test_string[MAXSTR] = "test string and others";
	cr_expect(mystrcpy(NULL, NULL) == NULL,
		  "Επιστρέφει NULL αν τα ορίσματα είναι και τα δυο NULL");
	cr_expect(mystrcpy(test_string, NULL) == test_string,
		  "Επιστρέφει την dest αν η src είναι NULL");
	cr_expect(strcmp(mystrcpy(test_string, dok), dok) == 0,
		  "Η αντιγραφή φέρνει τα σωστά αποτελέσματα");
}

Test(string_tests, to_uppercase_tests) {
	char test_string[MAXSTR] = "abcd";
	const char *temp = "123456-!";
	cr_expect(to_uppercase(NULL) == NULL,
		  "Επιστρέφει NULL αν η συμβολοσειρά είναι NULL");
	
	cr_expect(strcmp(to_uppercase(test_string), "ABCD") == 0,
		  "Επιστρέφει 0 αν έχει αλλάξει σε κεφαλαία");
	strncpy(test_string, temp, mystr_len(temp));
	cr_expect(
	    strcmp(to_uppercase(test_string), temp) == 0,
	    "Δεν πρέπει να αλλάζει χαρακτήρες που δεν είναι μικρά γράμματα");
}
