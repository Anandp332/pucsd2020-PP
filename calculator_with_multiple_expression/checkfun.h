float check1(float first, float second, char operation){
    
    if(operation == '*'){
        return mul(first,second);
       // printf("res: %f",result);
       // second =0;
       // first = result;
        //printf("fist: %f",first);
        }
    else if(operation == '/'){
        return div(first,second);
       // second =0.0;
       // first = result;
        }
    else if(operation == '%'){
        return percentage(first,second);
        //first = result;
        //second =0.0;
        }
}
float check2(float first, float second, char operation){
    if(operation == '+'){
        return add(first,second);
        //printf("resxyz: %f",result);
        //first = result;
        //second =0.0;
        //printf("fistxyz: %f",first);
        }
    else if(operation == '-'){
        return sub(first,second);
        //second =0.0;
        //first = result;

        }
}