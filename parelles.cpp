#include <iostream>

using namespace std;

bool es_vocal(char x) {
  if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u') return true; 
  else return false;
}

int parelles(char vec[], int n_max, int n) {
  int n_parelles = 0;
  if (n >= n_max) return 0;
  if (es_vocal(vec[n]) and es_vocal(vec[n+1])) return 1 + parelles(vec, n_max, n+1);
  else return parelles(vec, n_max, n+1);
}

int main() {
  int n_car;
  do {
    cout << "ENTRA EL NOMBRE DE CARACTERS: " << endl;
    cin >> n_car;
  } while (n_car <= 0);
  char vec[n_car];
  char ll;
  cout << "ENTRA ELS CARACTERS: " << endl;
  for (int i = 0; i < n_car; i++) {
    cin >> vec[i];
  }
  cout << "NOMBRE DE PARELLES DE VOCALS: " << parelles(vec,n_car,0);
  return 0;
}
