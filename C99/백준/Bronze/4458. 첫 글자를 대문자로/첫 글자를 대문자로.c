#include <stdio.h>

int main(){
    int n, i;
    char str[32] = " ";
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++){
        gets(str);
        if (str[0] >= 97)
            str[0] -= 32;		
        printf("%s\n", str);
    }
    return 0;
}