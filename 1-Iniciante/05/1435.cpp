/*#include<stdio.h>

int main(){
    int x,z=1,y,yy;
     int c[101][101];
    while(true)
    {

    scanf("%d",&x);
        for(int i=1;i<=x;i++)
        for(int j=1;j<=x;j++)
        {y=i-1;yy=j-1;
        c[i][j]=z;

            if(x>2){


            if(i==j && i<x)
            {
			  c[i][j]  ==  z++;
             z=1;}
            else
            c[i][j]  ==  z;

        }


        }



        if(x==0)break;
    }

}*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]){

    int n, mid, i, j, bot, m[100][100];

    while(cin >> n && n != 0){

        mid = ( n%2 == 0 ? n/2 : (n/2)+1);
        for(i = 0; i < mid; i++) {

            bot = (n-1)-i;
            for(j = i; j <= bot; j++){
                m[i][j] = i+1;
                m[bot][j] = i+1;
                m[j][i] = i+1;
                m[j][bot] = i+1;
            }
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(j == 0)
                    cout << setw(3) << m[i][j];
                else
                    cout << " " << setw(3) << m[i][j];

            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
