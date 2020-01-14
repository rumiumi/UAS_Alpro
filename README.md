# UAS_Alpro


## Matriks Identitas

**Alur Algoritma**
1. Membuat fungsi identitas `int Identity(int num)` dengan variabel `num` digunakan sebagai ukuran matriks
2. Melakukan pengulangan dengan mencetak angka 1 jika `baris == kolom` selain itu cetak angka 0, jika variabel `baris` lebih kecil dari `num` maka pengulangan tetap dilakukan
3. Membuat fungsi utama dengan variabel `int size` berisi ukuran yang diinginkan
4. Memanggil fungsi `Identity(size)`

**Flowchart Program**

[!flowchart]
(https://github.com/rumiumi/UAS_Alpro/blob/master/screenshot/flowchart.PNG)

**Code Program**
```
#include<stdio.h>
#include<iostream>

using namespace std;

int Identity(int num)
{
    int baris, kolom;

    for (baris = 0; baris < num; baris++)
    {
        for (kolom = 0; kolom < num; kolom++)
        {
            if (baris == kolom)
                printf("%d ", 1);
            else
                printf("%d ", 0);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int size;

    cout << "Masukkan jumlah ordo: ";
    cin >> size;
    cout << endl<< endl;
    Identity(size);
    return 0;
}

```

**Output Program**

[!output01]
(https://github.com/rumiumi/UAS_Alpro/blob/master/screenshot/output01.PNG)

[!output02]
(https://github.com/rumiumi/UAS_Alpro/blob/master/screenshot/output02.PNG)
