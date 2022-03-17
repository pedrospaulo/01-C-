#include <stdio.h>

int resto (int n, int k){
    int r = 0;
    for (int i = 2; i <= n; i++){
        r = (r + k) % i;
    }
    return r;
}

int main (){

    int nc, x, y;

    scanf("%d", &nc);

    switch (nc) {
        case 1:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1

            break;

        case 2:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2

            break;

        case 3:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3

            break;

        case 4:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4

            break;

        case 5:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5

            break;

        case 6:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6

            break;

        case 7:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7

            break;

        case 8:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8

            break;

        case 9:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9

            break;

        case 10:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10

            break;

        case 11:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11

            break;

        case 12:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12

            break;

        case 13:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13

            break;

        case 14:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14

            break;

        case 15:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15

            break;

        case 16:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16

            break;

        case 17:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17

            break;

        case 18:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18

            break;

        case 19:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19

            break;

        case 20:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20

            break;

        case 21:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21

            break;

        case 22:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22

            break;

        case 23:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22
            scanf("%d %d", &x, &y);
            printf("Case 23: %d\n", resto(x,y)+1);//23

            break;

        case 24:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22
            scanf("%d %d", &x, &y);
            printf("Case 23: %d\n", resto(x,y)+1);//23
            scanf("%d %d", &x, &y);
            printf("Case 24: %d\n", resto(x,y)+1);//24

            break;

        case 25:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22
            scanf("%d %d", &x, &y);
            printf("Case 23: %d\n", resto(x,y)+1);//23
            scanf("%d %d", &x, &y);
            printf("Case 24: %d\n", resto(x,y)+1);//24
            scanf("%d %d", &x, &y);
            printf("Case 25: %d\n", resto(x,y)+1);//25

            break;

        case 26:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22
            scanf("%d %d", &x, &y);
            printf("Case 23: %d\n", resto(x,y)+1);//23
            scanf("%d %d", &x, &y);
            printf("Case 24: %d\n", resto(x,y)+1);//24
            scanf("%d %d", &x, &y);
            printf("Case 25: %d\n", resto(x,y)+1);//25
            scanf("%d %d", &x, &y);
            printf("Case 26: %d\n", resto(x,y)+1);//26

            break;

        case 27:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22
            scanf("%d %d", &x, &y);
            printf("Case 23: %d\n", resto(x,y)+1);//23
            scanf("%d %d", &x, &y);
            printf("Case 24: %d\n", resto(x,y)+1);//24
            scanf("%d %d", &x, &y);
            printf("Case 25: %d\n", resto(x,y)+1);//25
            scanf("%d %d", &x, &y);
            printf("Case 26: %d\n", resto(x,y)+1);//26
            scanf("%d %d", &x, &y);
            printf("Case 27: %d\n", resto(x,y)+1);//27

            break;

        case 28:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22
            scanf("%d %d", &x, &y);
            printf("Case 23: %d\n", resto(x,y)+1);//23
            scanf("%d %d", &x, &y);
            printf("Case 24: %d\n", resto(x,y)+1);//24
            scanf("%d %d", &x, &y);
            printf("Case 25: %d\n", resto(x,y)+1);//25
            scanf("%d %d", &x, &y);
            printf("Case 26: %d\n", resto(x,y)+1);//26
            scanf("%d %d", &x, &y);
            printf("Case 27: %d\n", resto(x,y)+1);//27
            scanf("%d %d", &x, &y);
            printf("Case 28: %d\n", resto(x,y)+1);//28

            break;

        case 29:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22
            scanf("%d %d", &x, &y);
            printf("Case 23: %d\n", resto(x,y)+1);//23
            scanf("%d %d", &x, &y);
            printf("Case 24: %d\n", resto(x,y)+1);//24
            scanf("%d %d", &x, &y);
            printf("Case 25: %d\n", resto(x,y)+1);//25
            scanf("%d %d", &x, &y);
            printf("Case 26: %d\n", resto(x,y)+1);//26
            scanf("%d %d", &x, &y);
            printf("Case 27: %d\n", resto(x,y)+1);//27
            scanf("%d %d", &x, &y);
            printf("Case 28: %d\n", resto(x,y)+1);//28
            scanf("%d %d", &x, &y);
            printf("Case 29: %d\n", resto(x,y)+1);//29

            break;

        case 30:
            scanf("%d %d", &x, &y);
            printf("Case 1: %d\n", resto(x,y)+1);//1
            scanf("%d %d", &x, &y);
            printf("Case 2: %d\n", resto(x,y)+1);//2
            scanf("%d %d", &x, &y);
            printf("Case 3: %d\n", resto(x,y)+1);//3
            scanf("%d %d", &x, &y);
            printf("Case 4: %d\n", resto(x,y)+1);//4
            scanf("%d %d", &x, &y);
            printf("Case 5: %d\n", resto(x,y)+1);//5
            scanf("%d %d", &x, &y);
            printf("Case 6: %d\n", resto(x,y)+1);//6
            scanf("%d %d", &x, &y);
            printf("Case 7: %d\n", resto(x,y)+1);//7
            scanf("%d %d", &x, &y);
            printf("Case 8: %d\n", resto(x,y)+1);//8
            scanf("%d %d", &x, &y);
            printf("Case 9: %d\n", resto(x,y)+1);//9
            scanf("%d %d", &x, &y);
            printf("Case 10: %d\n", resto(x,y)+1);//10
            scanf("%d %d", &x, &y);
            printf("Case 11: %d\n", resto(x,y)+1);//11
            scanf("%d %d", &x, &y);
            printf("Case 12: %d\n", resto(x,y)+1);//12
            scanf("%d %d", &x, &y);
            printf("Case 13: %d\n", resto(x,y)+1);//13
            scanf("%d %d", &x, &y);
            printf("Case 14: %d\n", resto(x,y)+1);//14
            scanf("%d %d", &x, &y);
            printf("Case 15: %d\n", resto(x,y)+1);//15
            scanf("%d %d", &x, &y);
            printf("Case 16: %d\n", resto(x,y)+1);//16
            scanf("%d %d", &x, &y);
            printf("Case 17: %d\n", resto(x,y)+1);//17
            scanf("%d %d", &x, &y);
            printf("Case 18: %d\n", resto(x,y)+1);//18
            scanf("%d %d", &x, &y);
            printf("Case 19: %d\n", resto(x,y)+1);//19
            scanf("%d %d", &x, &y);
            printf("Case 20: %d\n", resto(x,y)+1);//20
            scanf("%d %d", &x, &y);
            printf("Case 21: %d\n", resto(x,y)+1);//21
            scanf("%d %d", &x, &y);
            printf("Case 22: %d\n", resto(x,y)+1);//22
            scanf("%d %d", &x, &y);
            printf("Case 23: %d\n", resto(x,y)+1);//23
            scanf("%d %d", &x, &y);
            printf("Case 24: %d\n", resto(x,y)+1);//24
            scanf("%d %d", &x, &y);
            printf("Case 25: %d\n", resto(x,y)+1);//25
            scanf("%d %d", &x, &y);
            printf("Case 26: %d\n", resto(x,y)+1);//26
            scanf("%d %d", &x, &y);
            printf("Case 27: %d\n", resto(x,y)+1);//27
            scanf("%d %d", &x, &y);
            printf("Case 28: %d\n", resto(x,y)+1);//28
            scanf("%d %d", &x, &y);
            printf("Case 29: %d\n", resto(x,y)+1);//29
            scanf("%d %d", &x, &y);
            printf("Case 30: %d\n", resto(x,y)+1);//30

            break;

        default:
            break;

    }

    return 0;

}
