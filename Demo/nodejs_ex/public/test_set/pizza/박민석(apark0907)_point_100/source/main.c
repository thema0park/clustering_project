#define _CRT_SECURE_NO_WARNINGS
#define PIECE_NUM_MAX 50
#include<stdio.h>
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int an;
int gcd(int a,int b){
    if(b==0||a==b){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
void d(int n,int a[1000]){
    an=a[n];
    int i;
    for(i=n;i<piece_num-1;i++){
        a[i]=a[i+1];
    }
   /* int p;
     for(p=0;p<piece_num;p++){
        printf("%d",a[p]);
    }
    printf("\n");*/
}
int main()
{

	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    int m,k,flag=0;
    int a[1000]={0};
    for(m = 0; m < piece_num; m++){
        for (i = 0; i < piece_num; i++){
		a[i]=input_data[i];
        }
        d(m,a);
        flag=0;
        int t;
        for(t=0;t<(piece_num-1)/2;t++){
            if(gcd(a[t],a[t+(piece_num-1)/2])==1){
                flag=1;
            }
        }
    
        if(flag==0){
            output=an;
            break;
        }
    }
    


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}