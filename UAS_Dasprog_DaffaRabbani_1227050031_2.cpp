#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int array[20][20], baris, kolom;
    cout << "masukan jumlah baris : ";cin >> baris;
    cout << "masukan jumlah kolom : ";cin >> kolom;
    cout << "masukan nilai : " << endl;
    
    for(int i = 0; i < baris ;i++){
        for(int j = 0; j < kolom ;j++){
            cout << "masukan nilai baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> array[i][j];
        }
        
    }
    cout << "nilai awal :" << endl;
    
	for(int i = 0; i < baris ;i++){
        for(int j = 0; j < kolom ;j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "nilai akhir :" << endl;
    
	for(int i = 0; i < baris ;i++){
            for(int j = 0; j < kolom ;j++){
                if(array[i][j]%3 != 0 && array[i][j]%5 != 0 && array[i][j]%7 != 0){
                    cout << array[i][j] << " ";
                }
                else{
                }
            }
    }
    getch();
    getch();
    return 0;
}
