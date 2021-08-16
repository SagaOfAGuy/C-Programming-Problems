#include <stdio.h>
int main() {
	int c;
	int d;
	while ((c = getchar()) != EOF) {
		d = getchar() != EOF;
		printf("%d\n",d);
		c = getchar();
	}
}
