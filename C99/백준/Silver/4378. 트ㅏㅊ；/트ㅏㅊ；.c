#include<stdio.h>
#include<string.h>

char a[100001];

int main()
{
    int i;
    
    while (1)
    {
        
        if (gets(a) == NULL) break;
        for (i = 0; i < strlen(a); i++)
        {
            if (a[i] == 'B')
            {
                a[i] = 'V';
                continue;
            }
            if (a[i] == 'C')
            {
                a[i] = 'X';
                continue;
            }
            if (a[i] == 'D')
            {
                a[i] = 'S';
                continue;
            }
            if (a[i] == 'E')
            {
                a[i] = 'W';
                continue;
            }
            if (a[i] == 'F')
            {
                a[i] = 'D';
                continue;
            }
            if (a[i] == 'G')
            {
                a[i] = 'F';
                continue;
            }
            if (a[i] == 'H')
            {
                a[i] = 'G';
                continue;
            }
            if (a[i] == 'I')
            {
                a[i] = 'U';
                continue;
            }
            if (a[i] == 'J')
            {
                a[i] = 'H';
                continue;
            }
            if (a[i] == 'K')
            {
                a[i] = 'J';
                continue;
            }
            if (a[i] == 'L')
            {
                a[i] = 'K';
                continue;
            }
            if (a[i] == 'M')
            {
                a[i] = 'N';
                continue;
            }
            if (a[i] == 'N')
            {
                a[i] = 'B';
                continue;
            }
            if (a[i] == 'O')
            {
                a[i] = 'I';
                continue;
            }
            if (a[i] == 'P')
            {
                a[i] = 'O';
                continue;
            }
            if (a[i] == 'R')
            {
                a[i] = 'E';
                continue;
            }
            if (a[i] == 'S')
            {
                a[i] = 'A';
                continue;
            }
            if (a[i] == 'T')
            {
                a[i] = 'R';
                continue;
            }
            if (a[i] == 'U')
            {
                a[i] = 'Y';
                continue;
            }
            if (a[i] == 'V')
            {
                a[i] = 'C';
                continue;
            }
            if (a[i] == 'W')
            {
                a[i] = 'Q';
                continue;
            }
            if (a[i] == 'X')
            {
                a[i] = 'Z';
                continue;
            }
            if (a[i] == 'Y')
            {
                a[i] = 'T';
                continue;
            }
            if (a[i] == ';')
            {
                a[i] = 'L';
                continue;
            }
            if (a[i] == ',')
            {
                a[i] = 'M';
                continue;
            }
            if (a[i] == '.')
            {
                a[i] = ',';
                continue;
            }
            if (a[i] == '/')
            {
                a[i] = '.';
                continue;
            }
            if (a[i] == '\\')
            {
                a[i] = ']';
                continue;
            }
            if (a[i] == '\'')
            {
                a[i] = ';';
                continue;
            }
            if (a[i] == ']')
            {
                a[i] = '[';
                continue;
            }
            if (a[i] == '[')
            {
                a[i] = 'P';
                continue;
            }
            if (a[i] == '1')
            {
                a[i] = '`';
                continue;
            }
            if (a[i] == '2')
            {
                a[i] = '1';
                continue;
            }
            if (a[i] == '3')
            {
                a[i] = '2';
                continue;
            }
            if (a[i] == '4')
            {
                a[i] = '3';
                continue;
            }
            if (a[i] == '5')
            {
                a[i] = '4';
                continue;
            }
            if (a[i] == '6')
            {
                a[i] = '5';
                continue;
            }
            if (a[i] == '7')
            {
                a[i] = '6';
                continue;
            }
            if (a[i] == '8')
            {
                a[i] = '7';
                continue;
            }
            if (a[i] == '9')
            {
                a[i] = '8';
                continue;
            }
            if (a[i] == '0')
            {
                a[i] = '9';
                continue;
            }
            if (a[i] == '-')
            {
                a[i] = '0';
                continue;
            }
            if (a[i] == '=')
            {
                a[i] = '-';
                continue;
            }
            if (a[i] == ' ')
            {
                a[i] = ' ';
                continue;
            }
            if (a[i] == '!')
            {
                a[i] = '~';
                continue;
            }
            if (a[i] == '@')
            {
                a[i] = '!';
                continue;
            }
            if (a[i] == '#')
            {
                a[i] = '@';
                continue;
            }
            if (a[i] == '$')
            {
                a[i] = '#';
                continue;
            }
            if (a[i] == '%')
            {
                a[i] = '$';
                continue;
            }
            if (a[i] == '^')
            {
                a[i] = '%';
                continue;
            }
            if (a[i] == '&')
            {
                a[i] = '^';
                continue;
            }
            if (a[i] == '*')
            {
                a[i] = '&';
                continue;
            }
            if (a[i] == '(')
            {
                a[i] = '*';
                continue;
            }
            if (a[i] == ')')
            {
                a[i] = '(';
                continue;
            }
            if (a[i] == '_')
            {
                a[i] = ')';
                continue;
            }
            if (a[i] == '+')
            {
                a[i] = '_';
                continue;
            }
            if (a[i] == '|')
            {
                a[i] = '}';
                continue;
            }
            if (a[i] == '}')
            {
                a[i] = '{';
                continue;
            }
            if (a[i] == '\"')
            {
                a[i] = ':';
                continue;
            }
            if (a[i] == '?')
            {
                a[i] = '>';
                continue;
            }
            if (a[i] == '>')
            {
                a[i] = '<';
                continue;
            }
            if (a[i] == ':')
            {
                a[i] = 'L';
                continue;
            }
            if (a[i] == '<')
            {
                a[i] = 'M';
                continue;
            }
            if (a[i] == '{')
            {
                a[i] = 'P';
                continue;
            }
        }
        printf("%s\n", a);

    }
    return 0;
}