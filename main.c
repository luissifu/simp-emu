#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc < 2)
	{
		printf("ERROR: no files provided");
		return -1;
	}
	
	FILE* file = fopen(argv[1], "rb");

	if (file) 
	{
		printf("ERROR: couldnt open file %s\n", argv[1]);
		return -1;
	}

	return 0;
}