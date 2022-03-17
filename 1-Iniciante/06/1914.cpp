/*#include <stdio.h>
#include <string.h>
int main()
{
    int a,b;
    long long int c,d,e,f;
    char aa[201], bb[10], cc[201], dd[10], ee="PAR", ff="IMPAR";
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        scanf("%s %s %s %s", aa,bb,cc,dd);
        scanf("%lld%lld", &c, &d);
        e=c+d;
        if(bb[0]=='P')
        {
            if(e%2==0) printf("%s\n", aa);
            else printf("%s\n", cc);
        }
        else
        {
            if(e%2==0) printf("%s\n", cc);
            else printf("%s\n", aa);
        }
    }
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short numCasos;
     long long num, num2;
     char jogador[101], jogador2[101], i, escolha[6], result;

     for(i = 0;i < 101; i++) jogador[i] = jogador2[i] = 0;

     scanf("%hd" , &numCasos);

     while(numCasos--){
         scanf("%s", jogador); scanf("%s", escolha);
         scanf("%s", jogador2); scanf("%s", escolha);
         scanf("%lld %lld" , &num, &num2);
         if(num % 2 == 0 && num2 % 2 == 0) result = 'P';
         else if(num % 2 != 0 && num2 % 2 != 0) result = 'P';
         else result = 'I';

         if(escolha[0] == 'P' && result == 'P') printf("%s\n", jogador2);
         else if(escolha[0] == 'I' && result == 'I') printf("%s\n", jogador2);
         else printf("%s\n", jogador);
     }

	 return 0;
}
