#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50
int gcd(int a, int b){
    int c = b;
    int k = 1;
    while(c){
        if(!(a%c) && !(b%c)){
            a /= c;
            b /= c;
            k *= c;
        }
        c--;
    }
    return k;
}

int main()
{
	int piece_num;
	int a[PIECE_NUM_MAX];
    int b[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &a[i]);

	////////////////////////////////////////
    int k;
    for(k = 0; k<piece_num; k++){
        int l, cnt = 0;
        for(l = 0; l<piece_num; l++){
            if(l!=k) b[cnt++] = a[l];
        }

        int cnt2 = 0;
        int j;
        for(j = 0; j<cnt/2; j++){
            int max, min;
            if(b[j] > b[j+cnt/2]){
                max = b[j];
                min = b[j+cnt/2];
            }
            else{
                max = b[j+cnt/2];
                min = b[j];
            }
            if(gcd(max, min) != 1){
                cnt2++;
            }
        }
        if(cnt2 == (cnt/2)){
            printf("%d\n", a[k]);
            return 0;
        }
    }
}