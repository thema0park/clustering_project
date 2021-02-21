#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAN 10
#define WOMAN 20

#define LEFT 100
#define RIGHT 200

int arr[7][7]={
    {0,0,0,0,0,0,0},
    {WOMAN,0,0,0,0,0,MAN},
    {MAN,0,0,0,0,0,WOMAN},
    {WOMAN,0,0,0,0,0,MAN},
    {MAN,0,0,0,0,0,WOMAN},
    {0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0}
};

//찾으면 횟수, 못찾으면 -1
int checkFloor(int height, int sex, int nowPos, int leftOrRight){
    int count = 0;
    int i;
    
    if(leftOrRight == LEFT){
        for(i=nowPos;i>0;--i){
            ++count;
        }
        if(sex == arr[height][0]){
            return count;
        }
        else{
            return -20;
        }
    }
    else{
        for(i=nowPos;i<6;++i){
            ++count;
        }
        if(sex == arr[height][6]){
            return count;
        }
        else{
            return -20;
        }

    }

    return -20;
}

int min(int a,int b){
    if(a <= -1){return b;}
    if(b <= -1){return a;}
    if(a>b){
        return b;
    }
    return a;
}

int main()
{
	char gender;
	int f, l;
	int answer;
    int t1,t2;

    int BATH;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender == 'M'){BATH = MAN;}
    else{BATH = WOMAN;}
//int checkFloor(int height, int sex, int nowPos, int leftOrRight){
    t1 = checkFloor(f,BATH,l,LEFT);
    t2 = checkFloor(f,BATH,l,RIGHT);

    answer = min(t1,t2);

    if(f == 5){
        answer = min(answer, checkFloor(f-2,BATH,l,LEFT)+2);
        answer = min(answer, checkFloor(f-2,BATH,l,RIGHT)+2);
    }

    answer = min(answer, checkFloor(f-1,BATH,l,LEFT)+1);
    answer = min(answer, checkFloor(f-1,BATH,l,RIGHT)+1);
    answer = min(answer, checkFloor(f+1,BATH,l,LEFT)+1);
    answer = min(answer, checkFloor(f+1,BATH,l,RIGHT)+1);



	////////////////////////////////////////

	printf("%d\n", answer);
	return 0;
}