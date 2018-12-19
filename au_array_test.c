#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <assert.h>

#include "au_array.h"

void test_au_array_create()
{
    au_array* empty_arr = au_array_create();
    assert(empty_arr->length == 0);
    assert(empty_arr->elements == NULL);
    assert(empty_arr->element_size == 0);
    printf("%s\n", "----- Empty arr creation passed");
}

void test_au_array_create_of_length()
{
    au_array* array_of_four = au_array_create_of_length(4, sizeof(int));
    assert(array_of_four->length == 4);
    assert(array_of_four->element_size == sizeof(int));
    assert(array_of_four->elements != NULL);
    printf("%s\n", "----- Array_create_of_length passed");
}

void test_au_array_create_with_array()
{
  au_array* array_for_copy = au_array_create_with_array(array_for_copy);
  assert(array_for_copy->length == sizeof(int));
  assert(array_for_copy->element_size == 100);
  assert(array_for_copy->elements != NULL);

  printf("%s\n", "----- test_au_array_create_with_array passed ");

}

void test_au_array_create_with_buffer()
{
    assert(false);
}

void test_au_array_free()
{
    assert(false);
}

void test_au_array_free_with_elements()
{
    assert(false);
}

void test_au_array_free_with_element_handler()
{
    assert(false);
}

void test_au_array_is_empty()
{
    au_array* empty_arr = au_array_create();
    assert(au_array_is_empty(empty_arr));

    au_array* non_empty_arr = au_array_create_of_length(5, sizeof(int));
    assert(!au_array_is_empty(non_empty_arr));
}

void test_au_array_length()
{
    au_array* empty_arr = au_array_create();
    assert(au_array_length(empty_arr) == 0);

    au_array* non_empty_arr = au_array_create_of_length(5, sizeof(int));
    assert(au_array_length(non_empty_arr) == 5);
}

void test_au_array_size()
{
    assert(false);
}

void test_au_array_element_size()
{
    assert(false);
}

void test_au_array_first()
{
    assert(false);
}

void test_au_array_last()
{
    assert(false);
}

void test_au_array_get()
{
    assert(false);
}

int main(int argc, char **argv)
{
    test_au_array_create();
    test_au_array_create_of_length();
    test_au_array_create_with_array();
    test_au_array_create_with_buffer();

    test_au_array_free();
    test_au_array_free_with_elements();
    test_au_array_free_with_element_handler();

    test_au_array_is_empty();
    test_au_array_length();
    test_au_array_size();
    test_au_array_element_size();

    test_au_array_first();
    test_au_array_last();
    test_au_array_get();

    return 0;
}
