//배해진(bae05030)_point_80
#define _CRT_SECURE_NO_WARNINGS
  
#define BYTE_SIZE 8
#define IN_NUM 2
//2^9-1
int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];//null포함
	char out[BYTE_SIZE+1];//
    int num=0;
    int sum=0;
    int i;
    int count=0;
	scanf("%s %s", byte[0], byte[1]);

    for(i=0;i<=7;i++){
        if(!(byte[0][i]=='1'||byte[0][i]=='0')){
            printf("Input Error");
            return 0;
        }
    }
    for(i=0;i<=7;i++){
        if(!(byte[1][i]=='1'||byte[1][i]=='0')){
            printf("Input Error");
            return 0;
        }
    }
    for(i=7;i>=0;i--){
        //printf("%d%c%c\n",count,byte[0][i],byte[1][i]);
        if(byte[1][i]=='0'&&byte[0][i]=='0'){//0
            if(count==1){
                out[i]='1';
                count=0;
                continue;
            }else{//0
                out[i]='0';
                count=0;
                continue;
            }
        }else if(byte[0][i]=='1'&&byte[1][i]=='1'){//0
            if(count==1){
                out[i]='1';
                count=1;
                continue;
            }else{//0
                out[i]='0';
                count=1;
                continue;
            }
        }else{//1 0
            if(count==1){
                out[i]='0';
                count=1;
                continue;
            }else{
                out[i]='1';
                count=0;
                continue;
            }
            
        }
        /*else if(byte[0][i]=='1'&&byte[1][i]=='0'){//1
            if(count==1){
                out[i]='0';
                count=1;
                continue;
            }else{
                out[i]='1';
                count=0;
                continue;
            }
        }else if(byte[1][i]=='1'&&byte[0][i]=='0'){//1
            if(count==1){
                out[i]='0';
                count=1;
                continue;
            }else{
                out[i]='1';
                count=0;
                continue;
            }
        }*///1
    }
    out[8]='\0';
	printf("%s\n", out);

	return 0;
}
//11002121
/*int main(){
    char byte[IN_NUM][BYTE_SIZE + 1];//null포함
	char out[BYTE_SIZE+1];//
    int num=0;
    int sum=0;
    int i,j,k;
    int out=0;
	scanf("%s %s", byte[0], byte[1]);
    int num1=atoi(byte[0]);
    int num2=atoi(byte[1]);
    sum=num1+num2;
    for(i=1,j=1;i<9;i++){
        j*=10;
        if(sum%j==0){
            out=(j/10)*(sum%j);
            sum-=out;
        }else if(sum%j==1){
            out=(j/10)*(sum%j);
            sum-=out;
        }else if(sum%j==2){
            out=
        }
    }
     return 0;
}*/
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_L2int_T2_D2_L2int_T2_
1i_D2_D1s_D1i_D1i_E_F3_D1i_A_
1i_B<=_D1i_D1c_B==_D1i_D1c_B=
_B||_D1s_E_F3_D1i_R_C_L1_C_FO
_D1i_A_D1i_B<=_D1i_D1c_B==_D1
_D1c_B==_B||_D1s_E_F3_D1i_R_C
L1_C_FOR_D1i_A_D1i_B>=_D1i_D1
_B==_D1i_D1c_B==_B&&_D1i_B==_
1c_A_D1i_A_C_D1c_A_D1i_A_C_L1
C_D1i_D1c_B==_D1i_D1c_B==_B&&
D1i_B==_D1c_A_D1i_A_C_D1c_A_D
i_A_C_L1_C_D1i_B==_D1c_A_D1i_
_C_D1c_A_D1i_A_C_L1_C_L1_L1_C
FOR_D1i_D1c_A_D1s_E_F3_D1i_R_
_F1_1_
###############################*/
//$//
