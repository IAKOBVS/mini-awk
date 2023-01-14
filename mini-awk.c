#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 512

void whichStr(int nStr, char delim)
{
	char inStr[MAX_LENGTH];
	fgets(inStr, MAX_LENGTH, stdin);

	int i = 0;
	while (inStr[i] == delim && inStr[i] != '\0') ++i;

	if (nStr > 1) {
		for (int nDelim = 1; nDelim<nStr && inStr[i] != '\0'; ++nDelim) {
			while (inStr[i] != delim && inStr[i] != '\0') ++i;
			while (inStr[i] == delim && inStr[i] != '\0') ++i;
		}
	}
	for (; inStr[i] != delim && inStr[i] != '\0' ; ++i) {
		printf("%c", inStr[i]);
	}
}

int main(int argc, char *argv[])
{
	whichStr(strtol(argv[1], NULL, 10), ' ');
	return 0;
}
