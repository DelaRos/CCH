#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

#define MAX 100

//VARIÁVEIS GLOBAIS.
    int contsair=0;
    float spargewater=0;
    float calciomash=0;
    float magnesiomash=0;
    float sodiomash=0;
    float chloridemash;
    float sulfatomash;
    float ratio;
    float calcio;
    float magnesio;
    float sodio;
    float chloride;
    float sulfato;
    float bicarbonado=0;

    float part2=0;
    float effectivealkalinity=0;
    float chalk=0;
    float bakingsoda=0;
    float slakedlime=0;
    float gypsum=0;
    float calcchloride=0;
    float epsomsalt=0;
    float acidolactico=88; // unico em ml;
    float acidolacticocont=0;
    float malteacidificado=0;
    float malteacidificadocont=2;
    float malteacidificadooz=0;
    float mashwatergallon=0;
    float mashwater=0;
    float residualalkalinity=0;
    float phfinal=0;

    float totalgrain;
    float totalgrainlbs;
    float base2phkg=0;
    float base3phkg=0;
    float MarisOtterphkg=0;
    float Munichphkg=0;
    float Pilsnerphkg=0;
    float Wheatphkg=0;
    float Viennaphkg=0;
    float Otherphkg=0;
    float Crystal_Maltphkg=0;
    float Toasted_Maltphkg=0;

//VARIÁVEIS GLOBAIS

//MULTIPLICADORES pH.
    float base2ph= 5.7 ;
    float base3ph = 5.79 ;
    float MarisOtterph = 5.77 ;
    float Munichph = 5.43 ;
    float Pilsnerph = 5.75 ;
    float Wheatph = 6.04 ;
    float Viennaph = 5.56 ;
    float Otherph = 5.70 ;
    float Crystal_Maltph = 5.22 ;
    float Toasted_Maltph = 4.71 ;
//MULTIPLICADORES pH.



int cont;
struct cadastra{
    int codigop,codigof,quantidade;
    char nome[30];

    float volume;
    float concentracao;

    float base2;
    float base3;
    float MarisOtter;
    float Munich;
    float Pilsner;
    float Wheat;
    float Vienna;
    float Other;
    float Crystal_Malt;
    float Toasted_Malt;

};

struct cadastra cad;
int quantp=0;


void menu(struct cadastra novosElementos,int opicao){

    int op;
    system(cls);


        printf("MENU DE OPÇÃO\n");
        printf("1 - Cadastrar\n");
        printf("2 - Buscar\n");
        printf("3 - Alterar\n");
        printf("4 - Remover\n");
        printf("5 - Finalizar\n");
        printf("Digite o numero da opção desejada \n");
        scanf("%d",&opicao);

        system("CLS");


        switch(opicao){
            case 1:
                novoProduto=leDados();

                break;

            case 2:
                buscar();
                break;

            case 3:
                alterar();
                break;

            case 4:
            	remover();
            	break;

            case 5:
                printf("Obrigado!\n");
                break;

            default:
                printf("Opção inválida!\nTente novamente:\n");
                break;
    }//switch

    if(opicao!=5){
        return menu();
    }else(
          return 0;
          )




}



struct cadastra leDados(){
    char xx;
    int w,i,c,op;


        printf("Insira a quantidade de Calcio em ppm:");
        scanf("%f",&calcio);
        fflush(stdin);

        printf("Insira a quantidade de magnesio em ppm:");
        scanf("%f",&magnesio);
        fflush(stdin);

        printf("Insira a quantidade de sodio em ppm:");
        scanf("%f",&sodio);
        fflush(stdin);

        printf("Insira a quantidade de cloreto em ppm:");
        scanf("%f",&chloride);
        fflush(stdin);

        printf("Insira a quantidade de Sulfato em ppm:");
        scanf("%f",&sulfato);
        fflush(stdin);

        printf("Insira a quantidade de bicarbonato em ppm:");
        scanf("%f",&bicarbonado);
        fflush(stdin);

        printf("\n\n\n");

        printf("Insira a quantidade de Mash Water:");
        scanf("%f",&mashwater);
        fflush(stdin);

        printf("Insira a quantidade de Sparge Water:");
        scanf("%f",&spargewater);
        fflush(stdin);

        printf("\n\n\n");

