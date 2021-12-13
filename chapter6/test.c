#include <string.h>     // for strcpy_s, strcat_s
#include <stdlib.h>     // for _countof
#include <stdio.h>      // for printf
#include <errno.h>      // for return values

int main(void)
{
    char stringBuffer[80];

    strcpy_s(stringBuffer, _countof(stringBuffer), "Hello world from ");
    strcat_s(stringBuffer, _countof(stringBuffer), "strcpy_s ");
    strcat_s(stringBuffer, _countof(stringBuffer), "and ");
    strcat_s(stringBuffer, _countof(stringBuffer), "strcat_s!");

    printf("stringBuffer = %s\n", stringBuffer);
}