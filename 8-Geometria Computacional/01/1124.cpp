#include <bits/stdc++.h>

using namespace std;

bool cabe(int l, int c, int r1, int r2);

int main(){

    int l, c, r1, r2;

    while(true){

        cin >> l >> c >> r1 >> r2;

        if(l == 0 && c == 0 && r1 == 0 && r2 == 0){
            return 0;
        }

        if(cabe(l, c, r1, r2)){
            cout << "S\n";
        }else{
            cout << "N\n";
        }
    }
    return 0;
}

bool cabe(int l, int c, int r1, int r2){

    int tam = r1 + r2;

    if(c <= 2*r1 || c <= 2*r2 || l <= 2*r1 || l <= 2*r2){
        return false;
    }

    if(sqrt(l*l + c*c) < 2*tam){
        return false;
    }else{
        return true;
    }

    if(min(l, c) >= 2*tam){
        return true;
    }
    if(min(l, c) >= 2*max(r1, r2) && max(l, c) >= 2*tam){
        return true;
    }

    float dic = r1 - (c - r2);
    float dil = r1 - (l - r2);

    if(sqrt(dic*dic + dil*dil) < r1 + r2){
        return false;
    }

    return true;
}

/* codigo correto
#include <bits/stdc++.h>

using namespace std;

int formulas(int l, int c, int r1, int r2)
{
	if (min(l, c) >= 2*r1 + 2*r2){
	    return 1;
	}
	if (min(l, c) >= 2*max(r1, r2) && max(l, c) >= 2*r1 + 2*r2){
	    return 1;
	}

	if (c <= 2*r1 || c <= 2*r2 || l <= 2*r1 || l <= 2*r2){
	    return 0;
	}
	if (sqrt(l*l + c*c) < 2*r1 + 2*r2){
	    return 0;
	}

	if (c > l)
	{
		l = l ^ c;
		c = l ^ c;
		l = l ^ c;
	}

	double digc = r1 - (c - r2);
	double digl = r1 - (l - r2);

	if (sqrt(digc * digc + digl * digl) < r1 + r2){
	    return 0;
	}

	return 1;
}
int main()
{
	int l, c, r1, r2;
	int dim;

	while(1)
	{
		cin >> l >> c >> r1 >> r2;

		if (!l && !c && !r1 && !r2){
		    return 0;
		}

		if (formulas(l, c, r1, r2)){
		    cout << "S\n";
		}else{
		    cout << "N\n";
		}
	}
	return 0;
}
*/
