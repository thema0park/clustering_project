#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
	scanf("%s", input);

	////////////////////////////////////////
    input[50]='\0';
    int ch=0;
    char cnow;
    char cnew;
    int i=0;
    int cnt=1;
    int tempforcnt=1;
    int jarinum=0;
    int tempjarinum=0;
    int outi=0;
    for(i=0;input[i]!='\0';i++){
        cnow=input[i];
        cnew=input[i+1];
        if(cnow<65||90<cnow){
            ch=1;
            
            break;
        }
        // printf("%c %c\n",cnow,cnew);
        if(cnow!=cnew){
            // printf("Q\n");
            // printf("%d\n",cnt);
            for(jarinum=0,tempforcnt=1;;tempforcnt=tempforcnt*10,jarinum++){
                // printf("%d\n",cnt/tempforcnt);
                if(cnt/tempforcnt==0){
                    break;
                }
            }
            // printf("%d\n",jarinum);
            if(cnt!=1 && cnt!=2){
                int tempcnt=cnt;
                for(tempjarinum=0;tempjarinum<jarinum;tempjarinum++){
                    output[outi]=tempcnt/(int)pow(10,(jarinum-1-tempjarinum))+48;
                    if(output[outi]>57){
                        output[outi]=output[outi]-10;
                    }
                    tempcnt=tempcnt%(int)pow(10,(jarinum-1-tempjarinum));
                    outi++;
                }
            }
            else if(cnt==2){
                output[outi]=cnow;
                outi++;
            }
            output[outi]=cnow;
            outi++;
            // cnow=cnew;
            cnt=0;
        }
        cnt++;
    }
    len=i;
    encoded_len=outi;

	////////////////////////////////////////
    
    if(ch==1){
        printf("Input Error\n");
    }
    else if(i>50){
        printf("Input Error\n");
    }
    else{
	    printf("%s\n", input);
	    printf("%s\n", output);

	    printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    }
    return 0;
}
