#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender== 'm'||gender== 'M'){
            if(f%2==0){
                if(l<=3){
                out=l;
                }
                else if(l>3){
                    out=6-l+1;
                }
            }
            else if(f%2!=0){
                if(f==5){
                    if(l<=3)
                    out=l+1;
                    else{
                        out=6-l+2;
                    }
                }
                else{
                    
                    if(l<3){
                        out=l+1;
                    }
                    else{
                        out=6-l;
                    }
                }
            }
                            
            }
    else{
        if(f%2!=0){
            if(f==5){
                if(l>=3){
                    out=6-l+1;
                }
                else{
                    out=l+2;
                }
            }
            else{
                if(l==3){
                    out=l;
                }
                else if(l>3){
                    out=6-l+1;
                }
                else{
                    out=l;
                }
            }
        }
        else{
            if(l>=3){
                out=6-l;
            }
            else{
                out=l+1;
            }
        }
        
           
        
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}