#include <stdio.h>

int main()
{
    
    int input, result=0;
    int remain[10];
    for(int i=0; i<10; i++)
    {
        scanf("%d", &input);
        remain[i] = (input % 42);
    }
    int count;
    for(int i=0; i<10; i++)
    {
        count=0;
        for(int j=i+1; j<10; j++)
        {
            if(remain[i] == remain[j])
                count++;
        }
        if (count == 0)
            result++;
    }
    printf("%d", result);
    return 0;
}