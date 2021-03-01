/*Famigerado Desocultatron 3000*/

/*
Download all the files.

Execute the .exe file. It will open the command prompt.

In the command prompt, it will ask you the letter of the disk you want to "un-occult".

For example, the common letters used in most Windows systems will be E and F (E:\ or F:\ disks). Write that letter on the prompt.

Your files should appear again. Delete the shortcuts and use your device again.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    fflush(stdin); /*Limpa o buffer do teclado*/

    char c,l[31];

    *l="attrib ?:\*.* /d /s +a -h -r -s\0"; /*Copia o comando de cmd para uma string l*/

    printf("Insira a unidade de disco do seu dispositivo (ex: D, E)\n\n"); /*Recebe do usuário a unidade de disco*/

    c=getchar();

    l[7] = c;

    system(l);

    return 0;
}
