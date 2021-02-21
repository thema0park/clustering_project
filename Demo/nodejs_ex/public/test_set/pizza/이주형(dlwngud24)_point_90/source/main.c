#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    
    if(gender == 'M'){ // 남자
            if(f%2==0){ // 짝수층
                if(l<=3){
                    out =l;
                }else{
                    out = 7-l;
                }
            }else if(f==5){ // 5층
                if(l<=3){
                    out =l+1;
                }else{
                    out = 8-l;
                }
            }else{ // 1층 3층
                if(l<=3){
                    out =l+1;
                }else{
                    out =6-l;
                }
            }
    }else{ // 여자
            if(f%2==0){ // 짝수층
                if(l>=3){
                    out =6-l;
                }else{
                    out = l+1;
                }
            }else if(f==5){ // 5층
                if(l>=3){
                    out =7-l;
                }else{
                    out = l+2;
                }
            }else{ // 1층 3층
                if(l>=3){
                    out =7-l;
                }else{
                    out =l;
                }
            }
        }
        
        ////////////////////////////////////////

	printf("%d\n", out);
	return 0;
   
    }
    

