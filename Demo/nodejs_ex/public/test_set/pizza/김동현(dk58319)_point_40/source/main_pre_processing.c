//김동현(dk58319)_point_40
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int GCD(int a, int b){
    int tmp;
    if (a%b==0) return b;
    return GCD(b,a%b);
}

int main()
{
    
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i,j;
	int output;
    int pivot = 0;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    
    for(i=0; i<piece_num-1; i++){
        for (j = i+1; j<piece_num;j++){
          if (GCD(input_data[i],input_data[j])==1){
              output = input_data[i];
              break;
         }
        }
     }
    


	////////////////////////////////////////

	printf("%d\n", output);
   /* int a, b;
    scanf("%d %d", &a,&b);
    printf("%d", GCD(a,b));
    */
   
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_B%_D1i
B==_R_L1_B%_E_F3_R_C_F1_L2int
T2_F2_D2_L2int_T2_D2_L2int_T2
D1i_D2_L2int_T2_D2_L2int_T2_D
_L2int_T2_D2_L2int_T2_D1i_D2_
1s_E_F3_D1i_A_B<_D1s_E_F3_FOR
D1i_A_D1i_B-_B<_D1i_B+_A_B<_E
F3_D1i_B==_A_C_L1_C_FOR_C_FOR
D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
