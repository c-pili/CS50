/**********************************************************************/
/*                          Week 4 : Recover                          */
/*                                                                    */
/*   Implement a program in C that prompts the user for their name    */
/*                 and then says hello to that user.                  */
/**********************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if(argc != 2){
        printf("./recover FILE\n");
        return 1;
    }
    /*
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    */

    char file_name[9];
    int i = 0;
    FILE *img = NULL;
    FILE *card = fopen(argv[1], "r");
    if(card == NULL){
        printf("INVALID FILE\n");
        return 2;
    }
    uint8_t buffer[512];
    while(fread(buffer, 1, 512, card) == 512){
        if((buffer[0] == 0xff) && (buffer[1] == 0xd8) && (buffer[2] == 0xff) && ((buffer[3] & 0xf0) == 0xe0)){
            if(img != NULL){
                fclose(img);
                //printf("%c", img);
            }
            sprintf(file_name, "%03i.jpg", i);
            i++;
            img = fopen(file_name, "w");
            fwrite(buffer, 1, 512, img);
    }
        else if(img != NULL){
            fwrite(buffer, 1, 512, img);
        }
    }
    if(img != NULL){
        fclose(img);
    }

    fclose(card);
    return 0;
}
