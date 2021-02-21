//박민석(apark0907)_point_100
#define _CRT_SECURE_NO_WARNINGS
#define PIECE_NUM_MAX 50
 	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int an;
int gcd(int a,int b){
    if(b==0||a==b){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
void d(int n,int a[1000]){
    an=a[n];
    int i;
    for(i=n;i<piece_num-1;i++){
        a[i]=a[i+1];
    }
   /* int p;
     for(p=0;p<piece_num;p++){
        printf("%d",a[p]);
    }
    printf("\n");*/
}
int main()
{

	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    int m,k,flag=0;
    int a[1000]={0};
    for(m = 0; m < piece_num; m++){
        for (i = 0; i < piece_num; i++){
		a[i]=input_data[i];
        }
        d(m,a);
        flag=0;
        int t;
        for(t=0;t<(piece_num-1)/2;t++){
            if(gcd(a[t],a[t+(piece_num-1)/2])==1){
                flag=1;
            }
        }
    
        if(flag==0){
            output=an;
            break;
        }
    }
    


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D1i_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2int_T2_D2_L2int_T2_D2_P2
L2int_T2_F2_D2_D1i_B==_B==_B|
_R_C_B%_E_F3_R_C_L1_C_F1_L2in
_T2_D2_L2int_T2_D1i_D2_P2_L2v
id_T2_F2_D2_A_L2int_T2_D2_A_D
i_B-_B<_D1i_B+_A_C_FOR_C_F1_L
int_T2_F2_D2_D1s_E_F3_D1i_A_B
_D1s_E_F3_FOR_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D1i_D2_D1i_A_B<_D1i_A_
<_A_C_FOR_E_F3_D1i_A_L2int_T2
D2_D1i_A_D1i_B-_D1i_B/_B<_D1i
B-_D1i_B/_B+_E_F3_D1i_B==_D1i
A_C_L1_C_FOR_D1i_B==_A_C_L1_C
FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
