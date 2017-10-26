/*Anthony Acosta*/

#include <stdio.h>
#define MAXLINE 1000
#define SIZE 20
/* maximum input line length */

int getline2(char line[], int maxline);
void copy(char to[], char from[]);
int contar (char *);
void countLine(char l[]);
main()
{
int len;
int max;
char line[MAXLINE];
char longest[MAXLINE];
/*char str[SIZE];*/
max = 0;
while ((len = getline2(line, MAXLINE)) > 0)
if (len > max) {
max = len;
copy(longest, line);
}
if (max > 0)
printf("%s", longest);
scanf("%s",longest);
contar(longest);
countLine(longest);
return 0;
}


/* getline2: read a line into s, return length*/
int getline2(char s[],int lim)
{
int c, i;
for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
s[i] = c;
if (c == '\n') {
s[i] = c;
++i;
}
s[i] = '\0';
return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
int i;
i = 0;
while ((to[i] = from[i]) != '\0')
++i;
}

/*Contar lineas*/
int contar(char *str){
int letras, digitos,i;
letras=digitos=0;
for(i=0; i<20; i++){
	char c=str[i];
if(c<=57 && c >=48) digitos++;
if(c<=90 && c >=65) letras++;
if(c<=122 && c >=97) letras++;
if(c==0) break;
}
printf("digitos:%d \t letras:%d \n", digitos, letras);
}


/*Contar lineas*/
void countLine(char s[]){
int c, nl,cnt;
cnt=0;
nl=0;
while ((c = getchar()) != EOF && cnt==sizeof(s))
if (c == '\n')
++nl;
++cnt;
printf("La cantidad de lineas es: ");
printf("%d\n", nl);
}
    while (cadena[i] != '\0')
        ++i;
    return i;
}

/* cuenta_digitos: cuenta los digitos de la cadena seleccionada */
int cuenta_digitos(char cadena[])
{
    int i, digitos;
    i = 0;
    digitos = 0;
    while (cadena[i] != '\0')
    {
        if (cadena[i] >= '0' && cadena[i] <= '9')
            ++digitos;
        ++i;
    }
    return digitos;
}
