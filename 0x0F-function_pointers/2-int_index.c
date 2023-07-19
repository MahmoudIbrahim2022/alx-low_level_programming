/**
 * int_index - searches for an integer.
 * @array: array in which integer will be searched
 * @size: array size
 * @cmp:  The function to be used to compare values.
 *
 * Return: index for the searched integer.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
	return (-1);

	if (array && cmp)
	for (i = 0; i < size; i++)
	{
		result = (*cmp)(array[i]);
		if (result != 0)
		return (i);
	}

	return (-1);

}
