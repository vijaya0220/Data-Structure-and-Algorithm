//Write the program for deleting an element from the beginning and from any position.
int DeleteHead(int array[], int n)
{
  array[0] = 0;
  for(int i=0; i<n-1; i++)
  {
    array[i] = array[i+1];
  }
  return array;
}

//Write the program for printing the array after rotating it k times towards left, where k
would be taken as user input.
int RotateLeft(int array[], int n, int k)
{
  int result[n];
  for(int j=k, l=0; j<n;j++, l++)
  {
    result[l]=array[j];
  }
  for(int i=0; i<k; i++)
  {
    result[i] = array[i];
  }
  return result;
}
