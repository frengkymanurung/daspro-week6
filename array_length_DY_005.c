/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int length;
    int a[5]; //deklarasi array bertipe integer
              //terdiri dari 5 elemen 
    printf("Size of array (byte) = %d\n", sizeof(a));
    printf("Size of array (byte) = %d\n", sizeof(int));

    length = sizeof(a) / sizeof(int); //hitung panjang array
    printf("Array length = %d\n", length);

    system("PAUSE");
    return 0;

}