#include "../s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t size) {
  for (int x = 0; (s21_size_t)x < size; x += 1) {
    ((char *)dest)[x] = ((char *)src)[x];
  }
  return dest;
}
