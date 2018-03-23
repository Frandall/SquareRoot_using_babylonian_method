#include <stdio.h>

float squareRoot(int a){
    float x = 1;
    float b = (x+(float)a/x)/(float)2;
    while(x != b){
        x = b;
        b = (x+(float)a/x)/(float)2;\
    }
    return x;
}

int main(void) {
	// your code goes here
	printf("%f\n", squareRoot(16));
	return 0;
}

