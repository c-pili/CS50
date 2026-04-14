/**********************************************************************/
/*                          Week 2 : Scrabble                         */
/*                                                                    */
/*   Implement a program in C that prompts the user for their name    */
/*                 and then says hello to that user.                  */
/**********************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){
    string word[3];
    int n[3], resultat[3];
    for(int i = 1; i <= 2; i++){
        word[i] = get_string("Player %i: ", i);
        n[i] = strlen(word[i]);
    }
    for(int j = 1; j <= 2; j++){
        for(int k = 0; k < n[j]; k++){
            switch(word[j][k]){
                case'a':
                case'A':
                    resultat[j] += 1;
                    break;

                case'b':
                case'B':
                    resultat[j] += 3;
                    break;

                case'c':
                case'C':
                    resultat[j] += 3;
                    break;

                case'd':
                case'D':
                    resultat[j] += 2;
                    break;

                case'e':
                case'E':
                    resultat[j] += 1;
                    break;

                case'f':
                case'F':
                    resultat[j] += 4;
                    break;

                case'g':
                case'G':
                    resultat[j] += 2;
                    break;

                case'h':
                case'H':
                    resultat[j] += 4;
                    break;

                case'i':
                case'I':
                    resultat[j] += 1;
                    break;

                case'j':
                case'J':
                    resultat[j] += 8;
                    break;

                case'k':
                case'K':
                    resultat[j] += 5;
                    break;

                case'l':
                case'L':
                    resultat[j] += 1;
                    break;

                case'm':
                case'M':
                    resultat[j] += 3;
                    break;

                case'n':
                case'N':
                    resultat[j] += 1;
                    break;

                case'o':
                case'O':
                    resultat[j] += 1;
                    break;

                case'p':
                case'P':
                    resultat[j] += 3;
                    break;

                case'q':
                case'Q':
                    resultat[j] += 10;
                    break;

                case'r':
                case'R':
                    resultat[j] += 1;
                    break;

                case's':
                case'S':
                    resultat[j] += 1;
                    break;

                case't':
                case'T':
                    resultat[j] += 1;
                    break;

                case'u':
                case'U':
                    resultat[j] += 1;
                    break;

                case'v':
                case'V':
                    resultat[j] += 4;
                    break;

                case'w':
                case'W':
                    resultat[j] += 4;
                    break;

                case'x':
                case'X':
                    resultat[j] += 8;
                    break;

                case'y':
                case'Y':
                    resultat[j] += 4;
                    break;

                case'z':
                case'Z':
                    resultat[j] += 10;
                    break;

                default:
                    resultat[j] += 0;
            }
        }
    }
    if(resultat[1] == resultat[2]){
        printf("Tie!\n");
    }
    else if(resultat[1] > resultat[2]){
        printf("Player 1 wins!\n");
    }
    else{
        printf("Player 2 wins!\n");
    }
    return 0;
}