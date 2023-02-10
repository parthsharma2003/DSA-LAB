#include<stdio.h>
void towers(int n, char A, char C, char B)
{
if (n == 1){
printf(" Move disk 1 from peg %c to peg %c\n", A, C);
return;
}

towers(n - 1, A, B, C);
printf(" Move disk %d from peg %c to peg %c\n", n, A, C);
towers(n - 1, B, C, A);
}
int main( )
{
int num;
printf("Enter the number of disks : ");
scanf("%d", &num);
printf("The sequence of moves involved in the Tower of Hanoi are :\n");
towers(num, 'A', 'C', 'B');
}