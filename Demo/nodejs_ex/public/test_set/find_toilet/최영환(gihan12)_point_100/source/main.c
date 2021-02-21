#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char gender;
	int f, l;
	int out;
    int temp1,temp2,temp3,temp4;
    int c1,c2,c3,c4;
	scanf("%c %d %d", &gender, &f, &l); //남녀 /  f 와 l> 
	////////////////////////////////////////
    if(gender == 'M'){
        temp1 = (2 - f);
        if(temp1 < 0) temp1 = -(temp1);
        c1 = (0 - l);
        if(c1 < 0) c1 = -(c1);
        temp1 = c1 + temp1;

        temp2 = (4 - f);
        if(temp2 < 0) temp2 = -(temp2);
        c2 = (0 - l);
        if(c2 < 0) c2 = -(c2);
        temp2 = c2 + temp2;

        temp3 = (1 - f);
        if(temp3 < 0) temp3 = -(temp3);
        c3 = (6 - l);
        if(c3 < 0) c3 = -(c3);
        temp3 = c3 + temp3;

        temp4 = (3 - f);
        if(temp4 < 0) temp4 = -(temp4);
        c4 = (6 - l);
        if(c4 < 0) c4 = -(c4);
        temp4 = c4 + temp4;
    }
    else if(gender == 'W'){
        temp1 = (1 - f);
        if(temp1 < 0) temp1 = -(temp1);
        c1 = (0 - l);
        if(c1 < 0) c1 = -(c1);
        temp1 = c1 + temp1;

        temp2 = (3 - f);
        if(temp2 < 0) temp2 = -(temp2);
        c2 = (0 - l);
        if(c2 < 0) c2 = -(c2);
        temp2 = c2 + temp2;

        temp3 = (2 - f);
        if(temp3 < 0) temp3 = -(temp3);
        c3 = (6 - l);
        if(c3 < 0) c3 = -(c3);
        temp3 = c3 + temp3;

        temp4 = (4 - f);
        if(temp4 < 0) temp4 = -(temp4);
        c4 = (6 - l);
        if(c4 < 0) c4 = -(c4);
        temp4 = c4 + temp4;
    }
    if(temp1 <= temp2){
        if(temp1 <= temp3){
            if(temp1 <= temp4){
                out = temp1;
            }
            else{
                out = temp4;
            }
        }
        else if(temp3 <= temp4){
            out = temp3;
        }
        else{
            out = temp4;
        }
    }
    else if(temp2 <= temp3){
        if(temp2 <= temp4){
            out = temp2;
        }
        else{
            out = temp4;
        }
    }
    else if (temp3 <= temp4){
        out = temp3;
    }
    else{
        out = temp4;
    }
    ////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}