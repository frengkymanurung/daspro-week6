/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[3];
    int arr2[3];
    int i;

    printf("Vektor 1 = \n");
    for (i = 0; i < 3; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Vektor 2 = \n");
    for (i = 0; i < 3; i++){
        scanf("%d", &arr2[i]);
    }
    int hasil[3];
    hasil[0] = arr1[0] * arr2[0];
    hasil[1] = arr1[1] * arr2[1];
    hasil[2] = arr1[2] * arr2[2];

    printf("Hasil : \n");
    printf("%d + %d + %d = " , hasil[0], hasil[1], hasil[2]); 
    
    int hasil_akhir;
    hasil_akhir = hasil[0] + hasil[1] + hasil[2];
    printf("%d", hasil_akhir);

    return 0;
}