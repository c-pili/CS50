/**********************************************************************/
/*                          Week 2 : Readability                      */
/*                                                                    */
/*   Implement a program in C that prompts the user for their name    */
/*                 and then says hello to that user.                  */
/**********************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    string text = get_string("Text: ");
    int sentence = 0, word = 1, n = strlen(text), letter = 0;
    for(int i = 0; i < n; i++){
        if(text[i] == ' '){
            word++;
        }
        else if((text[i] == '.')||(text[i] == '!') || (text[i] == '?')){
            sentence++;
        }
    }
    for(int j = 0; j < n; j++){
        if(isalpha(text[j])){
            letter++;
        }
    }
    float resultat = (0.0588 * (((float)letter/(float)word)*100) - 0.296 * (((float)sentence/(float)word)*100) - 15.8);
    int r = round(resultat);
    if(r <= 0){
        printf("Before Grade 1\n");
    }
    else if(r >= 16){
        printf("Grade 16+\n");
    }
    else{
        printf("Grade %i\n", r);
    }
    return 0;
}