#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

void SelecionarMenuPrincipal(){
    int Opcao;
    do{
        system("cls");
        desenhaJanela();
        dicaDeTela("Digite um numero correspondente a opcao desejada ou 0 (ZERO) para SAIR");
        desenha(24,5,100,20);
        gotoxy(26,5);
        printf(" Teste de Logica ");
        gotoxy(26,7);
        printf("1 - Exercicio 1 ");
        gotoxy(26,8);
        printf("2 - Exercicio 2 ");
        gotoxy(26,9);
        printf("3 - Exercicio 3");
        gotoxy(26,10);
        printf("4 - Exercicio 4");
        gotoxy(26,11);
        printf("0 - Sair");
        gotoxy(24,21);
        printf("Selecione qual o tipo de operacao deseja realizar: ");
        scanf("%d",&Opcao);
        switch (Opcao){
            case 0:
                gotoxy(0,0);
                printf("ENCERRADO!");
                system("pause > NULL");
                break;
            case 1:
                Ex01();
                system("pause");
                system("cls");
                break;
            case 2:
                Ex02();
                system("pause");
                system("cls");
                break;
            case 3:
                Ex03();
                system("pause");
                system("cls");
                break;
            case 4:
                Ex04();
                system("pause");
                system("cls");
                break;
        }        
    }while (Opcao != 0);
}
#endif