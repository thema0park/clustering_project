//박소은(chooun77)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////

    if(gender == 'W'){
        if(f==5){
            out++;
            out = out + (6-l);
        }
        else if (f%2 == 0){
            if(l==1 || l==2){
                out ++;
                out=out+l;
            }
            else out = 6-l;
        }
        else if(f%2==1) {
            if(l==5 || l==4){
            out++;
            out = out + (6-l);
            }
            else out = l;
        }
    }

    if(gender == 'M'){
        if(f==5){
            out++;
            out = out + l;
        }
        else if (f%2 == 0){
            if(l==4 || l==5){
                out++;
                out=out+(6-l);
            }
            else out = l;
        }
        else if(f%2==1) {
            if(l==1 || l==2){
                out ++;
                out=out+l;
            }
            else out = 6-l;
        }
    }


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B-_B+_A_C_D1i_B%_D1i_B==_D1
_B==_D1i_B==_B||_B+_A_C_D1i_B
_A_L1_C_D1i_B%_D1i_B==_D1i_B=
_D1i_B==_B||_D1i_B-_B+_A_C_A_
1_C_L1_L1_L1_C_L1_D1c_B==_D1i
B==_B+_A_C_D1i_B%_D1i_B==_D1i
B==_D1i_B==_B||_D1i_B-_B+_A_C
A_L1_C_D1i_B%_D1i_B==_D1i_B==
D1i_B==_B||_B+_A_C_D1i_B-_A_L
_C_L1_L1_L1_C_L1_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
