/*
1 - Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321
*/

 
 N > SE N < 10 RETURN N > RETURN recursão (N / 10) 

#import <math.h>
#import <stdio.h>
 INT Ex01 ( INT N ) {

 	if ( N < 10 ){
 		return N;
 	}

 	return Ex02( N/10 ) + ( (N % 10) * (pow( 10 , ( floor ( log10 ( N ) ) ) ) ) );
 	// log10 devolverá o log (double) que somado a um apresenta o número de casas decimais-1, floor converte doble em int
 	// pow calculará 10 expoente do retorno de floor que multiplicado ao N % 10 inverterá a casa decimal dos números.
 }
 		| n  | return
 1 inst | 123| 3 * 100 + Ex(12)

 		| n  | return
 2 inst | 12 | 2 * 10 + Ex(1)

  		| n  | return
 3 inst | 1  | 1

 2 inst		 | 20 + 1
 3 inst		 | 300 + 21 

RETORNO FINAL: 321
Memória utilizada: NumRecursoes * 4 bytes.