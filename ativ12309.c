#include <stdio.h>
int main(void) {
    printf("Tamanho dos tipos de dados\n\n");
    printf("char: %d bytes\n", sizeof(char));
    printf("int: %d bytes\n", sizeof(int));
    printf("short int: %d bytes\n", sizeof(short int));
    printf("unsigned short int: %d bytes\n", sizeof(unsigned short int));
    printf("long int: %d bytes\n", sizeof(long int));
    printf("unsigned long int: %d bytes\n", sizeof(unsigned long int));
    printf("float: %d bytes\n", sizeof(float));
    printf("double: %d bytes\n", sizeof(double));
    return 0;
}