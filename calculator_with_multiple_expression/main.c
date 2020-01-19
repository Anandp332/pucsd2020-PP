#include<stdio.h>
#include<stdbool.h>
#include"allfun.h"
#include"checkfun.h"
void main(){
    char a[10000];
    float result;
    float first = 0 ,second = 0 ;
    scanf("%s",a);
    bool f = true;
    char op;
    for(int i=0;;i++){
        if(a[i]=='\0'){
            result = check(first,second,op);
            break;
        }
        else{
        if(a[i] == '+' || a[i] == '-' || a[i] == '*' || a [i] == '/' || a[i] == '%'){
            if(f){
                f= false;
                op = a[i];
                continue;
            }
            else{
                printf("firs: %c\n",op);
                result = check(first,second,op);
                first = result;
                second = 0;
                op =a[i];
                printf("sec: %c\n",op);
                
            }


        }
        else{
            if(f){
                first = first*10 + (a[i]-'0');
                printf("f : %f\n",first);

            }
            else{
                second = second*10 + (a[i]-'0');
                printf("s: %f\n",second);
            }
        }
        }
    }
    printf("\n%f\n",result);
   // printf("\npp: %d",'8'-'0');
}