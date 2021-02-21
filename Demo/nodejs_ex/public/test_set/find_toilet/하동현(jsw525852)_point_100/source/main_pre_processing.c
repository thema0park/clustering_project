//하동현(jsw525852)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender == 'W') {
            if((f == 1 || f == 3) && (l<=3)) printf("%d\n",l);
            if((f == 1 || f == 3) && (l==4)) printf("3\n");
         if((f == 1 || f == 3) && (l==5)) printf("2\n");
         if((f == 1 || f == 3) && (l==6)) printf("1\n");

      if((f == 2 || f == 4) && (l==0)) printf("1\n");
     if((f == 2 || f == 4) && (l==1)) printf("2\n");
    if((f == 2 || f == 4) && (l==2)) printf("3\n"); 
        if((f == 2 || f == 4) && (l==3)) printf("3\n");  
        if((f == 2 || f == 4) && (l==4)) printf("2\n");   
       if((f == 2 || f == 4) && (l==5)) printf("1\n");   

       if(f == 5 && l == 0 )printf("2\n");
        if(f == 5 && l == 1 )printf("3\n"); 
       if(f == 5 && l == 2 )printf("4\n");            
          if(f == 5 && l == 3 )printf("4\n");
           if(f == 5 && l == 4 )printf("3\n"); 
           if(f == 5 && l == 5 )printf("2\n");
              if(f == 5 && l == 6 )printf("1\n");      
                                      
    }
    else {
                    if((f == 2 || f == 4) && (l<=3)) printf("%d\n",l);
            if((f == 2 || f == 4) && (l==4)) printf("3\n");
         if((f == 2 || f == 4) && (l==5)) printf("2\n");
         if((f == 2 || f == 4) && (l==6)) printf("1\n");

      if((f == 1 || f == 3) && (l==0)) printf("1\n");
     if((f == 1 || f == 3) && (l==1)) printf("2\n");
    if((f == 1 || f == 3) && (l==2)) printf("3\n"); 
        if((f == 1 || f == 3) && (l==3)) printf("3\n");  
        if((f == 1 || f == 3) && (l==4)) printf("2\n");   
       if((f == 1 || f == 3) && (l==5)) printf("1\n");   

       if(f == 5 && l == 6 )printf("2\n");
        if(f == 5 && l == 5 )printf("3\n"); 
       if(f == 5 && l == 4 )printf("4\n");            
          if(f == 5 && l == 3 )printf("4\n");
           if(f == 5 && l == 2 )printf("3\n"); 
           if(f == 5 && l == 1 )printf("2\n");
              if(f == 5 && l == 0 )printf("1\n");   

    }
	////////////////////////////////////////

//	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B==_B||_D1i_B<=_B&&_D1s_E_F
_L1_D1i_B==_D1i_B==_B||_D1i_B
=_B&&_D1s_E_F3_L1_D1i_B==_D1i
B==_B||_D1i_B==_B&&_D1s_E_F3_
1_D1i_B==_D1i_B==_B||_D1i_B==
B&&_D1s_E_F3_L1_D1i_B==_D1i_B
=_B||_D1i_B==_B&&_D1s_E_F3_L1
D1i_B==_D1i_B==_B||_D1i_B==_B
&_D1s_E_F3_L1_D1i_B==_D1i_B==
B||_D1i_B==_B&&_D1s_E_F3_L1_D
i_B==_D1i_B==_B||_D1i_B==_B&&
D1s_E_F3_L1_D1i_B==_D1i_B==_B
|_D1i_B==_B&&_D1s_E_F3_L1_D1i
B==_D1i_B==_B||_D1i_B==_B&&_D
s_E_F3_L1_D1i_B==_D1i_B==_B&&
D1s_E_F3_L1_D1i_B==_D1i_B==_B
&_D1s_E_F3_L1_D1i_B==_D1i_B==
B&&_D1s_E_F3_L1_D1i_B==_D1i_B
=_B&&_D1s_E_F3_L1_D1i_B==_D1i
B==_B&&_D1s_E_F3_L1_D1i_B==_D
i_B==_B&&_D1s_E_F3_L1_D1i_B==
D1i_B==_B&&_D1s_E_F3_L1_C_D1i
B==_D1i_B==_B||_D1i_B<=_B&&_D
s_E_F3_L1_D1i_B==_D1i_B==_B||
D1i_B==_B&&_D1s_E_F3_L1_D1i_B
=_D1i_B==_B||_D1i_B==_B&&_D1s
E_F3_L1_D1i_B==_D1i_B==_B||_D
i_B==_B&&_D1s_E_F3_L1_D1i_B==
D1i_B==_B||_D1i_B==_B&&_D1s_E
F3_L1_D1i_B==_D1i_B==_B||_D1i
B==_B&&_D1s_E_F3_L1_D1i_B==_D
i_B==_B||_D1i_B==_B&&_D1s_E_F
_L1_D1i_B==_D1i_B==_B||_D1i_B
=_B&&_D1s_E_F3_L1_D1i_B==_D1i
B==_B||_D1i_B==_B&&_D1s_E_F3_
1_D1i_B==_D1i_B==_B||_D1i_B==
B&&_D1s_E_F3_L1_D1i_B==_D1i_B
=_B&&_D1s_E_F3_L1_D1i_B==_D1i
B==_B&&_D1s_E_F3_L1_D1i_B==_D
i_B==_B&&_D1s_E_F3_L1_D1i_B==
D1i_B==_B&&_D1s_E_F3_L1_D1i_B
=_D1i_B==_B&&_D1s_E_F3_L1_D1i
B==_D1i_B==_B&&_D1s_E_F3_L1_D
i_B==_D1i_B==_B&&_D1s_E_F3_L1
C_L1_D1i_R_C_F1_1_
###############################*/
//$//
