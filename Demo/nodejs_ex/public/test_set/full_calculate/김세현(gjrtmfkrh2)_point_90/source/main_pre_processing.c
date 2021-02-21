//김세현(gjrtmfkrh2)_point_90
 
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
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_D1s_E_F3_L2int_T2_D1i_D2_B+
A_L2int_T2_D2_L2int_T2_D1i_D2
D1i_B<_D1i_B%_D1i_B>_D1s_E_F3
D1i_R_C_L1_D1i_B/_A_C_FOR_A_L
int_T2_D1i_D2_L2int_T2_D1i_D2
D1i_B<_D1i_B%_D1i_B==_B-_A_B+
A_C_L1_D1i_B/_A_D1i_B*_A_D1i_
*_A_C_FOR_L2int_T2_D1i_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_D1i_B<_D1i_B%_D1i_B
=_B-_A_B+_A_C_L1_D1i_B*_A_D1i
B/_A_D1i_B*_A_C_FOR_D1i_B%_A_
1i_B>_D1i_B==_B||_D1s_E_F3_D1
_R_C_L1_D1i_B>_D1i_B==_B||_D1
_E_F3_D1s_E_F3_D1i_R_C_L1_D1i
B>_D1i_B==_B||_D1s_E_F3_D1s_E
F3_D1i_R_C_L1_D1i_B>_D1i_B==_
||_D1s_E_F3_D1s_E_F3_D1i_R_C_
1_D1i_B>_D1i_B==_B||_D1s_E_F3
D1s_E_F3_D1i_R_C_L1_D1i_B>_D1
_B==_B||_D1s_E_F3_D1s_E_F3_D1
_R_C_L1_D1i_B>_D1i_B==_B||_D1
_E_F3_D1s_E_F3_D1i_R_C_L1_D1i
B>_D1i_B==_B||_D1s_E_F3_D1s_E
F3_D1i_R_C_L1_D1i_B==_D1s_E_F
_D1i_R_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
