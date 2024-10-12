#include<stdio.h>
#include<string.h>

int main()
{
    int i, co;
    long long value = 0;
    for(i=0;i<3;i++){
        co = findColor();
        if(i==0){
            value += co * 10;
        }
        else if(i==1){
            value += co;
        }
        else if(i==2 && co != 0){
            for(int j = 0;j<co;j++){
                value *= 10;
            }
        }
    }
    printf("%lld", value);
}

int findColor(){
    char color[7];
    
    scanf("%s", color);
    if(strcmp(color,"black") == 0)
        return 0;
    else if(strcmp(color,"brown") == 0)
        return 1;
    else if(strcmp(color,"red") == 0)
        return 2;
    else if(strcmp(color,"orange") == 0)
        return 3;
    else if(strcmp(color,"yellow") == 0)
        return 4;
    else if(strcmp(color,"green") == 0)
        return 5;
    else if(strcmp(color,"blue") == 0)
        return 6;
    else if(strcmp(color,"violet") == 0)
        return 7;
    else if(strcmp(color,"grey") == 0)
        return 8;
    else if(strcmp(color,"white") == 0)
        return 9;
    else
        return findColor();
}