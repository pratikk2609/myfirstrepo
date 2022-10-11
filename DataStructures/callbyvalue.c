#include <stdio.h>
struct point
{
    int x;
    int y;
};

void print(struct point p)
{
    printf("%d %d\n", p.x, p.y);
}

int main()
{
    struct point p1 = {23, 45};
    struct point p2 = {33, 99};
    print(p1); //calling by value
    print(p2);
    return 0;
}
