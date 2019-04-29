#include <stdio.h>

/*char e(char message);*/
int main() 
{
    /*char cipher;
    printf("Enter 1 for Rotation Cipher\nEnter 2 for Substitution Cipher\n");
    scanf("%c", &cipher);
    Didnt get around to substitution whoops*/
    
    char crypt, message[100], ch;
    int i, k = 25;// k is key (variable) and is how many places each letter is displaced
    printf("Enter 1 for Encryption\nEnter 2 for Decryption\n");
    scanf("%c", &crypt);
    
    if(crypt = 2) 
    {
        printf("Please enter your message:\n"); 
        scanf("%s", message); 
        for (i = 0; message[i] != '\0'; ++i) // message cannot be 'nothing'
        {
            ch = message[i];
    
            if ((ch >= 'a') && (ch <= 'z'))
            { 
                ch = ch + k;
                if (ch > 'z') // This bit helps when the letter + key overflows
                {
				    ch = ch - 'z' + 'a' - 1;
            }// lower case
            message[i] = ch;
        }
        if ((ch >= 'A') && (ch <= 'Z'))
            {
            ch = ch + k;
            if(ch > 'Z')
                {
		        ch = ch - 'Z' + 'A' - 1;
            }       
                message[i] = ch;
// UPPER CASE.
        
        
        }
    }

    printf("Encrypted message: %s\n", message);
    
}
    else 
    {
        printf("Please enter your encrypted message:\n"); 
        scanf("%s", message); 
        for (i = 0; message[i] != '\0'; ++i) // message cannot be 'nothing'
        {
            ch = message[i];
    
            if ((ch >= 'a') && (ch <= 'z'))
            { 
                ch = ch - k;
                if (ch < 'a') // This bit helps when the letter + key overflows
                {
				    ch = ch + 'z' - 'a' + 1;
            }// lower case
            message[i] = ch;
        }
        if ((ch >= 'A') && (ch <= 'Z'))
            { 
            ch = ch - k;
            if(ch < 'A')
                {
		    	ch = ch + 'Z' - 'A' + 1;
            }   message[i] = ch;
// UPPER CASE.
        
        
        }
    }

    printf("Decrypted message: %s\n", message);
}
    return 0;
}

 /* char e(char message)
{
    char A = 0, B = 1, C = 2, D = 3, E = 4, F = 5, G = 6, H = 7, I = 8, J = 9, K = 10, L = 11, M = 12, N = 13, O = 14, P = 15, Q = 16, R = 17, S = 18, T = 19, U = 20, V = 21, W = 22, X = 23, Y = 24, Z = 25;
    int b;
    b = (message + k)%26; 
    Was persuing different paths but decided against it*/