//허준형(gjwnsgud3)_point_0
#define _CRT_SECURE_NO_WARNINGS

 int GCD(int* arr ,int left, int right);
#define PIECE_NUM_MAX 50

int main()
{   
    int sum = 0;
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);
    int left = 0;
    int right = piece_num;
       int mid = (0 + piece_num)/2;
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0; i<mid; i+=1){
    printf("%d",GCD(input_data, left+i, right-i));
    }
    
    //mid = (left+right)/2;
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}

int GCD(int* arr, int left, int right){
    int temp = 0;
    if(left<right){
    temp = right;
    left = right;
    right = temp;
}
if(arr[right] % arr[left] ==0) return left;
else{

    GCD(arr, right, left%right);

}

}/*########code signature#########
2int_T2_P1_D2_L2int_T2_D2_L2i
t_T2_D2_P2_L2int_T2_F2_D2_L2i
t_T2_F2_D2_L2int_T2_D1i_D2_L2
nt_T2_D2_L2int_T2_D1i_D2_L2in
_T2_D2_L2int_T2_D2_D1s_E_F3_L
int_T2_D1i_D2_L2int_T2_D2_L2i
t_T2_D1i_B+_D1i_B/_D2_D1i_A_B
_D1s_E_F3_FOR_D1i_A_B<_D1i_A_
1s_B+_B-_E_F3_E_F3_C_FOR_D1s_
_F3_D1i_R_C_F1_L2int_T2_P1_D2
L2int_T2_D2_L2int_T2_D2_P2_L2
nt_T2_F2_D2_L2int_T2_D1i_D2_B
_A_A_A_C_L1_B%_D1i_B==_R_B%_E
F3_C_L1_C_F1_1_
###############################*/
//$//
