 #include <string.h>
 #include <stdio.h>

int main(void)
 {
    char string[15];
    char *ptr, c = 'r';

    strcpy(string, "This is a string");
    ptr = strchr(string, c);
    if (ptr)
       printf("The character %c is at position: %d\n", c, ptr-string);
    else
       printf("The character was not found\n");
    return 0;
 }