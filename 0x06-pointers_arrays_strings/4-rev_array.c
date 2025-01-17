/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */

void reverse_array(int *a, int n)
{
  int i, tmp;

  i = tmp = 0;
  n -= 1;

  while (i <= n)
    {
      tmp = a[n];
      a[n--] = a[i];
      a[i++] = tmp;
    }
}
