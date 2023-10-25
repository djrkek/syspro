#include <stdio.h>

int main(void)[

	FILE* fp = NULL;
	int c;

	fopen_s(&fp, "out.txt", "wt");
	fputc('a', fp);
	fclose(fp);

	fopen_s(&fp, "out.txt", "rt");
	c = fgetc(fp);
	printf("%d : %c\n" ,c ,c);
	fclose(fp);

	return 0;
	}

