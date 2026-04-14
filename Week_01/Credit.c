/**********************************************************************/
/*                          Week 1 : Credit                           */
/*                                                                    */
/*   Implement a program in C that prompts the user for their name    */
/*                 and then says hello to that user.                  */
/**********************************************************************/
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(){
    long number, n_temp, resultat, j = 10;
    int k, code1 = 0, code2 = 0, l = 0, n1, n2;
        number = get_long("Number: ");
        n_temp = number;
        for(k = 0; n_temp != 0; k++){
            n_temp = n_temp / 10;
        }
        if((k <13) || (k > 16)){
            printf("INVALID\n");
            return 0;
        }
    for(long i = 10; i< pow(10, (k+1)); i*=10){
        resultat = (number % i);
        if(i != 10){
            resultat /= j;
            j=j*10;
        }
        if (l == (k - 1)){
            n1 = resultat;
        }
        else if (l == (k - 2)){
            n2 = resultat;
        }
        if(l % 2 != 0){
            int temp = (resultat * 2);
            if(temp >= 10){
                int temp2 = temp % 10;
                int temp3 = ((temp % 100) / 10);
                //printf("%i", temp2);
                code1 += temp2 + temp3;
            }
            else{
                code1 += (resultat * 2);
            }
        }
        else{
            code2 += resultat;
        }
        l++;
    }
    code1 += code2;
    code1 = code1 % 10;
    if(code1 == 0){
        int temp = n2+(n1*10);
        switch(n1){
            case(5):
                switch(n2){
                    case(1):
                    case(2):
                    case(3):
                    case(4):
                    case(5):
                        printf("MASTERCARD\n");
                        break;

                    default:
                        printf("INVALID\n");
                        return 0;
                }
                break;

            case(3):
                switch(n2){
                    case(4):
                    case(7):
                        printf("AMEX\n");
                        break;

                    default:
                        printf("INVALID\n");
                        return 0;
                }
                break;

            case(4):
                printf("VISA\n");
                break;

            default:
                printf("INVALID\n");
                return 0;
        }
    }
    else{
        printf("INVALID\n");
        return 0;
    }
    return 0;
}