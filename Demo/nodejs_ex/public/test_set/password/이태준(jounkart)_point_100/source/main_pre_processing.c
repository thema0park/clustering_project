//이태준(jounkart)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100


int main()
{
	int n;
	char text[TEXT_MAX];
    int i,len;
    int f1=1, f2=1,temp;

	scanf("%d", &n);

   
	scanf("%s", text);
    if(n==1)
    {
        f1=1;
    }
    else
    {
         for(i=2; i<=n;i++)
        {
          temp=f2;
          f2=f1+f2;
          f1=temp;
         }
    }
   

    len=strlen(text);
    for(i=0;i<=len;i++)
    { 
        if('A'<=text[i] && text[i]<='Z')    
        {
              text[i]+=f1%26;
              if(text[i]>'Z')
                  text[i]-=26;
              
               
        }
        if('a'<=text[i]&& text[i]<='z')
        {
            text[i]+=f1%26;
            if(text[i]>'z')
               text[i]-=26;
            
        }

       
    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D2_L2in
_T2_D2_L2int_T2_D1i_D2_L2int_
2_D1i_D2_L2int_T2_D2_D1s_E_F3
D1s_E_F3_D1i_B==_D1i_A_C_D1i_
_B<=_A_B+_A_A_C_FOR_C_L1_E_F3
A_D1i_A_B<=_D1c_B<=_D1c_B<=_B
&_D1i_B%_A_D1c_B>_D1i_A_L1_C_
1_D1c_B<=_D1c_B<=_B&&_D1i_B%_
_D1c_B>_D1i_A_L1_C_L1_C_FOR_D
s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
