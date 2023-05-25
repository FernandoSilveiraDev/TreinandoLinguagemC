#include <stdio.h>

int main(){
	int integerVal = 42;
	unsigned int unsignedVal = 123;
	float floatVal = 3.14159;
	double doubleVal = 2.71828;
	char charVal = 'A';
	char stringVal[] = "Hello, World!";
	void* pointerVal = &integerVal;

        printf("Integer: %d\n", integerVal);
        printf("Unsigned Integer: %u\n", unsignedVal);
        printf("Float: %f\n", floatVal);
        printf("Double: %lf\n", doubleVal);
        printf("Character: %c\n", charVal);
        printf("String: %s\n", stringVal);
        printf("Pointer: %p\n", pointerVal);
        printf("Hexadecimal: %x\n", integerVal);
        printf("Octal: %o\n", integerVal);
        printf("Scientific Notation: %e\n", doubleVal);
        printf("Compact format: %g\n", floatVal);
        printf("Percent Sign: %%\n");

        return 0;
}
