# Array pada Bahasa C++

## Ditulis oleh

<div align='center'>

<img src="https://user-images.githubusercontent.com/120996792/208885375-dfb7d2f1-c290-420e-8cf4-e45e744f6d77.png" width="150" height="150" style="border-radius: 50%"/>
<br> Daffa Rabbani - 1227050031

<br> [Teknik Informatika](http://if.uinsgd.ac.id/) - [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

</div>

# Array

Array adalah kumpulan dari nilai-nilai data bertipe sama dalam urutan tertentu yang menggunakan sebuah nama yang sama. Nilai-nilai data di suatu larik disebut dengan elemen-elemen larik.
Letak urutan dari suatu elemen larik ditunjukkan oleh suatu subscript atau suatu index.

 array dapat dibedakan menjadi :
1. Array satu dimensi
Setiap elemen array dapat diakses melalui index
Index array secara default dimulai dari 0
Deklarasi array :<br>
```cpp
  int [] month;
       
        month = new int[12];
        month[0] = 31;
        month[1] = 28;
        month[2] = 31;
        month[3] = 30;
        month[4] = 31;
        month[5] = 30;
        month[6] = 31;
        month[7] = 31;
        month[8] = 30;
        month[9] = 31;
        month[10] = 30;
        month[11] = 31;
```

2. Array dua dimensi
Array dua dimensi merupakan array yang terdiri dari m buah baris dan n buah buah kolom bentuknya dapat berupa matriks atau tabel.
Deklarasi array :<br>
```cpp
       int A[3][4];
```


3. Array multidimensi
Array multidimensi merupakan array yang mempunyai ukuran lebih dari dua. Bentuk pendeklarasian array multidimensi sama saja dengan deklarasi array dimensi satu maupun dimensi dua.
Deklarasi array : <br>
```cpp
    int LARIK [2][3][4];
```

# Studi Kasus
Array terbagi menjadi tiga yaitu array satu dimensi, array dua dimensi, dan array multidimensi. 
Pada dasarnya matriks sama dengan konsep array. Matriks adalah sekumpulan bilangan yang disusun berdasarkan baris dan kolom, serta ditempatkan di tempatnya yaitu tanda kurung. <br>

Contoh kasus yang akan dikerjakan yaitu:

1.  Menukar nilai baris dan kolom dalam suatu matriks atau bisa disebut sebagai transpose matriks.
2.	Membuat deret bilangan pada matriks dan mencari sejumlah bilangan yang tidak habis dibagi 3, 5, 7.

## source code 1
<code>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int baris, kolom;
    cout << "masukan banyak baris : ";cin >> baris;
    cout << "masukan banyak kolom : ";cin >> kolom;
   
    const int baris_R = baris;
    const int kolom_R = kolom;
    int array[baris_R][kolom_R];
    int tuker[kolom_R][baris_R];
    cout << "masukan nilai : " << endl;
   
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            cout << "baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> array[i][j]; }
    }
    cout << "bentuk awal : " << endl;
   
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
   
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            tuker[j][i] = array[i][j];
        }
    }
    cout << "bentuk akhir : " << endl;
   
    for(int i = 0; i < kolom_R; i++){
        for(int j = 0; j < baris_R; j++){
            cout << tuker[i][j] << " ";
        }
        cout << endl;
    }
    getch();  
    getch();         
    return 0;
}
</code>

## source code 2
<code>
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
</code>
## Output Program

Soal nomor 1: <br>
<div align="center">
   <img src="https://user-images.githubusercontent.com/120996792/208889235-b7c5eb58-5bd6-4486-84e7-43e48c7d7008.png" width="50%">
</div>

Soal nomor 2:<br>
<div align="center">
   <img src="https://user-images.githubusercontent.com/120996792/208889302-5f88daa4-eeef-409e-b829-7bbb0f3bf5ec.png" width="50%">
</div>


