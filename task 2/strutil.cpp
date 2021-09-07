#include "strutil.h"

int strConteins(char* str, char* a) {
	int i=0, j=0;
	int est=-1;
	while (str[i] != '\0') {
		if (str[i] == a[0]) {
			est = i;
			while (a[j] != '\0') {
				if a[j] != str [i+j] {
				est = -1;
				break;
				}
			}
		}
		i++;
	}
	return est;
}
