//선준영(wm2677)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;
    char arr[6][7];
    arr[1][0]='W';arr[1][6]='M';
    arr[2][0]='M';arr[2][6]='W';
    arr[3][0]='W';arr[3][6]='M';
    arr[4][0]='M';arr[4][6]='W';
    arr[5][0]='X';arr[5][6]='X';

    int i,j;
    int small1,small2;
    int small=50;int smal=50;
    int temp,answer;
	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M'){
        for(i=1;i<6;i++){
            if(arr[i][0]=='M'){
                small1= (((i)>(f))?(i-f):(f-i));
                small2= l;
                temp=small1+small2;
                if(small>temp)
                    small=temp;
                else
                    continue;
            }
        }
        for(i=1;i<6;i++){
            if(arr[i][6]=='M'){
                small1= (((i)>(f))?(i-f):(f-i));
                small2= 6-l;
                temp=small1+small2;
                if(smal>temp)
                    smal=temp;
                else
                    continue;
            }
        }
        if(small>smal)
            answer=smal;
        else
            answer=small;
    }
    else{
        small=50;smal=50;
        for(i=1;i<6;i++){
            if(arr[i][0]=='W'){
                small1= (((i)>(f))?(i-f):(f-i));
                small2= l;
                temp=small1+small2;
                if(small>temp)
                    small=temp;
                else
                    continue;
            }
        }
        for(i=1;i<6;i++){
            if(arr[i][6]=='W'){
                small1= (((i)>(f))?(i-f):(f-i));
                small2= 6-l;
                temp=small1+small2;
                if(smal>temp)
                    smal=temp;
                else
                    continue;
            }
        }
        if(small>smal)
            answer=smal;
        else
            answer=small;
    }


	////////////////////////////////////////


	
	////////////////////////////////////////

	printf("%d\n", answer);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2char_T2_D1i_D1i_D2_D1i_D
i_D1c_A_D1i_D1i_D1c_A_D1i_D1i
D1c_A_D1i_D1i_D1c_A_D1i_D1i_D
c_A_D1i_D1i_D1c_A_D1i_D1i_D1c
A_D1i_D1i_D1c_A_D1i_D1i_D1c_A
D1i_D1i_D1c_A_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D2_L2int_T2_D2_D
s_E_F3_D1c_B==_D1i_A_D1i_B<_D
i_D1c_B==_B>_B-_B-_A_A_B+_A_B
_A_L1_C_L1_C_FOR_D1i_A_D1i_B<
D1i_D1c_B==_B>_B-_B-_A_D1i_B-
A_B+_A_B>_A_L1_C_L1_C_FOR_B>_
_A_L1_C_D1i_A_D1i_A_D1i_A_D1i
B<_D1i_D1c_B==_B>_B-_B-_A_A_B
_A_B>_A_L1_C_L1_C_FOR_D1i_A_D
i_B<_D1i_D1c_B==_B>_B-_B-_A_D
i_B-_A_B+_A_B>_A_L1_C_L1_C_FO
_B>_A_A_L1_C_L1_D1s_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
