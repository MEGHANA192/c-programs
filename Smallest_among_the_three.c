#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c)
    printf("%d is smallest number",a);
    else if (b<c && b<a)
    printf("%d is smallest number",b);
    else
    printf("%d smallest number",c);
    return 0;
}