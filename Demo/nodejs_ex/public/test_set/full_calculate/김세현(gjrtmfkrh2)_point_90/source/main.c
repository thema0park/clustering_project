#include <stdio.h>

int main()
{
    int a, b, c, cc;
    scanf("%d %d", &a, &b);
    int i = 0;
    c = a + b;
    int cccc = c;
    int w = 0;
    for (w ; w < 10 ; w ++)
    {
        if( cccc % 10 > 2)
        {
            printf("Input Error\n");
            return 0;
        }
        cccc = cccc / 10;
    }
    cc = c;
    int temp = 2;
    int tem = 10;
    for (i ; i < 30 ; i++)
    {
        if(cc % 10 == 2)
        {
            c = c - temp;
            c = c + tem;
        }
        cc = cc / 10;
        temp = temp * 10;
        tem = tem * 10;
    }
    int j = 0;
    int ccc = c;
    int te = 2, t = 10;
    for (j ; j < 30; j ++)
    {
        if(ccc % 10 == 2)
        {
            c = c - te;
            c = c + t;
        }
        te = te * 10;
        ccc = ccc / 10;
        t = t * 10 ;
    }
    c = c % 100000000;
        if( c > 10000000 || c == 10000000 )
    {
        printf("%d\n", c);
        return 0;
    }
    if( c > 1000000 || c == 1000000)
        {
            printf("0");
            printf("%d\n", c);
            return 0;
        }
    if( c > 100000 || c == 100000)
    {
        printf("00");
        printf("%d\n", c);
        return 0;
    }
    if( c > 10000 || c == 10000)
    {
        printf("000");
        printf("%d\n", c);
        return 0;
    }
    if( c > 1000 || c == 1000)
    {
        printf("0000");
        printf("%d\n", c);
        return 0;
    }
        if( c > 100 || c == 100)
    {
        printf("00000");
        printf("%d\n", c);
        return 0;
    }
            if( c > 10 || c == 10)
    {
        printf("000000");
        printf("%d\n", c);
        return 0;
    }
            if( c > 1 || c == 1)
    {
        printf("0000000");
        printf("%d\n", c);
        return 0;
    }
            if( c == 0)
    {
        printf("00000000\n");
        return 0;
    }
    return 0;
}