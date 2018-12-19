#include <stdlib.h>
#include <assert.h>
#include "au_array.h"

#pragma mark - Creating Arrays

au_array* au_array_create()
{
    au_array *array = malloc(sizeof(au_array));

    array->elements = NULL;
    array->element_size = 0;
    array->length = 0;
    return array;
}

au_array* au_array_create_of_length(size_t count, size_t size)
{
    au_array *array = malloc(sizeof(au_array));

    array->element_size = size;
    array->length = count;
    array->elements = malloc(size * count);
    return array;
}

au_array* au_array_create_with_array(au_array *array)
{
  au_array *arrayA = malloc(sizeof(au_array));

  arrayA->element_size = 100;
  arrayA->length = sizeof(int);
  arrayA->elements = malloc(arrayA->length * arrayA->element_size);

  au_array *arrayB = malloc(sizeof(au_array));
  arrayB->element_size = arrayA->element_size;
  arrayB->length = arrayA->length;
  arrayB->elements = arrayA->elements;
  return arrayB;
}

au_array* au_array_create_with_buffer(void *buffer, size_t count, size_t size)
{
    return NULL;
}

#pragma mark - Deallocating Arrays

void au_array_free(au_array *array)
{
    free(array);
}

void au_array_free_with_elements(au_array *array)
{

}

void au_array_free_with_element_handler(au_array *array, au_array_element_handler handler)
{

}

#pragma mark - Querying Metadata

bool au_array_is_empty(au_array *array)
{
    return sizeof(array->elements) == 0;
}

size_t au_array_length(au_array *array)
{
    return array->length;
}

size_t au_array_size(au_array *array)
{
    return 0;
}

size_t au_array_element_size(au_array *array)
{
    return 0;
}

#pragma mark - Querying an Array

void *au_array_first(au_array *array)
{
    return NULL;
}

void *au_array_last(au_array *array)
{
    return NULL;
}

void *au_array_get(au_array *array, size_t index)
{
    return NULL;
}
