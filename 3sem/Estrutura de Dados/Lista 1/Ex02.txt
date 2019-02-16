/*
2 - Faça uma função recursiva que receba um inteiro n e imprima até zero e em seguida volte a n. 
ex: n=5
5 4 3 2 1 2 3 4 5
*/

void ex02 ( int n ){
  print ( "%d\n" ,  n );
  if (n != 1) print( "%d\n" , ex02(n-1) );
  print ( "%d\n" ,  n );
}


Teste de Mesa para N = 5.

  inst | x | TELA 
1 inst | 5 | 5
2 inst | 4 | 4
3 inst | 3 | 3
4 inst | 2 | 2
5 inst | 1 | 1
4 inst | 2 | 2
3 inst | 3 | 3
2 inst | 4 | 4
1 inst | 5 | 5

Memória : 5 INST * (1 INT * 4) = 5 INST * 4 INT = 20 Bytes