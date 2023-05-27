#include <iostream>
using namespace std;

int main() {
    int ligne, colonne;
    cout << "Entrez le nombre de lignes : ";
    cin >> ligne;
    cout << "Entrez le nombre de colonnes : ";
    cin >> colonne;
    int matrice[ligne][colonne];
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << "Entrez la valeur de matrice[" << i+1 << "][" << j+1 << "] : ";
            cin >> matrice[i][j];
        }
    }
   for (int i = 0; i < ligne; i++) {
        int max = matrice[i][0];
        int colIndex = 0;
        for (int j = 1; j < colonne; j++) {
            if (matrice[i][j] > max) {
                max = matrice[i][j];
                colIndex = j;
            }
        }
        bool MinCol = true;
        for (int k = 0; k < ligne; k++) {
            if (matrice[k][colIndex] < max) {
                MinCol = false;
                break;
            }
        }
        if (MinCol) {
            cout << "Point-col : Valeur = " << max << ", Position = (" << i+1 << ", " << colIndex+1 << ")" << endl;
        }
    }
    return 0;
}