        printf("Insira as proximas informações em gramas!\n");
        printf("Insira a quantidade de Sulfato de Calcio:");
        scanf("%f",&gypsum);
        fflush(stdin);


        printf("Insira a quantidade de Cloreto de Calcio:");
        scanf("%f",&calcchloride);
        fflush(stdin);

        printf("Insira a quantidade de Sulfato de Magnesio:");
        scanf("%f",&epsomsalt);
        fflush(stdin);

        printf("Insira a quantidade de malte acidificado:");
        scanf("%f", &acidolactico);
        fflush(stdin);

        printf("Insira a quantidade de acido lactico(em mL):");
        scanf("%f",&acidolactico);
        fflush(stdin);

        printf("\n\n\n");

        printf("Insira a quantidade de Hidroxido de calcio:");
        scanf("%f",&slakedlime);
        fflush(stdin);


        printf("Insira a quantidade de Bicarbonato de sódio:");
        scanf("%f",&bakingsoda);
        fflush(stdin);


        printf("Insira a quantidade de Carbonato de Calcio:");
        scanf("%f",&chalk);
        fflush(stdin);

    do{
        xx='s';
        fflush(stdin);
        printf("\tMENU\nEscolha qual grão deseja inserir a quantidade em Kg.\n");
        printf("\n-""1"" Para inserir ""base 2"". ");
        printf("\n-""2"" Para inserir ""base 3"". ");
        printf("\n-""3"" Para inserir ""Maris Otter"". ");
        printf("\n-""4"" Para inserir ""Munich"". ");
        printf("\n-""5"" Para inserir ""Pilsner"". ");
        printf("\n-""6"" Para inserir ""Wheat"". ");
        printf("\n-""7"" Para inserir ""Vienna"". ");
        printf("\n-""8"" Para inserir ""Other"". ");
        printf("\n-""9"" Para inserir ""Crystal Malt"". ");
        printf("\n-""10"" Para inserir ""Toasted Malt"". ");
        printf("\n: ");

        scanf("%i", &op);
        fflush(stdin);

        switch(op){

        case 1:
            printf("\nInsira a quantidade de Base 2 em Kg: ");
            scanf("%f", &cad.base2);
            fflush(stdin);



            break;

        case 2:
            printf("\nInsira a quantidade de Base 3 em Kg: ");
            scanf("%f", &cad.base3);
            fflush(stdin);



            break;

        case 3:
            printf("\nInsira a quantidade de Maris Otter em Kg: ");
            scanf("%f", &cad.MarisOtter);
            fflush(stdin);

            break;

        case 4:

            printf("\nInsira a quantidade de Munich em Kg: ");
            scanf("%f", &cad.Munich);
            fflush(stdin);

            break;

        case 5:

            printf("\nInsira a quantidade de Pilsner em Kg: ");
            scanf("%f", &cad.Pilsner);
            fflush(stdin);

            break;

        case 6:

            printf("\nInsira a quantidade de Wheat em Kg: ");
            scanf("%f", &cad.Wheat);
            fflush(stdin);

            break;

        case 7:

            printf("\nInsira a quantidade de Vienna em Kg: ");
            scanf("%f", &cad.Vienna);
            fflush(stdin);


            break;

        case 8:

            printf("\nInsira a quantidade de Other em Kg: ");
            scanf("%f", &cad.Other);
            fflush(stdin);


            break;

        case 9:

            printf("\nInsira a quantidade de Crystal Malt em Kg: ");
            scanf("%f", &cad.Crystal_Malt);
            fflush(stdin);

            break;

        case 10:

            printf("\nInsira a quantidade de Toasted Malt em Kg: ");
            scanf("%f", &cad.Toasted_Malt);
            fflush(stdin);


            break;

        default:
            printf("\nOpção inválida, digite novamente.\n\n");
            break;
        }//switch


        w=1;

        fflush(stdin);

        printf("Quer adicionar mais um produto ? (s/n).\n\n");

        scanf("%c",&xx);
        fflush(stdin);

    }while(xx=='s');


        mashwatergallon = mashwater/3.785412;
        malteacidificadooz = malteacidificado/28.34952;


