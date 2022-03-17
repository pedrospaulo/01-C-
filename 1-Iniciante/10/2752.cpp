#include <stdio.h>

int main(){

    char srt[] = {"AMO FAZER EXERCICIO NO URI"};

    printf("<%s>\n", srt);
    printf("<%30s>\n", srt);
    printf("<%.20s>\n", srt);
    printf("<%-20s>\n", srt);
    printf("<%-30s>\n", srt);
    printf("<%.30s>\n", srt);
    printf("<%30.20s>\n", srt);
    printf("<%-30.20s>\n", srt);

    return 0;
}
