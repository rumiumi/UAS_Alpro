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
