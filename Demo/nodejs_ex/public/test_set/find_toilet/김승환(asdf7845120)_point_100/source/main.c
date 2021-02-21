#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    int BFS[1000][3]={0};
    int MAP[6][7]={0};
    int XM[4] = {1,-1,0,0};
    int YM[4] = {0,0,1,-1};
    int S,NS,i,F;
    //  W == 1 , M == 2 
    MAP[1][0] = MAP[2][6] = MAP[3][0] = MAP[4][6] = 1;
    MAP[1][6] = MAP[2][0] = MAP[3][6] = MAP[4][0] = 2;
    S = NS = 0;
    if(gender == 'W')
        F=1;
    else
        F=2;
    BFS[NS][0] = f;
    BFS[NS][1] = l;
    BFS[NS][2] = 0;
    MAP[f][l] = 3;
    NS++;
    while(S<NS)
    {
        f= BFS[S][0];
        l= BFS[S][1];
        
        if(MAP[f][l] == F)
        {
            out = BFS[S][2];
            break;
        }
        MAP[f][l]=3;
        for(i=0;i<4;i++)
        {
            if(0<f+YM[i] && f+YM[i] <6 && 0<=l+XM[i] && l+XM[i] < 7 && MAP[f+YM[i]][l+XM[i]] != 3)
            {
                BFS[NS][0] = f+YM[i];
                BFS[NS][1] = l+XM[i];
                BFS[NS][2] = BFS[S][2]+1;
                
                NS++;
            }
        }
        S++;
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}