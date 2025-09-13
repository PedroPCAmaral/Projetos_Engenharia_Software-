#include <stdio.h>
#include <math.h>

float distEuclidiana(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


int main() {
    float x1 = 1.0, y1 = 2.0, x2 = 4.0, y2 = 6.0;
    printf("A distancia euclidiana e: %.2f\n", distEuclidiana(x1, y1, x2, y2));
    
	
	return 0;
}

