#include <bits/stdc++.h>


using namespace std;

int N = 1000001;


void Inicializar(int aux[], int N){
  int i;
  aux[0] = 0;
  aux[1] = 0;

  for(i = 2 ; i <= N ; ++i){
      aux[i] = i;
  }

}

void primes(int aux[],int N){

  int i, j;
  for(i = 2; i <= N; ++i){
    if(aux[i] != 0){
      for(j = i + i;j <= N ; j += i){
        aux[j] = 0;
      }
    }

  }


}

int main() {
  int aux[N];


  Inicializar(aux,N);

  primes(aux,N);
  for(int i = 0; i <= N; i++){
    if(aux[i] != 0)
      printf("%d ",aux[i]);
  }

  return 0;
}