    calciomash = calcio + (chalk*105.89 + gypsum*60 + calcchloride*72 + slakedlime*143)/mashwatergallon;
    magnesiomash = magnesio + (epsomsalt*24.6)/mashwatergallon;
    sodiomash = sodio + bakingsoda*72.3/mashwatergallon;
    chloridemash = chloride + calcchloride*127.47/mashwatergallon;
    sulfatomash = sulfato + (gypsum*147.4+epsomsalt*103)/mashwatergallon;
    ratio = chloride/sulfato;


    do{

    do{
    contsair=0;
    if(calciomash<50 || calciomash > 150){
                                            do{

    calciomash = calcio + (chalk*105.89 + gypsum*60 + calcchloride*72 + slakedlime*143)/mashwatergallon;
    printf("fora da recomendação de Calcio (50-150), valor atual %.2f\n",calciomash);


    printf("Escolha qual deseja alterar o valor:\n");
        printf("1 - Sulfato de Calcio\n2 - Cloreto de Calcio\n");
        printf("3 - Hidroxido de Calcio\n4 - Carbonato de Cálcio\n");
        int escolha1;
        scanf("%i",&escolha1);
        fflush(stdin);

        switch(escolha1){

        case 1:
            scanf("%f",&gypsum);
            fflush(stdin);
            break;

        case 2:
            scanf("%f",&calcchloride);
            fflush(stdin);
            break;

        case 3:
            scanf("%f",&slakedlime);
            fflush(stdin);
            break;

        case 4:
            scanf("%f",&chalk);
            fflush(stdin);
            break;

        default:
            printf("Valor invalido\n");
            break;

                    }//switch
                                                }while (calciomash<50 || calciomash > 150);
                                        }//if
                                        contsair++;
    do{
    if(magnesiomash<10 || magnesiomash>30){

    do{
    magnesiomash = magnesio + (epsomsalt*24.6)/mashwatergallon;
    printf("Fora da recomendação de magnesio (10-30, valor atual %.2f\n",magnesiomash);
    printf("Alterar a quantidade de Sulfato de magnesio para:");
    scanf("%f",&epsomsalt);
    fflush(stdin);

    }while (magnesiomash<10 || magnesiomash>30);
                                        }//if
                                        contsair++;

    if(sodiomash<0 || sodiomash>150){

    do{
    sodiomash = sodio + bakingsoda*72.3/mashwatergallon;
    printf("Fora da recomendação Sodio (0 - 150),valor atual %.2f\n",sodiomash);
    printf("Alterar a quantidade de bicarbonato de sódio para:");
    scanf("%f",&bakingsoda);
    fflush(stdin);
    }while(sodiomash<0 || sodiomash>150);
                                    }//if
                                    contsair++;

    if(chloridemash<0 || chloridemash > 250){
    do{
        chloridemash = chloride + calcchloride*127.47/mashwatergallon;
        printf("Fora da recomendação Cloreto (0 - 250), valor atual %.2f\n",chloridemash);
        printf("Alterar a quantidade de Cloreto de Calcio para:");
        scanf("%f",&calcchloride);
        fflush(stdin);

    }while (chloridemash<0 || chloridemash > 250);
                                            }//if
                                            contsair++;


    if(sulfatomash < 50 || sulfatomash > 350){
    do{
        sulfatomash = sulfato + (gypsum*147.4+epsomsalt*103)/mashwatergallon;
        printf("Fora da recomendação Sulfato (50 - 350), valor atual %.2f\n",sulfatomash);
        printf("Escolha qual deseja alterar o valor:\n");
        printf("1 - Sulfato de Calcio\n2 - Sulfato de Magnesio\n");
        int escolha;
        scanf("%i",&escolha);
        fflush(stdin);

        switch(escolha)
        {
        case 1:
            scanf("%f",&gypsum);
            fflush(stdin);
            break;

        case 2:

            scanf("%f",&epsomsalt);
            fflush(stdin);
            break;

        default:
            printf("Valor invalido\n");
            break;
        }//switch


    }while (sulfatomash < 50 || sulfatomash > 350);
                                                    }//if
                                                    contsair++;



    ratio = chloride/sulfato;
    if(sulfato==0){

        printf("\nerro\n");
        exit(1);
    }else{
    printf("Ratio = %.2f\n",ratio);
    break;
    }

    }while (sulfatomash>  50 || sulfatomash > 350 || sulfatomash < 50 || sulfatomash > 350 || chloridemash<0 || chloridemash > 250 ||
             chloridemash<0 || chloridemash > 250 || magnesiomash<10 || magnesiomash>30);

    totalgrain = (cad.base2+cad.base3+cad.MarisOtter+cad.Munich+cad.Pilsner+cad.Wheat+cad.Vienna+cad.Other+cad.Crystal_Malt+cad.Toasted_Malt);
    totalgrainlbs = (totalgrain*2.20462);




    part2 = ((chalk*130+((bakingsoda*157)-176.1))*(acidolactico)*(malteacidificado)*(2-4160.4)*
    (malteacidificadocont)*(2.5+slakedlime*357) / mashwatergallon);

    effectivealkalinity = (bicarbonado*2+part2);

    residualalkalinity = (effectivealkalinity) - ((calciomash/1.4)+(magnesiomash/1.7));

    phfinal = (base2phkg+base3phkg+MarisOtterphkg+Munichphkg+Pilsnerphkg+Wheatphkg+
    Viennaphkg+Otherphkg+Crystal_Maltphkg+Toasted_Maltphkg)/ (totalgrain)+(0.1085*mashwatergallon/totalgrainlbs+0.013)*(residualalkalinity/50);

    if(phfinal > 5.6) {
    printf("O ph esta acima de 5.6, adicionar acido lactico ou malte acidificado e de acido lactico para diminuir\n");
    printf("Insira a quantidade de malte acidificado:");
    scanf("%f", &acidolactico);
    fflush(stdin);
    printf("Insira a quantidade de acido lactico(em mL):");
    scanf("%f",&acidolactico);
    fflush(stdin);
    printf("Ph = %.2f", phfinal);


                        }//if

    }while( phfinal < 5.4 || phfinal > 5.6 );





    printf("effective alkalinity %.2f",effectivealkalinity);
    printf("Residual alkalinity %.f2",residualalkalinity);
    printf("o ph da água ficará de %.2f",phfinal);

    system("CLS");


}//ENTRADA DE DADOS CADASTRO.


void buscar(){

    int i,opica,n=0;
    char nome[30];


        do{
            printf("MENU DE BUSCA\n");
            printf("1- Mostrar lista de produtos\n");
            printf("2- Busca individual\n");
            printf("-1- Sair do menu busca\n");
            printf("Digite o numero da opção desejada \n");
            scanf("%d",&opica);

            system("CLS");

            switch(opica){
                case 1:

                    printf("Lista das quantidades: \n");

                    if(cad.base2!=0){
                        printf("Produto: Base 2 \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.base2);
                        printf("+++++++++++++++++++++++\n");
                                            }//if

                        if(cad.base3!=0){
                        printf("Produto: Base 3 \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.base3);
                        printf("+++++++++++++++++++++++\n");
                                                }//if

                        if(cad.MarisOtter!=0){
                        printf("Produto: Maris Otter \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.MarisOtter);
                        printf("+++++++++++++++++++++++\n");
                                                    }//if

                        if(cad.Munich!=0){
                        printf("Produto: Munich\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Munich);
                        printf("+++++++++++++++++++++++\n");
                                                }//if

                        if(cad.Pilsner!=0){
                        printf("Produto: Pilsner\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Pilsner);
                        printf("+++++++++++++++++++++++\n");
                                                    }//if

                        if(cad.Wheat!=0){
                        printf("Produto: Wheat\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Wheat);
                        printf("+++++++++++++++++++++++\n");
                                                }//if

                        if(cad.Vienna!=0){
                        printf("Produto: Vienna\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Vienna);
                        printf("+++++++++++++++++++++++\n");
                                                }//if

                        if(cad.Other!=0){
                        printf("Produto: Other\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Other);
                        printf("+++++++++++++++++++++++\n");
                                                        }//if

                        if(cad.Crystal_Malt!=0){
                        printf("Produto: Crystal Malt\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Crystal_Malt);
                        printf("+++++++++++++++++++++++\n");
                                                        }//if

                        if(cad.Toasted_Malt!=0){
                        printf("Produto: Toasted Malt\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Toasted_Malt);
                        printf("+++++++++++++++++++++++\n");
                                                        }//if
                        printf("\n\n\n");

                    break;

                case 2:
                    printf("Digite o Número do produto: \n");
                    printf("\n-""1"" ""base 2"". ");
                    printf("\n-""2"" ""base 3"". ");
                    printf("\n-""3"" ""Maris Otter"". ");
                    printf("\n-""4"" ""Munich"". ");
                    printf("\n-""5"" ""Pilsner"". ");
                    printf("\n-""6"" ""Wheat"". ");
                    printf("\n-""7"" ""Vienna"". ");
                    printf("\n-""8"" ""Other"". ");
                    printf("\n-""9"" ""Crystal Malt"". ");
                    printf("\n-""10"" ""Toasted Malt"". ");
                    printf("\n: ");
                    scanf("%i",&n);
                    fflush(stdin);

                        switch(n){
                        case 1:
                        printf("Produto: Base 2 \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.base2);
                        printf("+++++++++++++++++++++++\n");
                                break;
                        case 2:
                        printf("Produto: Base 3 \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.base3);
                        printf("+++++++++++++++++++++++\n");
                                break;

                        case 3:
                        printf("Produto: Maris Otter \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.MarisOtter);
                        printf("+++++++++++++++++++++++\n");
                                break;

                        case 4:
                        printf("Produto: Munich \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Munich);
                        printf("+++++++++++++++++++++++\n");
                                break;

                        case 5:
                        printf("Produto: Pilsner\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Pilsner);
                        printf("+++++++++++++++++++++++\n");
                                break;
                        case 6:
                        printf("Produto: Wheat \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Wheat);
                        printf("+++++++++++++++++++++++\n");
                                break;

                        case 7:
                        printf("Produto: Vienna \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Vienna);
                        printf("+++++++++++++++++++++++\n");
                                break;

                        case 8:
                        printf("Produto: Other\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Other);
                        printf("+++++++++++++++++++++++\n");
                                break;

                        case 9:
                        printf("Produto: Crystal Malt\n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Crystal_Malt);
                        printf("+++++++++++++++++++++++\n");
                                break;

                        case 10:
                        printf("Produto: Toasted Malt \n");
                        printf("+++++++++++++++++++++++\n");
                        printf("%.2fKg\n",cad.Toasted_Malt);
                        printf("+++++++++++++++++++++++\n");
                                break;

                        default:
                            printf("\nOpção inválida, digite novamente.");
                                break;
                                }//switch

                    break;

                case -1:
                    printf("\n\nSaiu do menu de busca.");

                    break;
        }//switch
        n=0;
        }while(opica!=-1);

        system("CLS");
}//buscar

void alterar (){

char xx;
    int w,i,c,op;

    do{
        xx='n';
        fflush(stdin);
        printf("\nEscolha qual produto deseja alterar.\n");
        printf("\n-""1"" Para inserir ""base 2"". ");
        printf("\n-""2"" Para inserir ""base 3"". ");
        printf("\n-""3"" Para inserir ""Maris Otter"". ");
        printf("\n-""4"" Para inserir ""Munich"". ");
        printf("\n-""5"" Para inserir ""Pilsner"". ");
        printf("\n-""6"" Para inserir ""Wheat"". ");
        printf("\n-""7"" Para inserir ""Vienna"". ");
        printf("\n-""8"" Para inserir ""Other"". ");
        printf("\n-""9"" Para inserir ""Crystal Malt"". ");
        printf("\n-""10"" Para inserir ""Toasted Malt"". ");
        printf("\n: ");

        scanf("%i", &op);
        fflush(stdin);

        switch(op){

        case 1:
            printf("\nInsira a nova quantidade de Base 2 em Kg: ");
            scanf("%f", &cad.base2);
            fflush(stdin);



            break;

        case 2:
            printf("\nInsira a nova quantidade de Base 3 em Kg: ");
            scanf("%f", &cad.base3);
            fflush(stdin);



            break;

        case 3:
            printf("\nInsira a nova quantidade de Maris Otter em Kg: ");
            scanf("%f", &cad.MarisOtter);
            fflush(stdin);

            break;

        case 4:

            printf("\nInsira a nova quantidade de Munich em Kg: ");
            scanf("%f", &cad.Munich);
            fflush(stdin);

            break;

        case 5:

            printf("\nInsira a nova quantidade de Pilsner em Kg: ");
            scanf("%f", &cad.Pilsner);
            fflush(stdin);

            break;

        case 6:

            printf("\nInsira a nova quantidade de Wheat em Kg: ");
            scanf("%f", &cad.Wheat);
            fflush(stdin);

            break;

        case 7:

            printf("\nInsira a nova quantidade de Vienna em Kg: ");
            scanf("%f", &cad.Vienna);
            fflush(stdin);


            break;

        case 8:

            printf("\nInsira a nova quantidade de Other em Kg: ");
            scanf("%f", &cad.Other);
            fflush(stdin);


            break;

        case 9:

            printf("\nInsira a nova quantidade de Crystal Malt em Kg: ");
            scanf("%f", &cad.Crystal_Malt);
            fflush(stdin);

            break;

        case 10:

            printf("\nInsira a nova quantidade de Toasted Malt em Kg: ");
            scanf("%f", &cad.Toasted_Malt);
            fflush(stdin);


            break;

        default:
            printf("\nOpção inválida, digite novamente.\n\n");
            break;
        }//switch


        w=1;

        fflush(stdin);

        printf("Quer alterar mais um produto ?:(S/N).\n\n");

        scanf("%c", &xx);

    }while(xx=='s');
        system("CLS");


system("CLS");
}//alterar

void remover () {    			// Função remover

	int i=0,n=0;

	fflush(stdin);

    do{
    printf("Digite o número do produto que deseja remover: ");
    printf("\n-""1"" ""base 2"". ");
    printf("\n-""2"" ""base 3"". ");
    printf("\n-""3"" ""Maris Otter"". ");
    printf("\n-""4"" ""Munich"". ");
    printf("\n-""5"" ""Pilsner"". ");
    printf("\n-""6"" ""Wheat"". ");
    printf("\n-""7"" ""Vienna"". ");
    printf("\n-""8"" ""Other"". ");
    printf("\n-""9"" ""Crystal Malt"". ");
    printf("\n-""10"" ""Toasted Malt"". ");
    printf("\n-""11"" Para sair do menu. ");
    scanf("%i",&n);
    fflush(stdin);

	    switch(n){

            case 1:

            cad.base2=0;
            printf("\nA quantidade de base 2 é igual a: %.2f\n",cad.base2);

            break;

            case 2:

            cad.base3=0;
            printf("\nA quantidade de base 3 é igual a: %.2f\n",cad.base3);


            break;

            case 3:

            cad.MarisOtter=0;
            printf("\nA quantidade de base2 é igual a: %.2f\n",cad.MarisOtter);

            break;

            case 4:

            cad.Munich=0;
            printf("\nA quantidade de Munich é igual a: %.2f\n",cad.Munich);

            break;

            case 5:

            cad.Pilsner=0;
            printf("\nA quantidade de Pilsner é igual a: %.2f\n",cad.Pilsner);

            break;

            case 6:

            cad.Wheat=0;
            printf("\nA quantidade de Wheat é igual a: %.2f\n",cad.Wheat);

            break;

            case 7:

            cad.Vienna=0;
            printf("\nA quantidade de Vienna é igual a: %.2f\n",cad.Vienna);


            break;

            case 8:

            cad.Other=0;
            printf("\nA quantidade de Other é igual a: %.2f\n",cad.Other);


            break;

            case 9:

            cad.Crystal_Malt=0;
            printf("\nA quantidade de Crystal Malt é igual a: %.2f\n",cad.Crystal_Malt);

            break;

            case 10:

            cad.Toasted_Malt=0;
            printf("\nA quantidade de Toasted Malt é igual a: %.2f\n",cad.Toasted_Malt);

            break;

            case 11:
            printf("\nSaiu.");
                i++;
                break;

            default:
                printf("\nOpção inválida, digite novamente.");
            break;
	    }//switch

            }while(i==0);



}//remover

int main (){
setlocale(LC_ALL,"");
     int opicao;


    FILE *ARQUIVO;
    ARQUIVO = fopen ("README.txt", "w");
    if (ARQUIVO == NULL) {
       printf ("Houve um erro ao abrir o arquivo.\n");
       return 1;
    }//if
    printf ("Arquivo README criado com sucesso.\n");
    ////teste .txt

    struct cadastra novoProduto;

    menu(cadastra novoProduto, opicao);

    system("PAUSE");
return 0;
}//main
