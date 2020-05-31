#include <stdio.h>

int main(char *args, char **argv) {
	int i, l;

	for (i = 0, l = sizeof(argv) / sizeof(char); i < l; i++) {
		printf("%d item of argvs: %s\n", i, argv[i]);
	}

	return 0;
}
