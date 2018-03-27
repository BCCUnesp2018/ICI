#include <stdio.h>

main () {
	
  float a,b,c;
  
  printf("Digite os comprimentos dos lados dos triangulos \n");
  scanf("%f %f %f", &a, &b, &c);
  
  if(a<b+c && b<a+c && c<a+b)
  printf("E triangulo \n");
  else
  printf("Nao e triangulo \n");
  
  if( a == b && b == c)
  printf("O triangulo e equilatero");
  
  else if( (a != b and b == c) or (b != a and a==c) or (c != a and a==c) )
  printf("O triangulo e isosceles");
  
  else if( a != b and b != c )
  printf("O triangulo e escaleno");	
	
	
	
	
	
	
	
	
}
