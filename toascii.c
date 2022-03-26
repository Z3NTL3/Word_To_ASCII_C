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
    
    char* lijn1 = "╔═╗╔═╗╔═╗╦╦  ╔╦╗╔═╗╔╗ ╦  ╔═╗\n";
    char* lijn2 = "╠═╣╚═╗║  ║║   ║ ╠═╣╠╩╗║  ║╣ \n";
    char* lijn3 = "╩ ╩╚═╝╚═╝╩╩   ╩ ╩ ╩╚═╝╩═╝╚═╝\n";
    char* asciilogo = (char*)calloc(strlen(lijn1)*3,sizeof(char));
    asciilogo = strcat(asciilogo, lijn1);
    asciilogo = strcat(asciilogo, lijn2);
    asciilogo = strcat(asciilogo, lijn3);

    char* woord = (char*)calloc(10, sizeof(char)); 
    printf("%s", asciilogo);
    free(asciilogo);

    printf("Write some letters: ");
    scanf("%s", woord);
    printf("\n");
    
    if(strlen(woord) >= 10){
        printf("\033[31mPlease do not enter more than 10 letters\033[0m");
        exit(0);
    }
    else {
        // pass
    }
    
    printf("You have entered: %s\n", woord);
    ToASCII(woord);
    free(woord);
    printf("\n");
    return 0;
    
}
