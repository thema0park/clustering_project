#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M'){
        if(f%2==0){
            if(l<3){
                out=l;
            }
            if(l==3){
                out =3;
            }
            if(l==4){
                out =3;
            }
            if(l==5){
                out=2;
            }

        }
        else {
            if(f==5){
                if(l==1) out=2;
                if(l==2) out=3;
                if(l==3) out=4;
                if(l==4) out=4;
                if(l==5) out=3;

            }
            if(l>3){
                out=6-l;

            }
            if(l==3){
                out=l;
            }
            if(l==2){
                out=3;

            }
            if(l==1){

                out=2;
            }


        }

    }
    else{
        if(f%2==0){
            if(l>=3) out=6-l;
            if(l==2) out=3;
            if(l==1) out=2;
        }
        else{
            if(f==5){
                if(l==1) out=3;
                if(l==2) out=4;
                if(l==3) out=4;
                if(l==4) out=3;
                if(l==5) out=2;

            }
            if(l<=3)   out=l;
            if(l==4)   out=3;
            if(l==5)   out=2;


        }
    


    }

    

	////////////////////////////////////////


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}