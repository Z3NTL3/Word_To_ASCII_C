#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ToASCII(char* woordToASCII){
    
    /* Some layout */
    printf("\nLETTER | DEC NUM");
    printf("\n_______________");
    /* End of Some layout */
    
    /* 
        Some magics
    */
    
    int magic = strlen(woordToASCII) + 1;
    woordToASCII[magic] = '\0';
    
    for (int i = 0; i < strlen(woordToASCII); i++){
        printf("\n%c : %d", woordToASCII[i], woordToASCII[i]);
    }
    
}


int main()
{
    char woord[10];
    
    printf("Write some letters: ");
    scanf("%10s", &woord);
    printf("\n");
    
    if(strlen(woord) >= 10){
        printf("\033[31mPlease do not enter more than 10 letters\033[0m");
        exit(0);
    }
    else {
        // pass
    }
    
    printf("You have entered: %s\n", woord);
    ToASCII(&woord);
    printf("\n");
    return 0;
}
