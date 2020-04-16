#include<stdio.h>
#include"allfun.h"
void main(){
    float a,b;
    char operation;
    float result;
    printf("This Calculator have add,sub,mult,div and percent funtion for two number only\n write the expression like this: 11+22 or 33*44\n For stop calculator press -1:  ");
    scanf("%f %c %f",&a,&operation,&b);
    while(1){

       
        if(operation == '+'){
            result = add(a,b);
            
            printf("%f",result);
        }
        else if(operation == '-'){
            result = sub(a,b);
            printf("%f",result);
        }
        else if(operation == '*'){
            result = mul(a,b);
            printf("%f",result);
        }
        else if(operation == '/'){
            result = div(a,b);
            printf("%f",result);
        }
        else if(operation == '%'){
            result = percentage(a,b);
            printf("%f",result);
        }
        char test;
        printf("Do you wish to more calcultion for yes press y , for no press n: ");
        scanf(" %c",&test);
        if(test == 'n'){
        break;
        }
        else
        {
        a= result;
        scanf("%c %f",&operation,&b); 
        }
        

    }
}
