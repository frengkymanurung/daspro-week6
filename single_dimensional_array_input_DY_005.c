/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i;    //varibael untuk inerasi
    int a[5]; //deklarasi array bertipe integer dan terdiri dari 10 elemen

    //set the elements of array to i+10
    for (i = 0; i < 5; i++)
    {
        printf("Masukkan nilai array a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    //printf the elements of array
    for (i = 0; i < 5; i++)
        printf("%d\n", a[i]);

    system("PAUSE");
    return 0;
}