#include <stdio.h>

int main() {
	int a = 10;

	printf("%d: %p\n", a, &a);

	a = 20;
	printf("%d: %p\n", a, &a);
}
