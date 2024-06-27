#include<stdio.h>
#define z 24
int madelyne ( int w[], int d, int *h, int *k )
{
    int x = 0, g;
    for ( int x = 0; x < d; x++ )
    {
        if ( w[x] > w[*k] )
            *k = x;
        else if ( w[x] < w[*h] )
            *h = x;
    }
    g = w[*k] - w[*h];
    return g;
}
int main()
{
    int f = 0, v = 0, t[z] = {222,450,864,532,375,200,910,780,601,743,902,812,808,911,797,304,220,501,221,413,778,911,333,291};
    printf ( "The greatest gap is between Q[%d] and Q[%d] ange its value is %d", f, v, madelyne ( t, z, &f, &v ));
    return 0;
}
