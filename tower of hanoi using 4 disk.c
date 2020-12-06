//tower of hanoi
#include<stdio.h>
void move(int,char,char,char);
int main()
{
    int num;
    printf("Enter the number of rods:\n");

    scanf("%d",&num);
    move(num,'A','B','C');
    return 0;
}
void move(int n,char from,char to,/*using*/char aux) // Three disks are switched to one disk recursively and rem(n=1
{
    if(n==1)
    {
     printf("Move disk 1 from %c to %c \n",from,to); // switch the lone disk to the respective node
     return;
    }
    move(n-1,from,aux,to);  // Moving a disk from A to B using C
    printf("Move disk %d from %c to %c\n",n,from,to);
    move(n-1,aux,to,from);//moving  disk from B to C using A
}
/*For n disks, total 2n – 1 moves are required.

eg: For 4 disks 24 – 1 = 15 moves are required.

For n disks, total 2n-1 function calls are made.

eg: For 4 disks 24-1 = 8 function calls are made.*/
