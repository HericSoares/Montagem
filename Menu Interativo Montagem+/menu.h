#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED



#endif // MENU_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int botoeirabprontas,botoeiracsprontos,botoeiraciprontos;
int botoeirabemandamento,botoeiracsemandamento,botoeiraciemandamento;

botoeirabprontas = 24;  //Número de bases da botoeira pronta
botoeiracsprontos = 0;  //Número de corpos superiores da botoeira prontos
botoeiraciprontos = 28; //Número de corpos inferiores da botoeira prontos

botoeirabemandamento = 26; //Número de bases da botoeira que ainda não estão prontas
botoeiracsemandamento = 58; //Número de corpos superiores da botoeira que ainda não estão prontos
botoeiraciemandamento = 30; //Número de corpos inferiores da botoeira que ainda não estão prontos


/*             0     1    2     3   4      5     6       7         8      */
typedef enum{BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,LIGHTGRAY,DARKGRAY,
LIGHTBLUE,LIGHTGREEN,LIGHTCYAN,LIGHTRED,LIGHTMAGENTA,YELLOW,WHITE} COLORS;
/* 9         10        11        12        13          14    15          */
static int __BACKGROUND = BLACK;
static int __FOREGROUND = LIGHTGRAY;

void textcolor (int letra, int fundo){
    __FOREGROUND = letra;
    __BACKGROUND = fundo;
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
    letra + (__BACKGROUND << 4));
}
void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}





int botmateriaisgerais()
{
    printf("\n\tMateriais Gerais da Botoeira\n\n");
FILE *file;
file = fopen("materiaisgeraisbotoeira.txt", "r");
if(file == NULL){
    printf("Não foi possivel encontrar o arquivo.\n");
    system("pause");
}
int x, tecla;
tecla = getch;
char frase[100];
while(fgets(frase,100, file) != NULL){printf("%s", frase);}
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
botoeira();
}



int botoeirasprontas()
{
    printf("\n\tBotoeiras Prontas\n\n");

 if(botoeirabprontas < botoeiracsprontos && botoeirabprontas < botoeiraciprontos)
 {
     printf ("Temos %d Botoeiras Prontas\n", botoeirabprontas);
 }
 if(botoeiracsprontos < botoeirabprontas && botoeiracsprontos < botoeiraciprontos)
 {
     printf ("Temos %d Botoeiras Prontas\n", botoeiracsprontos);
 }
 else {
    printf ("Temos %d Botoeiras Prontas\n", botoeiraciprontos);
 }
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
botoeira();
}

int gwbr()
{
printf("\n\tGWBR\n\n");
printf("Em Manutenção!\n");
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
controladores();
}


int gw3()
{
    printf("\n\tGW3\n\n");
printf("Em Manutenção!\n");
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
controladores();
}


int gw1()
{
    printf("\n\tGW1\n\n");
printf("Em Manutenção!\n");
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
controladores();
}

int botemandamentob()
{
    printf("\n\tBases em Andamento da Botoeira\n\n");
printf("Temos em andamento: %d Bases!\n", botoeirabemandamento);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
base();
}

int botemandamentocs()
{
    printf("\n\tCorpos Superiores em Andamento da Botoeira\n\n");
printf("Temos em andamento: %d Partes Superiores!\n", botoeiracsemandamento);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
corposuperior();
}

botemandamentoci()
{
    printf("\n\tCorpos Inferiores em Andamento da Botoeira\n\n");
printf("Temos em andamento: %d Partes Inferiores\n", botoeiraciemandamento);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
corpoinferior();
}

int botmateriaisci()
{
printf("\n\tMaterias Necessarios Para Montagem da Parte Inferior da Botoeira\n\n");
FILE *file;
file = fopen("botmateriaisci.txt", "r");
if(file == NULL){
    printf("Não foi possivel encontrar o arquivo.\n");
    system("pause");
}
int x;
char frase[100];
while(fgets(frase,100, file) != NULL){printf("%s", frase);}
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
corpoinferior();
}

