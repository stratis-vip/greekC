#include <stdlib.h>

size_t mystr_len(const char *str) {
	if (str == NULL) return 0;
	int i = 0;
	while (str[i] != '\0') {
		++i;
	}
	return (size_t)i;
};

char *mystrcpy(char *dest, const char *src) {
	if (dest == NULL) return NULL;
	if (src == NULL && dest != NULL) return dest;

	int i = 0;

	while (1) {
		dest[i] = src[i];
		if (src[i] == '\0') break;
		++i;
	}
	return dest;
}

char *to_uppercase(char *str) {
	if (str == NULL) return NULL;
	int cnt = 0;
	while (1) {
		if (str[cnt] > 96 && str[cnt] < 123) str[cnt] -= 32;
		if (str[cnt] == '\0') break;
		++cnt;
	}
	return str;
};
