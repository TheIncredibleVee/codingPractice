#include<stdio.h>
typedef {
    int val;
    int up;
    int down;
    int left;
    int right;
}square;

int main(int argc, char* argv[]){
    node **maze;
    int goalPos;
    int startPos;
    int ctr=0;

    return 0;
}


int func(int i, int j, int ctr){
    if (i==goal_x && j==goal_y)
        return;
    if(!maze[i][j].up && maze[i-1][j].val>ctr+1){
        maze[i-1][j].val=ctr+1;
        func(i-1, j);
    }
    if(!maze[i][j].down && maze[i+1][j].val>ctr+1){
        maze[i+1][j].val=ctr+1;
        func(i+1,j, ctr+1);
    }
    if(!maze[i][j].left && maze[i][j-1].val>ctr+1){
        maze[i][j-1].val=ctr+1;
        func(i, j-1, ctr+1);
    }
    if(!maze[i][j].down && maze[i][j+1].val>ctr+1){
        maze[i][j+1].val=ctr+1;
        func(i, j+1,ctr+1);
    }
    return ;
}