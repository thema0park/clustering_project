//문지영(koo0524)_point_10
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int num){
if(num==1||num==2) return 1;
else return fibo(num-1)+fibo(num-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX]={'\0'};

	scanf("%d", &fibo_n);
	scanf("%s", text);

int k =0;
k=fibo(fibo_n);

int i=0;

if(k<=26) k +=0;
else {while(k>=26) {k -= 26;}}

int changeapbnum=0;
changeapbnum=92-k;

int sub=0;
sub=text[i]-changeapbnum;


for(i=0; (int)text[i]!=NULL; i++){



if(text[i]==changeapbnum){
    text[i]='A';
}
else if(text[i]>changeapbnum){
    
    text[i]=65+sub;
}
else text[i]+=k;


}





	printf("%s\n", text);
	return 0;


}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_D1i_R_D1i_
-_E_F3_D1i_B-_E_F3_B+_R_L1_C_
1_L2int_T2_F2_D2_L2int_T2_D2_
2char_T2_D1i_D1c_D2_D1s_E_F3_
1s_E_F3_L2int_T2_D1i_D2_E_F3_
_L2int_T2_D1i_D2_D1i_B<=_D1i_
_D1i_B>=_D1i_A_C_W_C_L1_L2int
T2_D1i_D2_D1i_B-_A_L2int_T2_D
i_D2_B-_A_D1i_A_L2int_T2_B!=_
==_D1c_A_C_B>_D1i_B+_A_C_A_L1
L1_C_FOR_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
