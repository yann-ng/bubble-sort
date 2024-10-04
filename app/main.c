#include <stdio.h>

int main()
{
  int array[1000], n, swap;

  printf("Input the number of elements of the array: ");
  scanf("%d", &n);

  printf("\nInput the elements: \n");

  for (int i=0; i < n; i++)
    scanf("%d", &array[i]);

  for (int i=0; i < n - 1; i++)
  {
    for (int j=0; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1])
      {
        swap = array[j];
        array[j] = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted array:\n");

  for (int i = 0; i < n; i++)
  {
     printf("%d ", array[i]);
  }

  return 0;
}
