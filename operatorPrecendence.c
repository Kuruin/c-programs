#include <stdio.h> /* precendence means priority of operators of which will be executed first just like BODMAS in maths*/
int main()
{
    int x, y;

    // y=5
    // x=y
    int z = 10;
    y = 2;
    x = -y + z;
    // x= -(y)+z
    printf("%i", x);
    return 0;
}