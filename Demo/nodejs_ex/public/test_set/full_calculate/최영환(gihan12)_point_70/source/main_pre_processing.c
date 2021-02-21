//최영환(gihan12)_point_70
#define _CRT_SECURE_NO_WARNINGS
 int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h); //입력: 후문 언덕의 밑변 B 와 높이 H (1~100)

	////////////////////////////////////////
    out = (3.14)*(0.5)*(b/2)*(b/2)*h;
    out = out / 3 ; 

	////////////////////////////////////////
    if(out <= 1) out = 1;
    printf("%d\n", out);

	return 0;
}

//팔달관 후문 4층 > 2층후문근처에서 4층을 올려다보면 예전 추립구 >> 팔달관 뒷면의 언덕 밑며이 반 입구
//계산할것 B/2 * H * 3.14 * 1/3
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_D1s_E_F3_
1d_D1d_B*_D1i_B/_B*_D1i_B/_B*
B*_A_D1i_B/_A_D1i_B<=_D1i_A_L
_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
