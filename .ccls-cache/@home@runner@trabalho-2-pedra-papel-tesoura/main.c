#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main() {
 int escolha, aleatorio, fim;
 do{
 printf(" voce escolhe 0-PEDRA, 1-PAPEL, 2-TESOURA, 3-LAGARTO OU 4-SPOCK ?  ");
 scanf("%d", &escolha); //adicionei lagarto e spock nas opicoes
 while(escolha>4||escolha<0){ //mudei o limite de escolha>2 para escolha>4
 	 printf(" voce escolhe 0-PEDRA, 1-PAPEL, 2-TESOURA, 3-LAGARTO OU 4-SPOCK ?  ");
	 scanf("%d", &escolha); 
 }
 
 srand( time(NULL) ); //semente do numero aleatório
 aleatorio = rand()%5;// mudei de 3 para 5, para gerar numeros de 0 a 4
 printf(" voce:%d \n computador:%d\n", escolha, aleatorio); //gera números de 0 a 2
 
 if(escolha==0&&aleatorio==0){
  printf(" voce:PEDDRA X computador:PEDRA \n");
	printf(" empate ");
 }
 else{
 	if(escolha==1&&aleatorio==1){
    printf(" voce:PAPEL X computador:PAPEL \n");
 		printf(" empate ");
	 }
	 else{
	 	if(escolha==2&&aleatorio==2){
      printf(" voce:TESOURA X computador:TESOURA\n");
      printf(" empate ");
	 }
	 else{
	 	if(escolha==0&&aleatorio==1){
      printf(" voce:PEDRA X computador:PAPEL \n");
 		  printf(" computador ganhou! ");
	 }
	 else{
	 	if(escolha==1&&aleatorio==0){
      printf(" voce: PAPEL X computador: PEDRA \n");
  		printf(" voce ganhou! "); /*escolhe 0-PEDRA, 1-PAPEL OU 2-TESOURA ?*/
	 }
	 else{
	 	if(escolha==0&&aleatorio==2){
      printf(" voce: PEDRA X computador: TESOURA \n");
 		  printf(" voce ganhou! ");
	 }
	 else{
	 	if(escolha==2&&aleatorio==0){
      printf(" voce: TESOURA X computador: PEDRA \n");
 	  	printf(" computador ganhou! ");
	 }
	 else{
	 	if(escolha==1&&aleatorio==2){
      printf(" voce: PAPEL X computador: TESOURA \n");
 	  	printf(" computador ganhou! ");
	 }
	 else{
	 	if(escolha==2&&aleatorio==1){
      printf(" voce: TESOURA X computador: PAPEL \n");
 		  printf(" voce ganhou! ");
	 }
      /*novas combinacoes  0-PEDRA, 1-PAPEL, 2-TESOURA, 3-LAGARTO OU 4-SPOCK*/
    else{
    if(escolha==3 && aleatorio==3 ){
      printf(" voce: LAGARTO X computador: LAGARTO \n");
 		  printf(" empate! ");
   }  
   else{
    if(escolha==0 && aleatorio==3 ){
      printf(" voce: PEDRA X computador: LAGARTO \n");
 		  printf(" voce ganhou! ");
   }
   else{
    if(escolha==3 && aleatorio==0 ){
      printf(" voce: LAGARTO X computador: PEDRA \n");
 		  printf(" computador ganhou! ");
   }
   else{
     if(escolha==3 && aleatorio==4 ){
      printf(" voce: LAGARTO X computador: SPOCK \n");
 		  printf(" voce ganhou! ");
  }
  else{
    if(escolha==4 && aleatorio==3 ){
      printf(" voce: SPOCK X computador: LAGARTO \n");
 		  printf(" computador ganhou! ");
  }
    else{
      if(escolha==4 && aleatorio==2 ){
        printf(" voce: SPOCK X computador: TESOURA \n");
 		    printf(" voce ganhou! ");
    }
    else{
      if(escolha==2 && aleatorio==4 ){
        printf(" voce: TESOURA X computador: SPOCK \n");
 		    printf(" computador ganhou! ");
    }
    else{
      if(escolha==2 && aleatorio==3 ){
        printf(" voce: TESOURA X computador: LAGARTO \n");
 		    printf(" voce ganhou! ");
    }
    else{
      if(escolha==3 && aleatorio==2 ){
        printf(" voce: LAGARTO X computador: TESOURA \n");
 		    printf(" computador ganhou! ");
    }                      
    else{
      if( escolha== 3 && aleatorio== 1){
        printf(" voce: LAGARTO X computador: PAPEL \n");
 		    printf(" voce ganhou! ");
    }
    else{
      if( escolha== 1 && aleatorio== 3){
        printf(" voce: PAPEL X computador: LAGARTO \n");
 		    printf(" computador ganhou! ");
    }
    else{
      if( escolha== 1 && aleatorio== 4){
        printf(" voce: PAPEL X computador: SPOCK \n");
 		    printf(" voce ganhou! ");
    }
    else{
      if( escolha== 4 && aleatorio== 1){
        printf(" voce: SPOCK X computador: PAPEL \n");
 		    printf(" computador ganhou! ");
    }
    else{
      if( escolha== 4 && aleatorio== 0){
        printf(" voce: SPOCK X computador: PEDRA \n");
 		    printf(" voce ganhou! ");
    } 
    else{
      if( escolha== 0 && aleatorio== 4){
        printf(" voce: PEDRA X computador: SPOCK \n");
 		    printf(" computador ganhou! ");
    }
    else{
      if(escolha==4&&aleatorio==4){
        printf(" voce: SPOCK X computador: SPOCK \n");
 		    printf(" empate! ");
      }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
     }
    }
	 }
	 }
	 }
	 }
	 }
	 }
	 }
	 }
	 
	 printf("\n \n gostaria de repetir? 1-sim ou 2-nao \n \n  ");
	 scanf("%d", &fim);
	 while(fim<=0||fim>=3){
 	 printf("\n \n  gostaria de repetir? 1-sim ou 2-nao \n\n");
	 scanf("%d", &fim);
 }
	}while(fim==1);

 
 return 0;
}