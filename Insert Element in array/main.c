/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 25/6/2023
 * 
 * Problem Description : insert an element at the given location in an array.
 * 
 * Algorithm : Insert the given element in the location and shift the next values to the right
 * 
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int Iterator = 0, Location = 0, SizeofArr = 0, ElementValue = 0;
  int *Arr = NULL;
  printf ("Enter Size of The Array = ");
  scanf ("%d", &SizeofArr);
  Arr = (int *) malloc (SizeofArr * sizeof (int));
  printf ("Enter Array Elements :\n");
  for (Iterator = 0; Iterator < SizeofArr; Iterator++)
    {
      scanf ("%d", &Arr[Iterator]);
      printf ("\n");
    }
  printf ("Enter the Value to be inserted = ");
  scanf ("%d", &ElementValue);
  printf ("Enter the Location of the Value to be inserted = ");
  scanf ("%d", &Location);

  realloc (Arr, (SizeofArr + 1) * sizeof (int));

  for (Iterator = SizeofArr - 1; Iterator >= Location - 1; Iterator--)
    {
      Arr[Iterator + 1] = Arr[Iterator];
    }
  Arr[Location - 1] = ElementValue;
  printf ("Array after inserting %d at location %d = ", ElementValue,
	  Location);
  for (Iterator = 0; Iterator < SizeofArr+1; Iterator++)
    {
      printf ("%d ", Arr[Iterator]);
    }
  return 0;
}
