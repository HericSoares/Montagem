#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include "menu.h"


int corposuperior()
{
    int li=1,tecla;
    setlocale(LC_ALL,"");
        textcolor(7,0);
        system("cls");
        textcolor(WHITE,GREEN); printf("\t\tCORPO SUPERIOR\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t1 - PRONTOS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t2 - EM ANDAMENTO\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t3 - MATERIAIS NECESSARIOS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t4 - CORPOS SUPERIORES REGISTRADOS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t5 - REGISTRAR CORPO SUPERIOR\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t6 - VOLTAR\n");
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
                if(li > 6)
                    li=1;
                else
                    if(li < 1)
                        li=6;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            botprontoscs();
            break;
        case 2:
            botemandamentocs();
            break;
        case 3:
            botmateriaiscs();
            break;
        case 4:
            csregistrados();
            break;
        case 5:
            registrarcs();
            break;
        case 6:
            botoeira();

        }
    textcolor(7,0);

}

int corpoinferior()
{
    int li=1,tecla;
    setlocale(LC_ALL,"");
        textcolor(7,0);
        system("cls");
        textcolor (WHITE, GREEN);  printf("\t\tCORPO INFERIOR\n");
        textcolor (LIGHTGREEN, BLACK);  printf("\t1 - PRONTOS\n");
        textcolor (LIGHTGREEN, BLACK);  printf("\t2 - EM ANDAMENTO\n");
        textcolor (LIGHTGREEN, BLACK);  printf("\t3 - MATERIAIS NECESSARIOS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t4 - CORPOS INFERIORES REGISTRADOS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t5 - REGISTRAR CORPO INFERIOR\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t6 - VOLTAR\n");
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
                if(li > 6)
                    li=1;
                else
                    if(li < 1)
                        li=6;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            botprontosci();
            break;
        case 2:
            botemandamentoci();
            break;
        case 3:
            botmateriaisci();
            break;
        case 4:
            ciregistrados();
            break;
        case 5:
            registrarci();
            break;
        case 6:
            botoeira();

        }
    textcolor(7,0);

}

int base()
{
        int li=1,tecla;
    setlocale(LC_ALL,"");
        textcolor(7,0);
        system("cls");
        textcolor (WHITE, GREEN); printf("\t\tBASE\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t1 - PRONTAS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t2 - EM ANDAMENTO\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t3 - MATERIAIS NECESSARIOS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t4 - BASES REGISTRADAS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t5 - REGISTRAR BASE\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t6 - VOLTAR\n");
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
                if(li > 6)
                    li=1;
                else
                    if(li < 1)
                        li=6;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            botprontosb();
            break;
        case 2:
            botemandamentob();
            break;
        case 3:
            botmateriaisb();
            break;
        case 4:
            basesregistradas();
        case 5:
            registrarbase();
        case 6:
            botoeira();

        }
    textcolor(7,0);


}




int controladores()
{
int li=1,tecla;
    setlocale(LC_ALL,"");
        textcolor(7,0);
        system("cls");
        textcolor (WHITE, GREEN);  printf("\t\tCONTROLADORES\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t1 - GW1\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t2 - GW3\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t3 - GWBR\n");
        textcolor (LIGHTGREEN, BLACK);  printf("\t4 - VOLTAR\n");
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
                if(li > 4)
                    li=1;
                else
                    if(li < 1)
                        li=4;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            gw1();
            break;
        case 2:
            gw3();
            break;
        case 3:
            gwbr();
            break;
        case 4:
            main();

        }
    textcolor(7,0);


}


int botoeira()
{
    int li=1,tecla;
    setlocale(LC_ALL,"");
        textcolor(7,0);
        system("cls");
        textcolor (WHITE, GREEN);  printf("\t\tBOTOEIRA\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t1 - BASE\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t2 - CORPO SUPERIOR\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t3 - CORPO INFERIOR\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t4 - BOTOEIRAS PRONTAS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t5 - MATERIAIS GERAIS\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t6 - VOLTAR");
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
                if(li > 6)
                    li=1;
                else
                    if(li < 1)
                        li=6;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            base();
            break;
        case 2:
            corposuperior();
            break;
        case 3:
            corpoinferior();
            break;
        case 4:
            botoeirasprontas();
            break;
        case 5:
             botmateriaisgerais();
            break;
        case 6:
            main();


        }
    textcolor(7,0);

}


int caixasmm()
{
setlocale (LC_ALL, "Portuguese");
        textcolor (WHITE, GREEN); printf("\n\tCAIXAS SMM\n\n");
        textcolor (LIGHTGREEN, BLACK); printf("Em Manutenção!\n");
        printf("\nPressione qualquer tecla para voltar\n");
char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
main();

}


int main()
{
    setlocale(LC_ALL,"");
    int li=1,tecla;
        textcolor(7,0);
        system("cls");
        textcolor (WHITE, GREEN);  printf("\t\tGREENWAVE\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t1 - CONTROLADORES\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t2 - BOTOEIRA\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t3 - CAIXA SMM\n");
        textcolor (LIGHTGREEN, BLACK); printf("\t4 - SAIR\n");
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
                if(li > 4)
                    li=1;
                else
                    if(li < 1)
                        li=4;
                gotoxy(4,li);
                printf("->");
                gotoxy(79,24); /* se não quiser que cursor fique piscando ali */
            }
        }while(tecla != 13);
        system("cls");
        switch(li){
        case 1:
            controladores();
            break;
        case 2:
            botoeira();
            break;
        case 3:
            caixasmm();
            break;
        case 4:
            return 0;

        }

    textcolor(7,0);
    return 0;
}

