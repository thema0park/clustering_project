//최정민(jmchoi1225)_point_80
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int a, int b);

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int a,b;
    int flag;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	///////////////////////////////////////
    a = 0;
    b = (piece_num/2)+1;
    if (gcd(input_data[0],input_data[piece_num/2])==1){//remove pizza from <=pizza_num/2
        flag = 1;
    }else{//remove pizza from >pizza_num/2
        a=1;
        flag = 2;
    }

    if(gcd(input_data[0],input_data[piece_num/2])!=1 && gcd(input_data[0],input_data[piece_num/2+1])!=1){
        if (gcd(input_data[1],input_data[piece_num/2+1])==1){//remove pizza from <=pizza_num/2
            a=2;
            b = (piece_num/2)+2;
            flag = 1;
        }else{//remove pizza from >pizza_num/2
            a=2;
            b = (piece_num/2)+2;
            flag = 2;
    }
    }

    while(1){
        if(gcd(input_data[a], input_data[b])==1){
            if(flag ==1){
                output = input_data[a];
            }
            if(flag ==2){
                output = input_data[b];
            }
            break;
        }
        a+=1;
        b+=1;
    }


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}

int gcd(int a, int b){
    if (b==0) return a;
    return gcd(b,a%b);
}
/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_F2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_D1s_E
F3_D1i_A_B<_D1s_E_F3_FOR_D1i_
_D1i_B/_D1i_B+_A_D1i_D1i_B/_E
F3_D1i_B==_D1i_A_C_D1i_A_D1i_
_C_L1_D1i_D1i_B/_E_F3_D1i_B!=
D1i_D1i_B/_D1i_B+_E_F3_D1i_B!
_B&&_D1i_D1i_B/_D1i_B+_E_F3_D
i_B==_D1i_A_D1i_B/_D1i_B+_A_D
i_A_C_D1i_A_D1i_B/_D1i_B+_A_D
i_A_C_L1_C_L1_D1i_E_F3_D1i_B=
_D1i_B==_A_C_L1_D1i_B==_A_C_L
_C_L1_D1i_A_D1i_A_C_W_D1s_E_F
_D1i_R_C_F1_L2int_T2_D2_L2int
T2_D2_P2_L2int_T2_F2_D2_D1i_B
=_R_L1_B%_E_F3_R_C_F1_1_
###############################*/
//$//
