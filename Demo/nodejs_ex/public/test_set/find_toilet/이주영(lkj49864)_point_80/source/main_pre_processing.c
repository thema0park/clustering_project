//이주영(lkj49864)_point_80
#define _CRT_SECURE_NO_WARNINGS
 #define Man 9
#define Woman 8

int main()
{
 char C;
 int x, y;
 int ans1=0, ans2=0;
 int i, j;
 scanf("%c %d %d", &C, &y, &x);
 if(C=='M'){
     if(y==5){
         ans1 +=1;
         ans1 +=x;
         ans2 +=10;
     }
     else if(y%2==1){
         ans1 += (6-x);
         ans2 +=1;
         ans2 +=x;
     }
     else if(y%2==0){
         ans1 +=x;
         ans2 +=1;
         ans2 +=(6-x);
     }
 }
 else if(C=='W'){
     if(y==5){
         ans1 +=1;
         ans1 +=(6-x);
         ans2 +=10;
     }
     else if(y%2==1){
         ans1 += (6-x);
         ans1 +=1;
         ans2 +=x;
     }
     else if(y%2==0){
         ans1 +=x;
         ans1 +=1;
         ans2 +=(6-x);
     }
 }
  if(ans1>=ans2){
     printf("%d\n", ans2);
 }
 else printf("%d\n", ans1);
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D1i_D2_L2int_T2_D1i_D2_L2int_
2_D2_L2int_T2_D2_D1s_E_F3_D1c
B==_D1i_B==_D1i_A_A_D1i_A_C_D
i_B%_D1i_B==_D1i_B-_A_D1i_A_A
C_D1i_B%_D1i_B==_A_D1i_A_D1i_
-_A_C_L1_L1_L1_C_D1c_B==_D1i_
==_D1i_A_D1i_B-_A_D1i_A_C_D1i
B%_D1i_B==_D1i_B-_A_D1i_A_A_C
D1i_B%_D1i_B==_A_D1i_A_D1i_B-
A_C_L1_L1_L1_C_L1_L1_B>=_D1s_
_F3_C_D1s_E_F3_L1_C_F1_1_
###############################*/
//$//
