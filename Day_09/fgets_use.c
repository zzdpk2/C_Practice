#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("11.txt", "r");
    
    char buf[100];
    int i = 0;
    while(1){

        fgets(buf, sizeof(buf), fp);
        if(feof(fp))    break;
        printf("buf = %s", buf);

    }

    fclose(fp);
    fp = NULL;

    return 0;
}


int main01(int argc, char const *argv[])
{
    FILE *fp = fopen("11.txt", "r");
    
    char buf[100];
    //从fp所关联的文件读取内容，放到buf, 一次最大读取为sizeof(buf)-1
    //遇到换行符、文件结尾、出错，结束本次读取
    fgets(buf, sizeof(buf), fp);
    printf("buf = %s\n", buf);

    fgets(buf, sizeof(buf), fp);
    printf("buf = %s\n", buf);

    fgets(buf, sizeof(buf), fp);
    printf("buf = %s\n", buf);

    memset(buf, 0, sizeof(buf));
    //到文件结尾，读取失败
    fgets(buf, sizeof(buf), fp);
    printf("buf = %s\n", buf);

    fclose(fp);
    fp = NULL;

    return 0;
}
