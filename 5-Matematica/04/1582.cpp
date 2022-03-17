/*#include <bits/stdc++.h>
using namespace std;
int main(){

    int a[3];
    while(cin>>a[0]>>a[1]>>a[2]){

        bool x=false;
        sort(a,a+3);
        int check=a[0];
        if(pow(a[2],2)==pow(a[1],2)+pow(a[0],2)){
        while(check>1)
        {
            if((a[0]%check==0)&&(a[1]%check==0)&&(a[2]%check==0))
                x=true;
            check--;
        }
        if(x==false)
            cout<<"tripla pitagorica primitivan";
        else
            cout<<"tripla pitagorican";
        }
        else
            cout<<"triplan";

    }
    return 0;
}*/

/*#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, l1, l2, l3;

    while(scanf("%d", &a)){
        scanf("%d %d", &b, &c);

        l1 = a * a;
        l2 = b * b;
        l3 = c * c;

        if((l1 == l2+l3 || l2 == l1+l3 || l3 == l1+l2) && __gcd(__gcd(a,b),c) == 1){
            printf("tripla pitagorica primitiva\n");
        }else if((l1 == l2+l3 || l2 == l1+l3 || l3 == l1+l2) && __gcd(__gcd(a,b),c) != 1){
            printf("tripla pitagorica\n");
        }else{
            printf("tripla\n");
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){

    int x = a*a;
    int y = b*b;
    int z = c*c;

    if((x == y+z || y == x+z || z == x+y) and __gcd(__gcd(a,b),c) == 1)
        cout<<"tripla pitagorica primitiva"<<endl;

    else if((x == y+z || y == x+z || z == x+y) and __gcd(__gcd(a,b),c) != 1)
        cout<<"tripla pitagorica"<<endl;

    else cout<<"tripla"<<endl;
}
    return 0;
}
