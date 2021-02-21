//유진우(kkk950928)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 1;
    }
    

    return fibo(n-1)+fibo(n-2);
    

}
int main()
{
    int n1;
    int n;
    int i=0;
    char input[99];
  
   scanf("%d",&n1);
   scanf("%s",input);
   n=fibo(n1);


  while(input[i] != '\0')
  {
      
      
      if(input[i]+n>90)
      {
         // input[i]=input[i]+n;
         n=n%26;
         input[i]=input[i]+n;
          while(1)
          {
              
              if(input[i]<='Z' && input[i]>='A' )
              {
                  break;
              }
              input[i]-=26;
              
              
          }
        
       
      }else
      {

      input[i]=input[i]+n;
      }
      i++;
  }

  printf("%s\n",input);

  
 





	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_C_L1_D1i_B==_D1i
R_C_L1_D1i_B-_E_F3_D1i_B-_E_F
_B+_R_C_F1_L2int_T2_F2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2char_T2_D1i_D2_D1s_E_
3_D1s_E_F3_E_F3_A_D1c_B!=_B+_
1i_B>_D1i_B%_A_B+_A_D1i_D1c_B
=_D1c_B>=_B&&_C_L1_D1i_A_C_W_
_B+_A_C_L1_C_W_D1s_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
