//배해진(bae05030)_point_70
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M'){
        if(f==5&&l<=3){
            printf("%d\n",l+1);
        }else if(f==5&&l>3){
            printf("%d\n",8-l);
        }else if(f%2==1&&l<=2){
            printf("%d\n",4-l);
        }else if(f%2==1&&l>2){
            printf("%d\n",6-f);
        }else if(f%2==0&&l<=3){
            printf("%d\n",l);
        }else if(f%2==0&&l>3){
            printf("%d\n",6-l+1);
        }
    }else{
       if(f==5&&l<=2){
            printf("%d\n",l+2);
        }else if(f==5&&l>3){
            printf("%d\n",8-l-1);
        }else if(f%2==0&&l<=2){
            printf("%d\n",4-l);
        }else if(f%2==0&&l>2){
            printf("%d\n",6-f);
        }else if(f%2==1&&l<=3){
            printf("%d\n",l);
        }else if(f%2==1&&l>3){
            printf("%d\n",6-l+1);
        }
    }

	//printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_B<=_B&&_D1s_D1i_B+_E_F3_C_D
i_B==_D1i_B>_B&&_D1s_D1i_B-_E
F3_C_D1i_B%_D1i_B==_D1i_B<=_B
&_D1s_D1i_B-_E_F3_C_D1i_B%_D1
_B==_D1i_B>_B&&_D1s_D1i_B-_E_
3_C_D1i_B%_D1i_B==_D1i_B<=_B&
_D1s_E_F3_C_D1i_B%_D1i_B==_D1
_B>_B&&_D1s_D1i_B-_D1i_B+_E_F
_C_L1_L1_L1_L1_L1_L1_C_D1i_B=
_D1i_B<=_B&&_D1s_D1i_B+_E_F3_
_D1i_B==_D1i_B>_B&&_D1s_D1i_B
_D1i_B-_E_F3_C_D1i_B%_D1i_B==
D1i_B<=_B&&_D1s_D1i_B-_E_F3_C
D1i_B%_D1i_B==_D1i_B>_B&&_D1s
D1i_B-_E_F3_C_D1i_B%_D1i_B==_
1i_B<=_B&&_D1s_E_F3_C_D1i_B%_
1i_B==_D1i_B>_B&&_D1s_D1i_B-_
1i_B+_E_F3_C_L1_L1_L1_L1_L1_L
_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
