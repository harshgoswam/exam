#include <stdio.h>
main()
{
    int a, b, c, d, big;
    printf(" Enter value to a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >b)
    {
        if(a>c)
        {
            if(a>d)
            big = a;
            else
            big=d;
        }
        else
           {
           if(c>d)
            big = c;
            else
            big = d;
        }
       
    }
   
   
}

