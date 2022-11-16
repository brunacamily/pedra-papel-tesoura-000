#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main() {
 int escolha, aleatorio, fim;
 do{
 printf(" voce escolhe 0-PEDRA, 1-PAPEL OU 2-TESOURA ?  ");
 scanf("%d", &escolha);
 while(escolha>2||escolha<0){
 	 printf(" voce escolhe 0-PEDRA, 1-PAPEL OU 2-TESOURA ?  ");
	 scanf("%d", &escolha);
 }
 
 srand( time(NULL) ); //semente do numero aleatório
 aleatorio = rand()%3;
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
	 }
	 }
	 }
	 }
	 }
	 }
	 }
	 }