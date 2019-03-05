typedef vector<int> fila; //una de les files de la matriu
typedef vector<fila> Matriu; //matriu: vector de files

void llegir_matriu(Matriu& m) {
  for (int f = 0; f < m.size(); ++f) {       //omple la matiru de files
   for (int c = 0; c < m[f].size(); ++c) {  //omple cada fila de la matriu
    cin >> m[f][c];                        //posa un element a la fila "i" i la columne "j"
   }
   cout << endl;
  }
}

void escriu_diagonal(int fil, Matriu& m) {
 int df = -1;
 int dc = 1;
 int f = fil;
 int c = 0;
 for (int i = 0; i < fil + 1; ++i) {
   cout << t[f][c] << " ";
   f += df;
   c += dc

 }
}

void escriure_matriu(const Matriu& m) {
 for (int f = 0; f < m.size(); ++f) {
   for (int c = 0; c < m[f].size(); ++c) {
    cout << m[f][c] << endl;
   }
 }
}

void escriu_fila(int fil, const Matriu& m) { //escribim una fila, ens movem per les columnes
 for (int c = 0; c < m[fil - 1].size(); ++c) {
  cout << m[fil - 1][c];
 }
 cout << endl;
}

void escriu_columna(int col, const Matriu& m) { //escribim una columne, ens movem per les files
  cout << t[0][col - 1];
  for (int f = 0; f < m.size(); ++f) {
  cout << " " << m[f][col - 1];
 }
 cout << endl;
}

void escriu_element(int fil, int col, const Matriu& m) {
  cout << m[fil - 1][col - 1] << endl;
