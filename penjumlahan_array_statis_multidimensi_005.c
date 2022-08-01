/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include <stdio.h>
int main(void)
{
    //kamus
    int c_size1 = 2;
    int c_size2 = 3;
    int s_size1 = 2;
    int s_size2 = 2;

    //deklarasi array
    char c_array[c_size1][c_size2];
    char s_array[s_size1][s_size2];

    //memberikan nilai ke masing masing c_array [i][j]
    c_array[0][0] = 1;
    c_array[0][1] = 6;
    c_array[0][2] = 6;
    c_array[1][0] = 8;
    c_array[1][1] = 7;
    c_array[1][2] = 3;

    //memberikkan nilai ke masing-masing s_array[i][j]
    s_array[0][0] = 9;
    s_array[0][1] = 8;
    s_array[1][0] = 7;
    s_array[1][2] = 6;

    int str, str1, str2, str3;
    str  = c_array[0][0] + s_array[0][0];
    str1 = c_array[0][1] + s_array[0][1];
    str2 = c_array[0][2] + s_array[1][0];
    str3 = s_array[1][2] + c_array[0][2];

    //mengakses elemen yang ada pada indeks pertama = 0 dan indeks kedua = 1
    printf("c_array[0] = %d | s_array[0][0] = %d ==>%d\n", c_array[0][0], s_array[0][0], str);
    printf("c_array[1] = %d | s_array[1][0] = %d ==>%d\n", c_array[0][1], s_array[0][1], str1);
    printf("c_array[0] = %d | s_array[0][0] = %d ==>%d\n", c_array[0][2], s_array[1][0], str2);
    printf("c_array[1] = %d | s_array[1][0] = %d ==>%d\n", c_array[1][0], s_array[1][2], str3);

    return 0;
}