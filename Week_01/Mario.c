/**********************************************************************/
/*                          Week 1 : Mario-More                       */
/*                                                                    */
/*   Implement a program in C that prompts the user for their name    */
/*                 and then says hello to that user.                  */
/**********************************************************************/
#include <cs50.h>
#include <stdio.h>

int main() {
    int n;
    do{
        n = get_int("Heights : ");
    }while((n <= 0) || (n > 9));
    for(int i = 1; i <= n; i++){
        for(int j = 0;j < (n-i); j++){
            printf(" ");
        }
        for(int k = 0;k < i; k++){
            printf("#");
        }
        printf("  ");
        for(int k = 0;k < i; k++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}