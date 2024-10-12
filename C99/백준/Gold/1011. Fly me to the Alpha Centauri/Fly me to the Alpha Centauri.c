#include<stdio.h>
#include<math.h>

int arr[100001];
int arr1[100001];
int tmp, tmp1;

int length(int x, int y)
{
    tmp1 = y - x;
    if (tmp1 == 1) return 1;
    else if (tmp1 == 2) return 2;
    tmp = sqrt(tmp1);
    if (tmp * tmp == tmp1) return tmp * 2 - 1;
    if (tmp * tmp + tmp >= tmp1)
    {
        return tmp * 2;
    }
    else
    {
        return tmp * 2 + 1;
    }
}

int main()
{ 
    int n;
    scanf("%d", &n); 
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &arr[i], &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", length(arr[i], arr1[i]));
    }
    return 0;
}