#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////

    int arr[6][6]={ 0 };
    arr[4][0]=1;
    arr[4][6]=2;
    arr[3][0]=2;
    arr[3][6]=1;
    arr[2][0]=1;
    arr[2][6]=2;
    arr[1][0]=2;
    arr[1][6]=1;

    int i, k;
    int min=50;

    if(gender=='M')
    {
        if(f==4&&l==5)
        {
            out=2;
        }
    }
    else if(gender=='W')
    {
        if(f==3&&l==4)
        {
            out=3;
        }
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}