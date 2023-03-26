#include <iostream>
using namespace std;

void preenche(int arr[], int size){
  for (int i=0; i<size; i++){
    cin >> arr[i];
  }
}

void sort(int arr[], int size){

  int i, j, temp;

  for (i = 0; i < size-1; i++){
    for (j = i+1; j < size; j++){
      if (arr[i]>arr[j]){
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
      }
    }
  }
  
}

void imprime(int arr[], int size){
  for (int i=0; i<size; i++){
    cout << arr[i] << " ";
  } cout << endl;
}

int testar(int arr[], int size){
  int teste = 0;
  for (int i=0; i<size-1; i++){
    if(arr[i+1] != arr[i]+1){
      teste = 1;
      break;
    }
  }
  return teste;
  
}

int main() {
  int tam;
  cout << "Qual o tamanho do vetor? ";
  cin >> tam;
  int * vet = new int [tam];

  preenche(vet, tam);
  sort(vet, tam);
  imprime(vet, tam);
  int teste = testar(vet, tam);
  if (teste == 1){
    cout << "false\n";
  } else {
    cout << "true\n";
  }

  delete [] vet;
  
}