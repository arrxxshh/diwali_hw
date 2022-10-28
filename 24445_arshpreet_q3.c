#include<stdio.h>
#include "intro.c"
int main()
{
    intro();
    int x,y,l;
    printf("enter x coordinate , y coordinate and length of the room : ");
    scanf("%d%d%d",&x,&y,&l);
    printf("center of room is at (%d,%d)",x+l/2,y+l/2);
}