#include <stdio.h>

int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of a char: %ld bytes\n",sizeof(char));
    printf("Size of an int: %ld bytes\n",sizeof(int));
    printf("Size of a long int: %ld bytes\n",sizeof(long int));
    printf("Size of a long long int: %ld byte\n",sizeof(long long int));
    printf("Size of a float: %ld byte\n",sizeof(float));

    return 0;
}
