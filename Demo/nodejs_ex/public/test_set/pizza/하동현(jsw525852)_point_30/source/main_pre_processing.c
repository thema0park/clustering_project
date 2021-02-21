//하동현(jsw525852)_point_30
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50
int gcd(int a,int b){
    int big,small;
    int i=0;
    int tmp=0;
    big = a;
    small =b;
    if(b>a) {big = b; small =a;}
    for(i=1;i<small;i++){
    if(big%i==0) tmp = i; 
    }
    return tmp;

}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);
int half;
	for (i = 0; i < piece_num; i++){
		scanf("%d", &input_data[i]);
      //  printf("%d",input_data[i]);
    }
    half = piece_num/2;
  //  printf("%d\n",half);
  //      printf("input %d\n",input_data[i]);
        printf("%d\n",input_data[half+1]);
        
        //if(input_data[i] == 0) printf("11\n");
          //      if(input_data[i] == 32524) printf("3\n");
	////////////////////////////////////////



	////////////////////////////////////////

	//printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_L2int_
2_D2_L2int_T2_D1i_D2_L2int_T2
D1i_D2_A_A_B>_A_A_C_L1_D1i_A_
<_B%_D1i_B==_A_L1_C_FOR_R_C_F
_L2int_T2_F2_D2_L2int_T2_D2_L
int_T2_D1i_D2_L2int_T2_D2_L2i
t_T2_D2_D1s_E_F3_L2int_T2_D2_
1i_A_B<_D1s_E_F3_C_FOR_D1i_B/
A_D1s_D1i_B+_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
