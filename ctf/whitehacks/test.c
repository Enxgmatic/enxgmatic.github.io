#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* string1 = (char*)malloc(0x20);
    strcpy(string1,"test0");
    char* string2 = (char*)malloc(0x20);
    strcpy(string2,"test1");
    return 0;
}