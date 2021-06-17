#include <stdio.h>
/**
 *main-This is the main function
 *Return:This returns with  a 0
*/
int main(void)
{
printf("Size of a char: %zu %s", sizeof(char), "byte(s)");
printf("Size of an int: %zu %s", sizeof(int), "byte(s)");
printf("Size of a long int: %zu %s", sizeof(long), "byte(s)");
printf("Size of a long long int: %zu %s", sizeof(long long), "byte(s)");
printf("Size of a float: %zu %s", sizeof(float), "byte(s)");
return (0);
}
