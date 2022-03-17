#include <stdio.h>

int main()
{
    int n, i, val = 1;

    scanf("%d", &n);
    int h[n];

    for(i=0; i<n; i++){
        scanf("%d", &h[i]);
    }

    if(n==2 && h[0]==h[1]){
      val = 0;
    }else{
        for(i=2; i<n; i++){
            if(h[i] >= h[i-1] && h[i-1] >= h[i-2]){
                val = 0;
                break;
            }else if(h[i] <= h[i-1] && h[i-1] <= h[i-2]){
                val = 0;
                break;
            }
        }
    }
    printf((val == 1) ? "1\n" : "0\n");
    return 0;
}
