#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int n;
    int grid[2][2];
    int grid1[2][2];

    scanf("%d", &n);
    for(int c = 0; c < n; c++){
        scanf("%d %d %d", &grid[0][0],&grid[0][1],&grid[0][2]);
        scanf("%d %d %d", &grid[1][0],&grid[1][1],&grid[1][2]);
        scanf("%d %d %d", &grid[2][0],&grid[2][1],&grid[2][2]);

        printf("Possiveis maletas: ");

        grid1[0][0] = abs(grid[0][0] - grid[0][1]);
        grid1[0][1] = abs(grid[0][1] - grid[0][0]);
        grid1[0][2] = abs(grid[0][2] - grid[0][1]);
        grid1[1][0] = abs(grid[1][0] - grid[0][1]);
        grid1[1][1] = abs(grid[1][1] - grid[0][0]);
        grid1[1][2] = abs(grid[1][2] - grid[0][1]);
        grid1[2][0] = abs(grid[2][0] - grid[0][1]);
        grid1[2][1] = abs(grid[2][1] - grid[0][0]);
        grid1[2][2] = abs(grid[2][2] - grid[0][1]);
    }
}
