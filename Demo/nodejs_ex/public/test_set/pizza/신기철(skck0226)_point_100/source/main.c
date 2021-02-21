#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50
int gcd(int a, int b){
    int i;
    if(a>b){
        for(i=b;i>1;i--){
            if(a%i==0&&b%i==0) return 1;
        }
        return 0;
    }
    else{
        for(i=a;i>1;i--){
            if(a%i==0&&b%i==0) return 1;
        }
        return 0;
    }
}
int main()
{
	int piece_num;
	int input[PIECE_NUM_MAX],put[50];
	int i,j;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input[i]);
    int k=piece_num/2;
	////////////////////////////////////////
    for(i=0;i<piece_num;i++){
        int p=1;
        for(j=0;j<piece_num;j++){
            put[j]=input[j];
        }
        put[i]=0;
        for(j=i;j<piece_num-1;j++){
            put[j]=put[j+1];
        }
        for(j=0;j<k;j++){
            if(gcd(put[j],put[j+k])== 0){
                p=0;
                break;
            }
        }
        
        if(p==1){
            printf("%d\n",input[i]);
            break;
        }
    }

	////////////////////////////////////////


	return 0;
}