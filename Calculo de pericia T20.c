#include <stdio.h>

//30 pericias
//Valor de Perícia = Metade do Nível + Atributo-chave + Bônus de Treinamento (se for treinado)*
//O bônus de treinamento é +2 do 1º ao 6º níveis, +4 do 7º ao 14º níveis e +6 do 15º nível em diante
/*** treinadas obrigatorias:
- ladinagem
- pilotagem
- Conhecimento
- Guerra
- Misticismo
- Nobreza
- oficio
- religiao
- adestramento
- atuacao
- jogatina ***/

int main()
{
    int nivel, metniv, bonus, treina, forca, des, con, intel, sab, car;
    
    printf("informe seu nivel: \n");
    scanf("%d", &nivel);
    
    if(nivel<=30 && nivel>0){
        if(nivel==1 || nivel==2 || nivel==3 || nivel==4 || nivel==5 || nivel==6){
            bonus= 2;
        }
        else if(nivel==7 || nivel==8 || nivel==9 || nivel==10 || nivel==11 || nivel==12 || nivel==13 || nivel==14){
            bonus= 4;
        }
        else{
            bonus = 6;
        }
    }
    else if(nivel<1 || nivel>30){
        printf("valor errado");
    }
    
    metniv= nivel/2;
    
    printf("informe sua forca, destreza, constituicao, inteligencia, sabedoria e carisma\n");
    scanf("%d%d%d%d%d%d", &forca, &des, &con, &intel, &sab, &car);
    
    printf("atributos de treinamento não obrigatório\n");
    printf("atributos de forca: \n");
    
    printf("voce eh treinado em atletismo? 1 = sim, 2 = nao ");
    scanf("%d", &treina);
    if(treina==1){
        printf("Atletismo: %d", metniv+forca+bonus);
    }
    else{
        printf("Atletismo: %d", metniv+forca);
    }
    printf("voce eh treinado em luta? 1 = sim, 2 = nao ");
    scanf("%d", &treina);
    if(treina==1){
        printf("Luta: %d", metniv+forca+bonus);
    }
    else{
        printf("Luta: %d", metniv+forca);
    }
    
    printf("DESTREZA -- digite 1 se voce eh treinado, digite 2 se voce não eh: ");
    char vet[8][20]= {"acrobacia", "cavalgar", "furtividade", "iniciativa", "ladinagem", "pilotagem", "pontaria", "reflexos"};
    printf("%c",vet);
    for(int i=0; i<8; i++){
        scanf("%d", &treina);
        if(treina==1){
            printf("%s %d\n", vet[i], metniv+des+bonus);
        }
        else if(treina==2){
            printf("%s %d", vet[i], metniv+des);
        }
    }
    
    
    
    

    return 0;
}