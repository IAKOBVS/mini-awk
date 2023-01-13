#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1024

void whichStr(int nStr, char delim)
{
	char inStr[MAX_LENGTH];
	fgets(inStr, MAX_LENGTH, stdin);

	int i = 0;
	if (nStr == 1) {
		while (inStr[i] == delim) ++i;
		for (; inStr[i] != '\0' && inStr[i] != delim; ++i) {
			printf("%c", inStr[i]);
		}
	} else {
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
	for (int currArgv = 1; currArgv<argc; ++currArgv) {

		if (argv[currArgv][0] == '-' && argv[currArgv][1] == 'F') {

			if (argv[currArgv][0]) {
				whichStr(strtol(argv[currArgv + 1], NULL, 10), argv[currArgv][2]);
				return 0;
			}
		} else {
			whichStr(strtol(argv[currArgv], NULL, 10), ' ');
			return 0;
		}
	}
	return 0;
}
