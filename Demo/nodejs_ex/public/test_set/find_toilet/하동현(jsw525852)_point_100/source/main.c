#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender == 'W') {
            if((f == 1 || f == 3) && (l<=3)) printf("%d\n",l);
            if((f == 1 || f == 3) && (l==4)) printf("3\n");
         if((f == 1 || f == 3) && (l==5)) printf("2\n");
         if((f == 1 || f == 3) && (l==6)) printf("1\n");

      if((f == 2 || f == 4) && (l==0)) printf("1\n");
     if((f == 2 || f == 4) && (l==1)) printf("2\n");
    if((f == 2 || f == 4) && (l==2)) printf("3\n"); 
        if((f == 2 || f == 4) && (l==3)) printf("3\n");  
        if((f == 2 || f == 4) && (l==4)) printf("2\n");   
       if((f == 2 || f == 4) && (l==5)) printf("1\n");   

       if(f == 5 && l == 0 )printf("2\n");
        if(f == 5 && l == 1 )printf("3\n"); 
       if(f == 5 && l == 2 )printf("4\n");            
          if(f == 5 && l == 3 )printf("4\n");
           if(f == 5 && l == 4 )printf("3\n"); 
           if(f == 5 && l == 5 )printf("2\n");
              if(f == 5 && l == 6 )printf("1\n");      
                                      
    }
    else {
                    if((f == 2 || f == 4) && (l<=3)) printf("%d\n",l);
            if((f == 2 || f == 4) && (l==4)) printf("3\n");
         if((f == 2 || f == 4) && (l==5)) printf("2\n");
         if((f == 2 || f == 4) && (l==6)) printf("1\n");

      if((f == 1 || f == 3) && (l==0)) printf("1\n");
     if((f == 1 || f == 3) && (l==1)) printf("2\n");
    if((f == 1 || f == 3) && (l==2)) printf("3\n"); 
        if((f == 1 || f == 3) && (l==3)) printf("3\n");  
        if((f == 1 || f == 3) && (l==4)) printf("2\n");   
       if((f == 1 || f == 3) && (l==5)) printf("1\n");   

       if(f == 5 && l == 6 )printf("2\n");
        if(f == 5 && l == 5 )printf("3\n"); 
       if(f == 5 && l == 4 )printf("4\n");            
          if(f == 5 && l == 3 )printf("4\n");
           if(f == 5 && l == 2 )printf("3\n"); 
           if(f == 5 && l == 1 )printf("2\n");
              if(f == 5 && l == 0 )printf("1\n");   

    }
	////////////////////////////////////////

//	printf("%d\n", out);
	return 0;
}