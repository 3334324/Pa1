#include <stdio.h>

int main()
{
    
    char message[100], ch;
    int i, k = 7;
    
    printf("Please enter your message:\n"); 
    scanf("%s", message); 
    printf("%s\n", message);
    for (i = 0; message[i] != '\0'; ++i) {
        ch = message[i];
        
        if ((ch >= 'a') && (ch <= 'z')){ 
            ch = ch + k;
// lower case
            message[i] = ch;
        }
        else if ((ch >= 'A') && (ch <= 'Z')){
            ch = ch + k;
            message[i] = ch;
// UPPER CASE. But how to get punctuations and " " in? hmm?
        }
}

    printf("Encrypted message: %s\n", message);
}