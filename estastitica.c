/*Autor: Lucas_Ruschioni_de_Oliveira  
Data de criação: 01/10/2022*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
   
  int n, i, j;
  float temp=0;
  float num[100], sum=0, avg; 
  float variance, std_deviation;
  float median; 
  float min=sizeof i, max=sizeof i;
   
     
      printf("Quantos numeros na sua serie (N): ");
      scanf("%d", &n); 
    
  for (i = 0; i < n; i++) { 
      
      printf("%d -> ", i);
      scanf("%f", &num[i]);
   
    
      if (num[i]<min) min=num[i];        /* Mínimo */
     
      if (num[i]>max) max=num[i];        /* Máximo */
      
   
   
      sum += num[i];        /* Soma de N*/
        
      avg = sum/n;         /* Média */
            
      variance += pow((num[i] - avg),2)/n;     /* Variância */    
      
      std_deviation = sqrt(variance);       /* Desvio padrão */
    
   } 

    for (i=0; i <n; i++) {
         for (j=i+1; j<n; j++) {
            if (num[i] > num[j]) {
                 temp = num[i];
                 num[i]=num[j];
                 num[j]=temp;
        
           }
     
       }
  }
                 if (n%2==0) 
              
                    median=(num[(i-1)/2] + num[i/2])/2.0; /* Mediana */  
                 
                 else
                     median= num[(i/2)];
      
      printf("Valor minimo = %.2f\nValor maximo = %.2f\n", min, max);

      printf("Media = %.2f\n", avg);
      
      printf("Mediana= %.2f\n", median);
    
      printf("Desvio padrao = %.2f\n", std_deviation);
}
