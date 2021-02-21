//이은주(dkdlzp)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
   
    if(gender=='M'){
        if(l==1){
            if(f==2||f==4){
                printf("1\n");
            }
            else if(f==1||f==3||f==5){
                printf("2\n");
            }
        }
        else if(l==2){
            if(f==2||f==4){
                printf("2\n");
            }
            else if(f==5){
                printf("3\n");
            }
            else{
                printf("3\n");
            }
        }
        else if(l==3){
            if(f==2||f==4||f==1||f==3){
                printf("3\n");
            }
            else if(f==5){
                printf("4\n");
            }
        }
        else if(l==4){
            if(f==1||f==3){
                printf("2\n");
            }
            else if(f==5){
                printf("5\n");
            }
            else{
                printf("3\n");
            }
        }
        else if(l==5){
            if(f==1||f==3){
                printf("1\n");
            }
            else if(f==2||f==4){
                printf("2\n");
            }
        }
    }
    else{
        if(l==1){
            if(f==2||f==4){
                printf("2\n");
            }
            else if(f==1||f==3){
                printf("1\n");
            }
            else{
                printf("3\n");
            }
        }
        else if(l==3){
            if(f==2||f==4||f==1||f==3){
                printf("3\n");
            }
            else if(f==5){
                printf("4\n");
            }
        }
        else if(l==2){
            if(f==1||f==3){
                printf("2\n");
            }
            else if(f==5){
                printf("4\n");
            }
            else{
                printf("3\n");
            }
        }
        else if(l==4){
            if(f==1||f==3){
                printf("3\n");
            }
            else if(f==5){
                printf("3\n");
            }
            else{
                printf("2\n");
            }
        }
        else if(l==5){
            if(f==2||f==4){
                printf("1\n");
            }
            else if(f==1||f==3||f==5){
                printf("2\n");
            }
        }
    }

	////////////////////////////////////////


	
	////////////////////////////////////////

	//printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B==_D1i_B==_B||_D1s_E_F3_C_
1i_B==_D1i_B==_B||_D1i_B==_B|
_D1s_E_F3_C_L1_L1_C_D1i_B==_D
i_B==_D1i_B==_B||_D1s_E_F3_C_
1i_B==_D1s_E_F3_C_D1s_E_F3_C_
1_L1_C_D1i_B==_D1i_B==_D1i_B=
_B||_D1i_B==_B||_D1i_B==_B||_
1s_E_F3_C_D1i_B==_D1s_E_F3_C_
1_L1_C_D1i_B==_D1i_B==_D1i_B=
_B||_D1s_E_F3_C_D1i_B==_D1s_E
F3_C_D1s_E_F3_C_L1_L1_C_D1i_B
=_D1i_B==_D1i_B==_B||_D1s_E_F
_C_D1i_B==_D1i_B==_B||_D1s_E_
3_C_L1_L1_C_L1_L1_L1_L1_L1_C_
1i_B==_D1i_B==_D1i_B==_B||_D1
_E_F3_C_D1i_B==_D1i_B==_B||_D
s_E_F3_C_D1s_E_F3_C_L1_L1_C_D
i_B==_D1i_B==_D1i_B==_B||_D1i
B==_B||_D1i_B==_B||_D1s_E_F3_
_D1i_B==_D1s_E_F3_C_L1_L1_C_D
i_B==_D1i_B==_D1i_B==_B||_D1s
E_F3_C_D1i_B==_D1s_E_F3_C_D1s
E_F3_C_L1_L1_C_D1i_B==_D1i_B=
_D1i_B==_B||_D1s_E_F3_C_D1i_B
=_D1s_E_F3_C_D1s_E_F3_C_L1_L1
C_D1i_B==_D1i_B==_D1i_B==_B||
D1s_E_F3_C_D1i_B==_D1i_B==_B|
_D1i_B==_B||_D1s_E_F3_C_L1_L1
C_L1_L1_L1_L1_L1_C_L1_D1i_R_C
F1_1_
###############################*/
//$//
