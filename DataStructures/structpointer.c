//passing pointers to structures as arguments
#include <stdio.h>
struct point
{
    int x;
    int y;
};

void print(struct point * p) //is used when struct is very large in size, so we pass the address instead of variable.
{
    printf("%d %d\n", p->x, p->y);
}

int main()
{
    struct point p1 = {23, 45};
    struct point p2 = {33, 99};
    print(&p1); 
    print(&p2);
    return 0;
}