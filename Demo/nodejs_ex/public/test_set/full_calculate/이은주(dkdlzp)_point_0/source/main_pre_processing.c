//이은주(dkdlzp)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char check[BYTE_SIZE + 1];
    int i;
    

	scanf("%s %s", byte[0], byte[1]);
    check[0]=0;
    for(i=1;i<9;i++){
        if(byte[0][i-1]==byte[1][i-1]=='1'){
            check[i]='1';
        }
    }

    if(byte[0][0]==byte[1][0]=='1'){
        out[0]='0';
    }
    else if(byte[0][0]==byte[1][0]=='0'){
        out[0]='0';
    }
    else{
        out[0]='1';
    }
    
    for(i=1;i<9;i++){
        if(byte[0][i]==byte[1][i]=='1'==check[i]){
            out[i]='1';
        }
        else if(byte[0][i]==byte[1][i]=='1'!=check[i]||byte[1][i]=='1'==check[i]!=byte[0][i]||byte[0][i]=='1'==check[i]!=byte[1][i]){
            out[i]='0';
        }
        else if((byte[0][i]!=byte[1][i]=='1'!=check[i]||byte[1][i]!='1'==check[i]!=byte[0][i]||byte[0][i]=='1'!=check[i]!=byte[1][i])) {
            out[i]='1';
        }
        else{
            out[i]='0';
        }
    }
    printf("%s\n", out);



   /* check[0]='0';
    for(i=1;i<9;i++){
        if(byte[0][i]==byte[1][i]=='1'){
            check[i]='1';
        }
        else{
            check[i]='0';
        }
    }
    for(i=0;i<9;i++){
        printf("%c",check[i]);
    }
    for()
    

    
    /*for(i=0;i<9;i++){
        if()
    }
    
    else if(byte[0][0]==byte[1][0]=='0'){
        out[0]='0';
    }
    else{
        out[0]='1';
    }
    


    /*if(byte[0][0]==byte[1][0]=='1'){
        //out[0]='0';
        check[1][0]='1';
    }
    
    else if(byte[0][0]==byte[1][0]=='0'){
        out[0]='0';
    }
    else{
        out[0]='1';
    }*/
    
    /*for(i=1;i<9;i++){
        if(byte[0][i-1]==byte[1][i-1]=='1'){
            if((byte[0][i]==byte[1][i]=='1')){
                out[i]='1';
            }
            else if((byte[0][i]==byte[1][i]=='0')){
                out[i]='1';
            }
            else{
                out[i]='0';
            }

        }
        else{

        }
        /*if((byte[0][i]==byte[1][i]=='1')&&(byte[0][i-1]==byte[1][i-1]=='1')){
            out[i]='1';
        }
        else if((byte[0][i]==byte[1][i]=='0')&&(byte[0][i-1]==byte[1][i-1]=='1')){
            out[i]='1';
        }
        else if((byte[0][i]==byte[1][i]=='1')&&(byte[0][i-1]==byte[1][i-1]=='0')){
            out[i]='0';
        }
        else if((byte[0][i]==byte[1][i]=='0')&&(byte[0][i-1]==byte[1][i-1]=='0')){
            out[i]='0';
        }
        else if((byte[0][i]=='1'&&byte[1][i]=='0')&&(byte[0][i-1]==byte[1][i-1]=='1'))*/
    
    



   

	////////////////////////////////////////
    //만약에 이상한거 들어오면  
    //printf("Input Error");




	////////////////////////////////////////

	//printf("%s\n", out);*/

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2char_T2_D1i_D1i_B+_D2
L2int_T2_D2_D1s_D1i_D1i_E_F3_
1i_D1i_A_D1i_A_D1i_B<_D1i_D1i
B-_D1i_D1i_B-_B==_D1c_B==_D1c
A_C_L1_C_FOR_D1i_D1i_D1i_D1i_
==_D1c_B==_D1i_D1c_A_C_D1i_D1
_D1i_D1i_B==_D1c_B==_D1i_D1c_
_C_D1i_D1c_A_C_L1_L1_D1i_A_D1
_B<_D1i_D1i_B==_D1c_B==_B==_D
c_A_C_D1i_D1i_B==_D1c_B==_B!=
D1i_D1c_B==_B==_D1i_B!=_B||_D
i_D1c_B==_B==_D1i_B!=_B||_D1c
A_C_D1i_D1i_B!=_D1c_B==_B!=_D
i_D1c_B!=_B==_D1i_B!=_B||_D1i
D1c_B==_B!=_D1i_B!=_B||_D1c_A
C_D1c_A_C_L1_L1_L1_C_FOR_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
