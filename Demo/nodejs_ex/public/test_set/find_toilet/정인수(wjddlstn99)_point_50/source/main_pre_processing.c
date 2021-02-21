//정인수(wjddlstn99)_point_50
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;
    int n,m,w;
    int i,j;
    int bath[4][6] = {
        {n,0,0,0,0,0,n},
        {m,0,0,0,0,0,w},
        {w,0,0,0,0,0,m},
        {m,0,0,0,0,0,w},
        {w,0,0,0,0,0,m}
    };
	scanf("%c %d %d", &gender, &f, &l);
    
    if(l==0){
        if(f==5){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
        else if(f==4){
            if(gender=='m'){
                out = 0;
            }
            else out  = 1;
        }
        else if(f==3){
            if(gender=='m'){
                out = 1;
            }
            else out  = 0;
        }
        else if(f==2){
            if(gender=='m'){
                out = 0;
            }
            else out  = 1;
        }
        else if(f==1){
            if(gender=='m'){
                out = 1;
            }
            else out  = 0;
        }
        
    }
    else if(l==1){
         if(f==5){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
        else if(f==4){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
        else if(f==3){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
        else if(f==2){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
        else if(f==1){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
    }
    else if(l==2){
         if(f==5){
            if(gender=='m'){
                out = 3;
            }
            else out  = 4;
        }
        else if(f==4){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
        else if(f==3){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
        else if(f==2){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
        else if(f==1){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
    }
    else if(l==3){
        if(f==5){
            out = 4;
        }
        else {
            out = 3;
        }
    }
    else if(l==4){
         if(f==5){
            if(gender=='m'){
                out = 4;
            }
            else out  = 3;
        }
        else if(f==4){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
        else if(f==3){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
        else if(f==2){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
        else if(f==1){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
    }
    else if(l==5){
         if(f==5){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
        else if(f==4){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
        else if(f==3){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
        else if(f==2){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
        else if(f==1){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
    }
    else if(l==6){
         if(f==5){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
        else if(f==4){
            if(gender=='m'){
                out = 1;
            }
            else out  = 0;
        }
        else if(f==3){
            if(gender=='m'){
                out = 0;
            }
            else out  = 1;
        }
        else if(f==2){
            if(gender=='m'){
                out = 1;
            }
            else out  = 0;
        }
        else if(f==1){
            if(gender=='m'){
                out = 0;
            }
            else out  = 1;
        }
    }


	printf("%d\n", out);
	return 0;
}











     /*   if(l=3){
        if(f=5){
            out = 4;
        }
        out = 3;
    }
        else if(l=0){
            if(f=1 && gender = w){
                out = 0;
            }
            else out = 1;
            if(f=2 && gender = m){
                out = 0;
            }
            else out = 1;
            if(f=3 && gender = w){
                out = 0;
            }
            else out = 1;
            if(f=4 && gender = m){
                out = 0;
            }
            else out = 1;
            if(f=5 && gender = m){
                out = 1;
            }
            else out = 2;

        }

        else if(l=1){
            if(f = 5){
            if(gender = m){
                out = 2;
            }
            else{
                out = 3;
            }
        }
        else if(f=4){
            if(gender = m)
            {
                out = 1;
            }
            else{
                out = 2;
            }
        }
        else if(f=3){
            if(gender = m)
            {
                out = 2;
            }
            else{
                out = 1;
            }
        }
        else if(f=2){
            if(gender = m)
            {
                out = 1;
            }
            else{
                out = 2;
            }
        }
        else if(f=1){
            if(gender = m)
            {
                out = 2;
            }
            else{
                out = 1;
            }
        }
    }
    else if(l=2)*/


	
	////////////////////////////////////////

/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2int_T2_D2_L2int_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2int_T2_D1i_D1i_D1i_D1i_D
i_D1i_D1i_D1i_D1i_D1i_D1i_D1i
D1i_D1i_D1i_D1i_D1i_D1i_D1i_D
i_D1i_D1i_D1i_D1i_D1i_D1i_D1i
D2_D1s_E_F3_D1i_B==_D1i_B==_D
c_B==_D1i_A_C_D1i_A_L1_C_D1i_
==_D1c_B==_D1i_A_C_D1i_A_L1_C
D1i_B==_D1c_B==_D1i_A_C_D1i_A
L1_C_D1i_B==_D1c_B==_D1i_A_C_
1i_A_L1_C_D1i_B==_D1c_B==_D1i
A_C_D1i_A_L1_C_L1_L1_L1_L1_L1
C_D1i_B==_D1i_B==_D1c_B==_D1i
A_C_D1i_A_L1_C_D1i_B==_D1c_B=
_D1i_A_C_D1i_A_L1_C_D1i_B==_D
c_B==_D1i_A_C_D1i_A_L1_C_D1i_
==_D1c_B==_D1i_A_C_D1i_A_L1_C
D1i_B==_D1c_B==_D1i_A_C_D1i_A
L1_C_L1_L1_L1_L1_L1_C_D1i_B==
D1i_B==_D1c_B==_D1i_A_C_D1i_A
L1_C_D1i_B==_D1c_B==_D1i_A_C_
1i_A_L1_C_D1i_B==_D1c_B==_D1i
A_C_D1i_A_L1_C_D1i_B==_D1c_B=
_D1i_A_C_D1i_A_L1_C_D1i_B==_D
c_B==_D1i_A_C_D1i_A_L1_C_L1_L
_L1_L1_L1_C_D1i_B==_D1i_B==_D
i_A_C_D1i_A_C_L1_C_D1i_B==_D1
_B==_D1c_B==_D1i_A_C_D1i_A_L1
C_D1i_B==_D1c_B==_D1i_A_C_D1i
A_L1_C_D1i_B==_D1c_B==_D1i_A_
_D1i_A_L1_C_D1i_B==_D1c_B==_D
i_A_C_D1i_A_L1_C_D1i_B==_D1c_
==_D1i_A_C_D1i_A_L1_C_L1_L1_L
_L1_L1_C_D1i_B==_D1i_B==_D1c_
==_D1i_A_C_D1i_A_L1_C_D1i_B==
D1c_B==_D1i_A_C_D1i_A_L1_C_D1
_B==_D1c_B==_D1i_A_C_D1i_A_L1
C_D1i_B==_D1c_B==_D1i_A_C_D1i
A_L1_C_D1i_B==_D1c_B==_D1i_A_
_D1i_A_L1_C_L1_L1_L1_L1_L1_C_
1i_B==_D1i_B==_D1c_B==_D1i_A_
_D1i_A_L1_C_D1i_B==_D1c_B==_D
i_A_C_D1i_A_L1_C_D1i_B==_D1c_
==_D1i_A_C_D1i_A_L1_C_D1i_B==
D1c_B==_D1i_A_C_D1i_A_L1_C_D1
_B==_D1c_B==_D1i_A_C_D1i_A_L1
C_L1_L1_L1_L1_L1_C_L1_L1_L1_L
_L1_L1_L1_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
