#include <stdio.h>
#include <string.h>

// int findCount(char **target, int length);

int main(int argc, char const *argv[])
{
    char* p = "11abcd111122abcd3322abcd3333322qqqabcd";
    int i = 0;
    char *tmp = NULL;

    while(1){
        //����ƥ���ַ���,����ҵ�,����ƥ���ַ����ĵ�ַ,û���ҵ����ؿ�
        tmp = strstr(p, "abcd");
        if(tmp == NULL) 
            break;
        else{
            i++;
            //��������Ѱ�����
            p = tmp + strlen("abcd");
        }//û���ҵ�
    }
    // printf("Times matched: %d\n", findCount(*p, sizeof(p)/sizeof(*p)));
    printf("abcd�Ĵ���Ϊ: %d\n", i);

    getchar();

    return 0;
}




// int findCount(char **target, int length){

//     int count = 0;


//     return 0;
// }
