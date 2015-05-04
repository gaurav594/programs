#include <stdio.h>
 
void towers(int, char, char, char);
 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char x, char y, char z)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", x, y);
        return;
    }
    towers(num - 1, x, z, y);
    printf("\n Move disk %d from peg %c to peg %c", num, x, y);
    towers(num - 1, z, y, x);
}