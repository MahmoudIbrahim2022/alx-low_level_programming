/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array on which function will be executed
 * @size: array size
 * @action: function that will be executed on array elements.
 *
 * Return: void.
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	if (array && action)
	for (i = 0; i < size; i++)
	(*action)(array[i]);

}
