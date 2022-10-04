#ifndef EXERCICIOS_H_INCLUDED
#define EXERCICIOS_H_INCLUDED

void Ex01(){
    system("cls");
    int num;

    printf("Por favor, informe a tabuada que voce deseja (0 a 10): ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", num, i, num * i);
    }
}
void Ex02(){//Pode trocar int por double/float, usado int apenas para teste mais rapidos 
    system("cls");
    int numVendas, i, valoresV, diferenca, maior, menor;
    printf("Por favor, informe a quantidade de vendas: ");
    scanf("%d", &numVendas);

    printf("Digite os valores: ");

    for (i=numVendas; i > 0; i-- ){
        scanf("%d", &valoresV);

        if( i == numVendas){
            maior = valoresV;
            menor = valoresV;
        }
        if (valoresV > maior){
            maior = valoresV;
        }
        if(valoresV < menor){
            menor = valoresV;
        }
    }
    diferenca = (maior - menor);
    printf("Maior valor: R$: %d\n", maior);
    printf("Menor valor: R$: %d\n", menor);
    printf("A diferenca: R$: %d\n", diferenca);
}



void Ex03(){ //POSSIVEL FAZER COM SISTEMAS DE ARQUIVOS 
    system("cls");
    int num, i, encontrar=0;
    char nomes[5][20],nome_P[1][20];
    do{
        printf("Quantos clientes serao cadastrados(1 a 20): ");
        scanf("%d", &num);
    }while(num < 1 || num > 20); //Sendo 5 folhas e 4 linhas, considerando que 1 cliente por linhha, = 20

    for(i = 0; i < num; i++)
    {
        printf("Insira o %d nome: ",i+1);
        fflush(stdin);
        scanf("%s", nomes[i]);
    }
    printf("====================================");
    printf("\nPesquisar\n");
    printf("Insira no mome que deseja procurar: ");
    fflush(stdin);
    gets(nome_P);
    i=0;

    while (i < num && encontrar ==0)
    {
        if (strcmp(nomes[i],nome_P[0])==0)// Comparar string 
        {
            encontrar = 1;
            break;
        }
        i++;
    }
    if (encontrar ==1)
    {
        printf ("Nome encontrado\n");
    }
    else
    {
        printf ("Nome não encontrado\n");
    }
    

}
void Ex04(){
    system("cls");
    char nomeproduto[100];
    int qntd;
    float precount, total = 0, totaldesconto =  0;
    printf("Digite o nome do produto:");
    scanf("%s", nomeproduto);
    printf("Entre com a quantidade comprada:");
    scanf("%d",&qntd);
    printf("Preço unitario: ");
    scanf("%f", &precount);
    total = qntd * precount;

    if(qntd <=5){
        totaldesconto = total - (total * 2/100);
    }
    if(qntd > 5 && qntd <= 10){
        totaldesconto = total - (total * 3/100);
    }
    if(qntd > 10){
        totaldesconto = total - (total * 5/100);
    }
    
    printf("Total com desconto: %f\n", totaldesconto);
}

#endif 