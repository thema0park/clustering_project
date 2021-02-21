#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	char gender;
	int f, l;
	int out;
    int m[5]={0},w[5]={0}, i=0, min=100;
	scanf("%c %d %d", &gender, &f, &l);
    
	////////////////////////////////////////
    // m 40 20 16 36
    // w 26 46 10 30
	if(gender=='M'){
        m[0]=abs(f-4)+abs(l-0);
        m[1]=abs(f-2)+abs(l-0);
        m[2]=abs(f-1)+abs(l-6);
        m[3]=abs(f-3)+abs(l-6);
        for(i=0;i<4;i++){
            if(m[i]<min) min=m[i];
        }
    }
    else{
        w[0]=abs(f-2)+abs(l-6);
        w[1]=abs(f-4)+abs(l-6);
        w[2]=abs(f-1)+abs(l-0);
        w[3]=abs(f-3)+abs(l-0);
        for(i=0;i<4;i++){
            if(w[i]<min) min=w[i];
        }
    }
	////////////////////////////////////////

	printf("%d\n", min);
	return 0;
}