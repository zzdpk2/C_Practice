#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buf[1024];

    while(1){
        //默认遇到换行符，此次结束读取，换行符都放在buf
        //fgets()进行读取, 字符串末尾会携带\n
        fgets(buf, sizeof(buf), stdin);
        printf("&%s&", buf);

    }

    return 0;
}
