#include<stdio.h>
typedef {
    int val;
    int up;
    int down;
    int left;
    int right;
}node;

int main(int argc, char* argv[]){
    node **maze;
    int goal_x;
    int goal_y;
    int ctr=0;
    int intial_x=0;
    int intial_y=0;
    
    allocator(goal_x,goal_y, ctr);
    movement(intial_x, initial_y);
    int ctr=0;

    return 0;
}


int allocator(int i, int j, int ctr){
    if (i==0 && j==0|| i==16&&j==16)
        return 0;
    if(!maze[i][j].up && maze[i-1][j].val>ctr+1){
        maze[i-1][j].val=ctr+1;
        allocator(i-1, j, ctr+1);
    }
    if(!maze[i][j].down && maze[i+1][j].val>ctr+1){
        maze[i+1][j].val=ctr+1;
        allocator(i+1,j, ctr+1);
    }
    if(!maze[i][j].left && maze[i][j-1].val>ctr+1){
        maze[i][j-1].val=ctr+1;
        allocator(i, j-1, ctr+1);
    }
    if(!maze[i][j].down && maze[i][j+1].val>ctr+1){
        maze[i][j+1].val=ctr+1;
        allocator(i, j+1,ctr+1);
    }
    return 1;
}

int movement(int x, int y){
    if(maze[x][y].val==0)
         return 0;
    if(!maze[x][y].up && maze[x][y].val>maze[x-1][y].val){
         moveup();
         movement(x-1, y);
    }
    if(!maze[x][y].down && maze[x][y].val>maze[x+1][y].val){
         movedown();
         movement(x+1, y);
    }
    if(!maze[x][y].right && maze[x][y].val> maze[x][y+1].val){
         moveright();
         movement(x,y+1);
    }
    if(!maze[x][y].left && maze[x][y].val>maze[x][y-1]){
         moveleft();
         movement(x, y-1);
    return 0;

}
