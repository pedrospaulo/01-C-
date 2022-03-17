/*#include <stdio.h>

int main()
{
    int tst, Dab, Gab, a1, a2, d1, d2, l1, l2, bns;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d", &bns);
        scanf("%d %d %d", &a1, &d1, &l1);
        scanf("%d %d %d", &a2, &d2, &l2);
        Dab = (a1+d1)/2;
        if(l1%2==0) Dab += bns;
        Gab = (a2+d2)/2;
        if(l2%2==0) Gab += bns;
        if(Dab == Gab) printf("Empate\n");
        else printf((Dab > Gab)? "Dabriel\n" : "Guarte\n");
    }
    return 0;
}*/

#include <stdio.h>

int main() {

	unsigned int batalhas, bonus;
	unsigned int atk1, atk2, def1, def2, lv1, lv2;
	double gp1, gp2;

	scanf("%d", &batalhas);

	do {

		scanf("%d",&bonus);

		scanf("%d %d %d", &atk1, &def1, &lv1);
		scanf("%d %d %d", &atk2, &def2, &lv2);


		gp1 = (atk1+def1)/2.0;
		gp2 = (atk2+def2)/2.0;


		if (lv1 % 2 == 0)
			gp1 += bonus;

		if (lv2 % 2 == 0)
			gp2 += bonus;

		if (gp1 == gp2) {
			printf("Empate\n");
		} else if (gp1 > gp2) {
			printf("Dabriel\n");
		} else {
			printf("Guarte\n");
		}

		batalhas--;
	} while (batalhas > 0);

	return 0;
}
