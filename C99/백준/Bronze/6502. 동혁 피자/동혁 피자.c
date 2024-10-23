#include<stdio.h>

int main()
{
    int r,w,l;
    int i=1;
    while(1)
    {
        scanf("%d %d %d",&r, &w, &l);
        if(r==0)
        {
            break;
        }
        else
        {
            if(w*w+l*l>4*r*r)
            {
                printf("Pizza %d does not fit on the table.\n",i);
            }
            else if(w*w+l*l<=4*r*r)
            {
                printf("Pizza %d fits on the table.\n",i);
            }
        }
        i++;
    }
    return 0;
}