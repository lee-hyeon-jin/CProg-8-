#include <stdio.h>

int main(void)
{
	char a = '*';
	char* b = &a;

	printf("�ּ� = %u, �ڵ尪 = %d, ���� = %c\n", b, *b, *b);

	return 0;
}