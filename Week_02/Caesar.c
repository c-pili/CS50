/**********************************************************************/
/*                          Week 2 : Caesar                           */
/*                                                                    */
/*   Implement a program in C that prompts the user for their name    */
/*                 and then says hello to that user.                  */
/**********************************************************************/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

string chiffrage_cesar(string mes, int n, int r);

int main (int argc, string argv[]) {
    if(argc !=2) {
        printf("./ceasar Key\n");
        return 1;
    }
    else{
        int m = strlen(argv[1]);
        int n = 0;
        for(int i = 0; i < m; i++){
            int temp = argv[1][i];
            if((48 <= temp) && (temp <= 57 )){
                n = n * 10 + (temp - 48);
            }
            else{
                printf("./ceasar Key\n");
                return 1;
            }
        }
        string mes = get_string("plaintext : ");
        int r = strlen(mes);

        mes = chiffrage_cesar(mes, n, r);
        printf("ciphertext: %s\n", mes);
    }
    return 0;
}




string chiffrage_cesar(string mes, int k, int r) {
    for (int i = 0; i < r; i++) {
        char m = mes[i];
        if (m >= 'A' && m <= 'Z') {
            mes[i] = (m - 'A' + k) % 26 + 'A';
        }
        else if (m >= 'a' && m <= 'z') {
            mes[i] = (m - 'a' + k) % 26 + 'a';
        }
    }
    return mes;
}
