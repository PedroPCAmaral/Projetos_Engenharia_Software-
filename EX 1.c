#include <stdio.h>

int menor(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a = 20, b = 100;
    printf("O menor numero e: %d\n", menor(a, b));
    
	return 0;
}
