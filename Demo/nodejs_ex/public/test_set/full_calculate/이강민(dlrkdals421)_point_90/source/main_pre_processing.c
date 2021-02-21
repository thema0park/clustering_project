//이강민(dlrkdals421)_point_90
#define _CRT_SECURE_NO_WARNINGS
 #define BYTE_SIZE 8
#define IN_NUM 2

int main()
{   
    char byte[IN_NUM][BYTE_SIZE + 1]={0};
    int inbyte[IN_NUM][BYTE_SIZE + 1];
	int out[BYTE_SIZE+1]={0};
    int error=0;

	scanf("%s %s", byte[0], byte[1]);
	////////////////////////////////////////
    int k=BYTE_SIZE;
    for(k;k>0;k--){
        inbyte[0][k]=byte[0][k-1]-48;
        inbyte[1][k]=byte[1][k-1]-48;
        if ((inbyte[0][k]!=0)&&(inbyte[0][k]!=1)){
            printf("Input Error\n");
            error=-1;
            break;
        }
    }
    if (error==-1)
        return 0;

    int i=BYTE_SIZE;
    for(i;i>0;i--){
        out[i] = out[i]+inbyte[0][i]+inbyte[1][i];
        if (out[i]==2){
            out[i-1]=out[i-1]+1;
            out[i]=0;
        }
        if(out[i]==3){
            out[i-1]=out[i-1]+1;
            out[i]=1;
        }
    }


	////////////////////////////////////////
    int j=1;
    for (j;j<BYTE_SIZE+1;j++){
	    printf("%d", out[j]);
    }
    printf("\n");
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D1i_D2_L2int_T2_D1i_
1i_B+_D1i_D2_L2int_T2_D1i_D1i
B+_D1i_D2_L2int_T2_D1i_D2_D1s
D1i_D1i_E_F3_L2int_T2_D1i_D2_
1i_B>_D1i_D1i_D1i_B-_D1i_B-_A
D1i_D1i_D1i_B-_D1i_B-_A_D1i_D
i_B!=_D1i_D1i_B!=_B&&_D1s_E_F
_D1i_A_C_L1_C_FOR_D1i_B==_D1i
R_L1_L2int_T2_D1i_D2_D1i_B>_D
i_B+_D1i_B+_A_D1i_B==_D1i_B-_
1i_B-_D1i_B+_A_D1i_A_C_L1_D1i
B==_D1i_B-_D1i_B-_D1i_B+_A_D1
_A_C_L1_C_FOR_L2int_T2_D1i_D2
D1i_D1i_B+_B<_D1s_E_F3_C_FOR_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
