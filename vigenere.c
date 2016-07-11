#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int isNotAlpha(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {}
        else
        {
            return true;
        }
    }
    return false;
}
int myFunc (char c)
{
            if (c == 'A' || c == 'a')
            {
                return 0;
            }
            if (c == 'B' || c == 'b')
            {
                return 1;
            }
            if (c == 'C' || c == 'c')
            {
                return 2;
            }
            if (c == 'D' || c == 'd')
            {
                return 3;
            }
            if (c == 'E' || c == 'e')
            {
                return 4;
            }
            if (c == 'F' || c == 'f')
            {
                return 5;
            }
            if (c == 'G' || c == 'g')
            {
                return 6;
            }
            if (c == 'H' || c == 'h')
            {
                return 7;
            }
            if (c == 'I' || c == 'i')
            {
                return 8;
            }
            if (c == 'J' || c == 'j')
            {
                return 9;
            }
            if (c == 'K' || c == 'k')
            {
                return 10;
            }
            if (c == 'L' || c == 'l')
            {
                return 11;
            }
            if (c == 'M' || c == 'm')
            {
                return 12;
            }
            if (c == 'N' || c == 'n')
            {
                return 13;
            }
            if (c == 'O' || c == 'o')
            {
                return 14;
            }
            if (c == 'P' || c == 'p')
            {
                return 15;
            }
            if (c == 'Q' || c == 'q')
            {
                return 16;
            }
            if (c == 'R' || c == 'r')
            {
                return 17;
            }
            if (c == 'S' || c == 's')
            {
                return 18;
            }
            if (c == 'T' || c == 't')
            {
                return 19;
            }
            if (c == 'U' || c == 'u')
            {
                return 20;
            }
            if (c == 'V' || c == 'v')
            {
                return 21;
            }
            if (c == 'W' || c == 'w')
            {
                return 22;
            }
            if (c == 'X' || c == 'x')
            {
                return 23;
            }
            if (c == 'Y' || c == 'y')
            {
                return 24;
            }
            if (c == 'Z' || c == 'z')
            {
                return 25;
            }
            else
            {
                return 1000;
            }          
}
int main (int argc, string argv[])
{
    if (argc !=2 )
    {
        printf("Try again later!!!!!!\n");
        return 1;
    }
    if (isNotAlpha(argv[1]))
    {
        printf("Try again later!!!!!!\n");
        return 1;
    }
    else 
    {   
        string inputtext = GetString();
     
        int k[strlen(inputtext)];
        //k[0] = myFunc(argv[1][0]);
        //k[1] = myFunc(argv[1][1]);
        for (int i = 0,w = 0, n = strlen(inputtext); i < n; i++)
        {
           if (isalpha(inputtext[i]))
           {
               if ((argv[1][w]) == '\0')
               {
                w = 0;
                k[i] = myFunc(argv[1][w]);
                w++;
               }
               else 
               {
               k[i] = myFunc(argv[1][w]);
               w++;
               }
           }
           else
           {
            k[i] = 0;
           }
        }
        
        
        
        
        
        for (int i = 0, n = strlen(inputtext); i < n; i++)
        {
            if (isupper(inputtext[i]))
            {
                int x = inputtext[i] + k[i];
                while (x > 90)
                {
                    x = x - 26;
                }
                printf("%c",x);
            }
            else if (islower(inputtext[i]))
            {
                int x = inputtext[i] + k[i];
                while (x > 122)
                {
                    x = x - 26;
                }
                printf("%c",x);
            }
            else
            {
                printf("%c",inputtext[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
