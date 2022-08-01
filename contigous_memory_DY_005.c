/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    //jika arr[0] disimpan pada alamat x, maka arr[1] disimpan pada alamat x + sizeof(int)
    //jika arr[2] disimpan pada alamat x + sizeof(int) + sizeof(int)
    int arr[5], i;
    printf("Size of integer in this compiler is %u", sizeof(arr));
    for (i = 0; i < 5; i++)
        //The use of '&' before a variabel name, yields
        //address of variable

        printf("Address arr[%d] is %u\n", i, &arr[i]); //%u untuk unsigned integer
    system("PAUSE");
    return 0;
}