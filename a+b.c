//换行停止命令的a+b
//重点是while的使用，保证能够一直输入

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a, &b) != EOF)
    {
        printf("%d\n",a+b);
    }
    return 0;
}