int botmateriaiscs()
{
printf("\n\tMaterias Necessarios Para Montagem da Parte Superior da Botoeira\n\n");
FILE *file;
file = fopen("botmateriaiscs.txt", "r");
if(file == NULL){
    printf("Não foi possivel encontrar o arquivo.\n");
    system("pause");
}
int x;
char frase[100];
while(fgets(frase,100, file) != NULL){printf("%s", frase);}
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
corposuperior();

}

int botmateriaisb()
{
printf("\n\tMaterias Necessarios Para Montagem da Base da Botoeira\n\n");
FILE *file;
file = fopen("botmateriaisb.txt", "r");
if(file == NULL){
    printf("Não foi possivel encontrar o arquivo.\n");
    system("pause");
}
int x;
char frase[100];
while(fgets(frase,100, file) != NULL){printf("%s", frase);}
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
base();
}

int botprontosb()
{
    printf("\n\tBases Prontas da Botoeira\n\n");
printf("Temos prontas: %d Bases!\n", botoeirabprontas);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
base();
}

botprontoscs()
{
    printf("\n\tCorpos Superiores Prontos da Botoeira\n\n");
printf("Temos prontas: %d Partes Superiores!\n", botoeiracsprontos);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
corposuperior();
}

botprontosci()
{
    printf("\n\tCorpos Inferiores Prontos da Botoeira\n\n");
printf("Temos prontas: %d Partes Inferiores\n", botoeiraciprontos);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
corpoinferior();
}

