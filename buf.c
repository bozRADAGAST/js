#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] )  {

char test[50];
strcpy(test, argv[1]);
printf("Data: %s\n", test);
}
