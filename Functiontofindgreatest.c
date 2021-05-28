#include <stdio.h>
int max_of_four(int a, int b, int c, int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    static int ans;
    if (a>b&&a>c&&a>d)
    {
        ans=a;
        return(ans);
    }
    else if (b>c&&b>a&&b>d)
    {
        ans=b;
        return(ans);
    }
    else if(c>d&&c>b&&c>a)
    {
        ans=c;
        return(ans);
    }
    else {
    ans=d;
    return(d);
    }
}
