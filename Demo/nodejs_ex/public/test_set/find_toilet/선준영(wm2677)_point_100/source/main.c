#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;
    char arr[6][7];
    arr[1][0]='W';arr[1][6]='M';
    arr[2][0]='M';arr[2][6]='W';
    arr[3][0]='W';arr[3][6]='M';
    arr[4][0]='M';arr[4][6]='W';
    arr[5][0]='X';arr[5][6]='X';

    int i,j;
    int small1,small2;
    int small=50;int smal=50;
    int temp,answer;
	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M'){
        for(i=1;i<6;i++){
            if(arr[i][0]=='M'){
                small1= (((i)>(f))?(i-f):(f-i));
                small2= l;
                temp=small1+small2;
                if(small>temp)
                    small=temp;
                else
                    continue;
            }
        }
        for(i=1;i<6;i++){
            if(arr[i][6]=='M'){
                small1= (((i)>(f))?(i-f):(f-i));
                small2= 6-l;
                temp=small1+small2;
                if(smal>temp)
                    smal=temp;
                else
                    continue;
            }
        }
        if(small>smal)
            answer=smal;
        else
            answer=small;
    }
    else{
        small=50;smal=50;
        for(i=1;i<6;i++){
            if(arr[i][0]=='W'){
                small1= (((i)>(f))?(i-f):(f-i));
                small2= l;
                temp=small1+small2;
                if(small>temp)
                    small=temp;
                else
                    continue;
            }
        }
        for(i=1;i<6;i++){
            if(arr[i][6]=='W'){
                small1= (((i)>(f))?(i-f):(f-i));
                small2= 6-l;
                temp=small1+small2;
                if(smal>temp)
                    smal=temp;
                else
                    continue;
            }
        }
        if(small>smal)
            answer=smal;
        else
            answer=small;
    }


	////////////////////////////////////////


	
	////////////////////////////////////////

	printf("%d\n", answer);
	return 0;
}