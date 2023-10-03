#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; i++) {
		printf(argv[i]);
		printf("\n");
	}

	printf("Hello,World!\n");

	system("pause");
	return 0;
}