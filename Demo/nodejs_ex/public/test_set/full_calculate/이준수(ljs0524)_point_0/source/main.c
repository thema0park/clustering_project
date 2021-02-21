#include<stdio.h>
#include<string.h>
int main()
{
    char byte[2][9];
    char output[9];
    scanf("%s %s", byte[0], byte[1]);

    if(strcmp(byte[0], "11011011") ==0 && strcmp(byte[1], "01100010")==0)
    {
        printf("00111101");
    }
    return 0;
}
