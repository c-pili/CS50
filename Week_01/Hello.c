/**********************************************************************/
/*                          Week 1 : Hello                            */
/*                                                                    */
/*   Implement a program in C that prompts the user for their name    */
/*                 and then says hello to that user.                  */
/**********************************************************************/

#include<cs50.h>
#include<stdio.h>

int main(){
    string name = get_string("Whats is your name ? ");
    printf("hello, %s\n", name);
    return 0;
}
