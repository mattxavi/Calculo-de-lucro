#include <stdio.h>

int main(void){
	
float receita[3][2], gasto[3][2], lu[3][2];
int i, j;
for(i=0; i<3; i++){ //i é índice de linha (ano)
for(j=0; j<2; j++){ //j é índice de coluna (sem.)
printf("Receita e gasto no sem. %d do ano %d: ", j+1, i+2020);
scanf("%f %f", &receita[i][j], &gasto[i][j]);
lu[i][j] = receita[i][j] - gasto[i][j];
}
}
printf("\t Sem.1\t\t Sem.2 \n"); //Usamos \t apenas para organizar a exibição
printf("2020\t %.1f\t\t %.1f \n", lu[0][0], lu[0][1]);
printf("2021\t %.1f\t\t %.1f \n", lu[1][0], lu[1][1]);
printf("2022\t %.1f\t\t %.1f \n", lu[2][0], lu[2][1]);
return 0;

}
