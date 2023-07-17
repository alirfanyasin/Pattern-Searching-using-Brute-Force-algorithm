#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void patternSearching(char *string, char *pattern){
    for (int i = 0; i < strlen(string); i++)
    {
        int count = 0;
        if (i + strlen(pattern) <= strlen(string))
        {
            for (int j = 0; j < strlen(pattern); j++)
            {
                if (string[i+j] == pattern[j])
                {
                    count++;
                }
            }
        }
        
        if (count == strlen(pattern))
        {
            printf("Ditemukan pada index %d\n", i);
        }   
    }
}

void main(){
    char *string = malloc(sizeof(char)*100);
    char *pattern = malloc(sizeof(char)*100);

    printf("Input : ");
    scanf(" %[^\n]%*c", string);
    printf("Input Pola : ");
    scanf(" %[^\n]%*c", pattern);
    patternSearching(string, pattern);
    // printf("\n%s", string);

}