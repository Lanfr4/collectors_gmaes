/*#include<stdio.h>
#include<stdlib.h>
#include<windows.h>*/
/*
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}*/
int main(){
    // fare e stampare  il campo da gioco;
    // dimensioni 6* 7 caselle per i idschi ;
    // in c DOVREBBE ESSERE  15 * 13;  
    /*
    

  ______                    _  _   
 |  ____|                  | || |  
 | |__ ___  _ __ ______ _  | || |_ 
 |  __/ _ \| '__|_  / _` | |__   _|
 | | | (_) | |   / / (_| |    | |  
 |_|  \___/|_|  /___\__,_|    |_|  
                                   
                                                                                                                                 
*/
    int  i; 
    char play1;
	char  play2;
    printf("Giocatore 1 decidi se usare *  premendo 1 oppure usare #  premendo 2\n");
    scanf("%d", &i);

    if(i== 1){
        play1 = '*';
        play2 = '#';
    }
    else{
        play1 = '#';
        play2 = '*';
    }
    printf("%c%c\n\n", play1, play2);

    // stampa del campo da gioco
    printf("");
    printf("\n\n\n");

}
