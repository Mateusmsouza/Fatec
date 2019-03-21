/*Exercício de Filas - ED:

Algoritmo das distâncias
Recebe matriz A que representa as interligações entre cidades 0, 1, . . . , n − 1:
há uma estrada de x a y se e somente se A[x][y] = 1.
Devolve um vetor d tal que d[x] é a distância da cidade o à cidade x.
 ?
 */

int *devDist(int A[][], int N){
  // inicia fila
  int u = 0, int t = 0;
  int d[100];

  // iterando a matriz
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; i < N; i++)
    {
      // Caso caminho i j seja válido, adiciona na fila.
      if((A[i][j] == 1) && t != N-1 ){
        d[t++] = A[i][j];
      }
    }
    
  }
   
  return d;
}
