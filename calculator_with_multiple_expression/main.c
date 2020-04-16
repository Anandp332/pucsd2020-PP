#include<stdio.h>
#include<stdbool.h>
#include"allfun.h"
#include"checkfun.h"
#include"float_to_string.h"
//#include"float_to_string.h"
void main(){
    char a[10000];
    char fstr[100];

    char temp[10000];
    float result;
    int j=0,fstr_index;
    float first = 0 ,second = 0 ;
    scanf("%s",a);
    bool f = true;
    char op;
    for(int i=0;;i++){
        if(a[i]=='\0'){
            result = check1(first,second,op);
            break;
        }
        if(a[i] == '+'|| a[i] == "-"){
            fstr_index = 0;
            if(!f){
                printf("firs: %c\n",op);
                result = check1(first,second,op);
                first = result;
                second = 0;
                op =a[i];
                printf("sec: %c\n",op);
                
            
            }
            f = true;
            for (int k=0;fstr[k]!='\0';k++,j++){
                temp[j] = fstr[k];
            }
            for(int k=0;k<100;k++){
                fstr[k] = '\0';
            }
            temp[j] = a[i]; 

        }
        else if(a[i] == '*' || a[i] == '%' || a[i] == '/'){
            if(f){
                f= false;
                op = a[i];
                continue;
            }
            else{
                printf("firs: %c\n",op);
                result = check1(first,second,op);
                ftoa(result , temp , 20,j);
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
                fstr[fstr_index] = a[i];
                fstr_index++;

            }
            else{
                second = second*10 + (a[i]-'0');
                printf("s: %f\n",second);
            }
        }
    }
    for(int i=0;temp[i]!='\0';i++){
        printf("%c",temp[i]);
    }
       
}
 /*else{
        if(a[i] == '+' || a[i] == '-' || a[i] == '*' || a [i] == '/' || a[i] == '%'){
            


        }
        else{
           
        }
        }
    }
    printf("\n%f\n",result);*/
   // printf("\npp: %d",'8'-'0');