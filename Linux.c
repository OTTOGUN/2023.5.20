#include <stdio.h>

int main()
{
    for(int i = 1;i < 10;i++, puts(""))
        for(int j = 1;j <= i;j++)
            printf("%d x %d = %-3d",i,j,i*j);
    // ����žų˷���-3d��ʾ����롣
}