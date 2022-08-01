/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i; //variabel unntuk interasi
    int *a; //deklarasi array dinamis bertipe integer
    int sz; //varibael yang menampung ukuran array

    scanf("%d",&sz); //membaca ukuran array
    a = (int*)malloc(sz*sizeof(int)); //alokasi array secara dinamis

    //set the elements of array to i + 10
    for(i=0; i<sz; i++)
    a[i] = i+20;

    //printf the elements of array 
    for(i=0; i<sz; i++)
    printf("%d\n", a[i]);

    system("PAUSE");
    return 0;
}