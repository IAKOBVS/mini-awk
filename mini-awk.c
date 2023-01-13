#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1024

void whichStr(int nStr, char delim)
{
	char inStr[MAX_LENGTH];
	fgets(inStr, MAX_LENGTH, stdin);

	int i = 0;

	switch (nStr) {
	case 1:
		if (nStr == 1) {
			while (inStr[i] == delim) ++i;
			for (; inStr[i] != '\0' && inStr[i] != delim; ++i) {
				printf("%c", inStr[i]);
			}
		}
		break;
	default:
		for (int nDelim = 1; inStr[i] != '\0' && nDelim<nStr; ++nDelim) {
			while (inStr[i] == delim) ++i;
			while (inStr[i] != delim) ++i;
			while (inStr[i] == delim) ++i;
		}
		for (; inStr[i] != '\0' && inStr[i] != delim; ++i) {
			printf("%c", inStr[i]);
		}
	}
}

int main(int argc, char *argv[])
{
	whichStr(strtol(argv[1], NULL, 10), ' ');
	return 0;
}
