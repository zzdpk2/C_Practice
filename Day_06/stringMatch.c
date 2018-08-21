#include <stdio.h>
#include <string.h>

// int findCount(char **target, int length);

int main(int argc, char const *argv[])
{
    char* p = "11abcd111122abcd3322abcd3333322qqqabcd";
    int i = 0;
    char *tmp = NULL;

    while(1){
        //查找匹配字符串,如果找到,返回匹配字符串的地址,没有找到返回空
        tmp = strstr(p, "abcd");
        if(tmp == NULL) 
            break;
        else{
            i++;
            //重新设置寻找起点
            p = tmp + strlen("abcd");
        }//没有找到
    }
    // printf("Times matched: %d\n", findCount(*p, sizeof(p)/sizeof(*p)));
    printf("abcd的次数为: %d\n", i);

    getchar();

    return 0;
}




// int findCount(char **target, int length){

//     int count = 0;


//     return 0;
// }
