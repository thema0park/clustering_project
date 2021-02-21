//선준영(wm2677)_point_50
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50


int yaksu(int a,int b){
    if(b==0){
        return a;
    }
    if(b==1 || a==b){
        return 1;
    }
    if(a>b){
       return yaksu(b, a%b);
    }
    else{
       return yaksu(b,a);
    }
}


int main()
{
    int count;
    int i,j;
    int arr[50];
    int warn[50];
    scanf("%d",&count);
    for(i=0;i<count;i++){
        scanf("%d",&arr[i]);
        warn[i]=0;
    }
   
    
        for(i=0;i<count;i++){
            for(j=0;j<count;j++){
             
                if(yaksu(arr[i],arr[j])==1 && i!=j){
                    warn[i]++;warn[j]++;
                }
                else{
                    continue;
                }
            }
        }
    
    
    int warn1=0;
    int big;
    for(i=0;i<count;i++){
        if(warn[i]>warn1){
            warn1=warn[i];
            big=i;
        }
    }
    printf("%d\n",arr[big]);
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_D1i_B==_R_C_L1_D1i
B==_B==_B||_D1i_R_C_L1_B>_B%_
_F3_R_C_E_F3_R_C_L1_C_F1_L2in
_T2_F2_D2_L2int_T2_D2_L2int_T
_D2_L2int_T2_D2_L2int_T2_D1i_
2_L2int_T2_D1i_D2_D1s_E_F3_D1
_A_B<_D1s_E_F3_D1i_A_C_FOR_D1
_A_B<_D1i_A_B<_E_F3_D1i_B==_B
=_B&&_C_C_L1_C_FOR_C_FOR_L2in
_T2_D1i_D2_L2int_T2_D2_D1i_A_
<_B>_A_A_C_L1_C_FOR_D1s_E_F3_
_F1_1_
###############################*/
//$//