registrarbase()
{
    int li=1,tecla;
        textcolor(7,0);
        system("cls");
        textcolor (WHITE, GREEN);  printf("\t\tOPERADORES\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t1 - HERIC\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t2 - LEONARDO\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t3 - VOLTAR\n");

    gotoxy(4,li);
        printf("->");
        gotoxy(79,24);
        do{
            tecla=0;
            if(kbhit()){
                tecla = getch();
                gotoxy(4,li);
                printf("  ");
                if(tecla==224)
                    tecla = getch();
                if(tecla == 72)
                    li--;
                else
                    if(tecla == 80)
                        li++;
                if(li > 3)
                    li=1;
                else
                    if(li < 1)
                        li=3;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            hericbase();
            break;
        case 2:
            leonardobase();
            break;
        case 3:
            base();
        }
}

basesregistradas()
{

FILE *file;
file = fopen("nserie_base.txt", "r");

if(file == NULL)
{
    printf("Erro na abertura do arquivo!");
    base();
}
char texto[200];

while (fgets(texto, 200, file) != NULL)
{
    printf("%s", texto);
}
fclose(file);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
base();
}

hericbase()
{
    FILE *pont_arq;
char nserie[20];

pont_arq = fopen("nserie_base.txt", "a+");

if(pont_arq == NULL)
{
    printf("Erro na abertura do arquivo!");
    return 1;
}
else{
printf("Escreva um numero de serie para gravacao: ");
scanf("%s",nserie);
fprintf(pont_arq, "\n %s - HERIC \n", nserie);
fclose(pont_arq);
printf("Dados gravados com sucesso!");
}

getch();
base();

}

leonardobase()
{
    FILE *pont_arq;
char nserie[20];

pont_arq = fopen("nserie_base.txt", "a+");

if(pont_arq == NULL)
{
    printf("Erro na abertura do arquivo!");
    return 1;
}
else{
printf("Escreva um numero de serie para gravacao: ");
scanf("%s",nserie);
fprintf(pont_arq, "\n %s - LEONARDO \n", nserie);
fclose(pont_arq);
printf("Dados gravados com sucesso!");
}

getch();
base();

}

registrarcs()
{
    int li=1,tecla;
        textcolor(7,0);
        system("cls");
        textcolor (WHITE, GREEN);  printf("\t\tOPERADORES\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t1 - HERIC\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t2 - LEONARDO\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t3 - VOLTAR\n");

    gotoxy(4,li);
        printf("->");
        gotoxy(79,24);
        do{
            tecla=0;
            if(kbhit()){
                tecla = getch();
                gotoxy(4,li);
                printf("  ");
                if(tecla==224)
                    tecla = getch();
                if(tecla == 72)
                    li--;
                else
                    if(tecla == 80)
                        li++;
                if(li > 3)
                    li=1;
                else
                    if(li < 1)
                        li=3;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            hericcs();
            break;
        case 2:
            leonardocs();
            break;
        case 3:
            corposuperior();
        }
}

csregistrados()
{

FILE *file;
file = fopen("nserie_corpo_superior.txt", "r");

if(file == NULL)
{
    printf("Erro na abertura do arquivo!");
    base();
}
char texto[200];

while (fgets(texto, 200, file) != NULL)
{
    printf("%s", texto);
}

fclose(file);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
corposuperior();
}

hericcs()
{
    FILE *pont_arq;
char nserie[20];

pont_arq = fopen("nserie_corpo_superior.txt", "a+");

if(pont_arq == NULL)
{
    printf("Erro na abertura do arquivo!");
    return 1;
}
else{
printf("Escreva um numero de serie para gravacao: ");
scanf("%s",nserie);
fprintf(pont_arq, "\n %s - HERIC \n", nserie);
fclose(pont_arq);
printf("Dados gravados com sucesso!");
}

getch();

}

leonardocs()
{
    FILE *pont_arq;
char nserie[20];

pont_arq = fopen("nserie_corpo_superior.txt", "a+");

if(pont_arq == NULL)
{
    printf("Erro na abertura do arquivo!");
    return 1;
}
else{
printf("Escreva um numero de serie para gravacao: ");
scanf("%s",nserie);
fprintf(pont_arq, "\n %s - LEONARDO \n", nserie);
fclose(pont_arq);
printf("Dados gravados com sucesso!");
}

getch();
corposuperior();

}

registrarci()
{
    int li=1,tecla;
        textcolor(7,0);
        system("cls");
        textcolor (WHITE, GREEN);  printf("\t\tOPERADORES\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t1 - HERIC\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t2 - LEONARDO\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t3 - VOLTAR\n");

    gotoxy(4,li);
        printf("->");
        gotoxy(79,24);
        do{
            tecla=0;
            if(kbhit()){
                tecla = getch();
                gotoxy(4,li);
                printf("  ");
                if(tecla==224)
                    tecla = getch();
                if(tecla == 72)
                    li--;
                else
                    if(tecla == 80)
                        li++;
                if(li > 3)
                    li=1;
                else
                    if(li < 1)
                        li=3;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            hericci();
            break;
        case 2:
            leonardoci();
            break;
        case 3:
            corpoinferior();
        }
}


ciregistrados()
{

FILE *file;
file = fopen("nserie_corpo_inferior.txt", "r");

if(file == NULL)
{
    printf("Erro na abertura do arquivo!");
    base();
}
char texto[200];

while (fgets(texto, 200, file) != NULL)
{
    printf("%s", texto);
}
fclose(file);
printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
corpoinferior();
}

hericci()
{
    FILE *pont_arq;
char nserie[20];

pont_arq = fopen("nserie_corpo_inferior.txt", "a+");

if(pont_arq == NULL)
{
    printf("Erro na abertura do arquivo!");
    return 1;
}
else{
printf("Escreva um numero de serie para gravacao: ");
scanf("%s",nserie);
fprintf(pont_arq, "\n %s - HERIC \n", nserie);
fclose(pont_arq);
printf("Dados gravados com sucesso!");
}

getch();
corpoinferior();

}

leonardoci()
{
    FILE *pont_arq;
char nserie[20];

pont_arq = fopen("nserie_corpo_inferior.txt", "a+");

if(pont_arq == NULL)
{
    printf("Erro na abertura do arquivo!");
    return 1;
}
else{
printf("Escreva um numero de serie para gravacao: ");
scanf("%s",nserie);
fprintf(pont_arq, "\n %s - LEONARDO \n", nserie);
fclose(pont_arq);
printf("Dados gravados com sucesso!");
}

getch();
corpoinferior();

}
