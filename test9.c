#include <stdio.h>

int max(int x, int y)
{
return x > y ? x : y;
}

int main()
{
int (* p)(int , int) = &max;
int a, b, c, d;

printf("please input three number:");
scanf("%d, %d, %d", &a, &b, &c);

d = p(p(a, b), c);

printf("max number : %d \n", d);

return 0;
}
