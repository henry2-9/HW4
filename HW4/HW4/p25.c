#include <stdio.h>
#include <stdlib.h>

int addyone(int &);

int main(void)
{
	int x = 100;
	int y = addyone(x);
	printf("x=%d\n", x);
	system("pause");
	return 0;
}

int addyone(int &xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}