#include <stdio.h>

void hello2() {
	hello();
}

void hello() {
	printf("say hello");
}

int main() {
	hello2();
}
