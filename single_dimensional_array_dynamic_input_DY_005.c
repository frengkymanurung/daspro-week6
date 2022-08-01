/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr;
	int size;
	scanf("%d", &size);
	arr = malloc(sizeof(int)*size);

	int i;
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < size; i++)
	{
		printf("%d\n \n", arr[i]);
	}


	system("PAUSE");							              
	return 0;
}


