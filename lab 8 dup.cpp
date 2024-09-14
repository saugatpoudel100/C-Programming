#include <stdio.h>
#include <string.h>
int main()
{
  int i,j,n,count = 0 ,arr[n], temp[n];;
  printf("enter a string : ");
  scanf("%d", &n);
  printf("enter a numbers : ");
  for ( i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("\nArray Before Removing Duplicates: ");
  for ( i = 0; i < n; i++)
    printf("%d ", arr[i]);

  for (i = 0; i < n; i++)
  {
    
    for (j = 0; j < count; j++)
    {
      if (arr[i] == temp[j])
        break;
    }
    if (j == count)
    {
      temp[count] = arr[i];
     count++;
    }
  }

  printf("\nArray After  Removing Duplicates: ");
  for (int i = 0; i < count; i++)
    printf("%d ", temp[i]);

  return 0;
}
