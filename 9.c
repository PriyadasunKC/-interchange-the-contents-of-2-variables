#include <stdio.h>

int swap();
int main()
{
    swap();
    return 0;
}

int swap()
{
    int c = 0;
    int d = 0;
    int temp = 0;

    printf("Enter value for C : ");
    scanf("%d", &c);
    printf("Enter value for D : ");
    scanf("%d", &d);
    printf("Before interchange\n C : %d\n D : %d \n", c, d);

    temp = c;
    c = d;
    d = temp;

    printf("After interchange\n C : %d\n D : %d ", c, d);

    return 0;
}
