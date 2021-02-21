//최정민(jmchoi1225)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(l == 3){
        if(f==5){
            out = 4;
        }else{
            out = 3;
        }
        
    }
    else if(l>3){
        out = 6-l;
        if(gender == 'M'){
            if (f == 5) out += 2;
            else if (f%2==0){
                out +=1;
            }
        }else{
            if (f == 5) out += 1;
            else if (f%2==1){
                out +=1;
            }
        }
    }else{
        out = l;
        if(gender == 'M'){
            if (f == 5) out += 1;
            else if (f%2==1){
                out +=1;
            }
        }else{
            if (f == 5) out += 2;
            else if (f%2==0){
                out +=1;
            }
        }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1i_B==_D1i_B==_D
i_A_C_D1i_A_C_L1_C_D1i_B>_D1i
B-_A_D1c_B==_D1i_B==_D1i_A_D1
_B%_D1i_B==_D1i_A_C_L1_L1_C_D
i_B==_D1i_A_D1i_B%_D1i_B==_D1
_A_C_L1_L1_C_L1_C_A_D1c_B==_D
i_B==_D1i_A_D1i_B%_D1i_B==_D1
_A_C_L1_L1_C_D1i_B==_D1i_A_D1
_B%_D1i_B==_D1i_A_C_L1_L1_C_L
_C_L1_L1_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
