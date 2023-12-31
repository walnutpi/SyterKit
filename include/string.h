/* SPDX-License-Identifier: MIT */

#ifndef __STRING_H__
#define __STRING_H__

#include <types.h>

/**
 * Copies the values of 'cnt' bytes from memory area 'src' to memory area 'dst'.
 *
 * @param dst The destination memory area.
 * @param src The source memory area.
 * @param cnt The number of bytes to copy.
 * @return A pointer to the destination memory area.
 */
void *memcpy(void *dst, const void *src, int cnt);

/**
 * Sets the first 'cnt' bytes of the memory area pointed to by 'dst' to the specified value 'val'.
 *
 * @param dst The memory area to be filled.
 * @param val The value to be set.
 * @param cnt The number of bytes to be set to the value.
 * @return A pointer to the destination memory area.
 */
void *memset(void *dst, int val, int cnt);

/**
 * Compares the first 'cnt' bytes of the memory areas 'dst' and 'src'.
 *
 * @param dst The first memory area to compare.
 * @param src The second memory area to compare.
 * @param cnt The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if 'dst' is found, respectively, to be less than, to match, or be greater than 'src'.
 */
int memcmp(const void *dst, const void *src, unsigned int cnt);

/**
 * Calculates the length of the string 'str', excluding the terminating null byte.
 *
 * @param str The input string.
 * @return The length of the input string.
 */
unsigned int strlen(const char *str);

/**
 * Calculates the length of the string 's', but not more than 'n' characters.
 *
 * @param s The input string.
 * @param n The maximum number of characters to examine.
 * @return The length of the input string, but not more than 'n'.
 */
unsigned int strnlen(const char *s, unsigned int n);

/**
 * Copies the string pointed to by 'src', including the terminating null byte, to the buffer pointed to by 'dst'.
 *
 * @param dst The destination buffer.
 * @param src The source string.
 * @return A pointer to the destination buffer.
 */
char *strcpy(char *dst, const char *src);

/**
 * Copies up to 'n' characters from the string pointed to by 'src', including the terminating null byte, to the buffer pointed to by 'dest'.
 *
 * @param dest The destination buffer.
 * @param src The source string.
 * @param n The maximum number of characters to be copied.
 * @return A pointer to the destination buffer.
 */
char *strncpy(char *dest, const char *src, unsigned int n);

/**
 * Appends the string pointed to by 'src', including the terminating null byte, to the end of the string pointed to by 'dst'.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @return A pointer to the destination string.
 */
char *strcat(char *dst, const char *src);

/**
 * Compares the string pointed to by 'p1' to the string pointed to by 'p2'.
 *
 * @param p1 The first string to compare.
 * @param p2 The second string to compare.
 * @return An integer less than, equal to, or greater than zero if 'p1' is found, respectively, to be less than, to match, or be greater than 'p2'.
 */
int strcmp(const char *p1, const char *p2);

/**
 * Compares at most the first 'cnt' characters of the string pointed to by 'p1' to the string pointed to by 'p2'.
 *
 * @param p1 The first string to compare.
 * @param p2 The second string to compare.
 * @param cnt The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if 'p1' is found, respectively, to be less than, to match, or be greater than 'p2'.
 */
int strncmp(const char *p1, const char *p2, unsigned int cnt);

/**
 * Finds the first occurrence of the character 'c' (converted to a char) in the string pointed to by 's', including the terminating null byte.
 *
 * @param s The input string.
 * @param c The character to search for.
 * @return A pointer to the located character, or NULL if the character does not occur in the string.
 */
char *strchr(const char *s, int c);

/**
 * Finds the last occurrence of the character 'c' (converted to a char) in the string pointed to by 's', including the terminating null byte.
 *
 * @param s The input string.
 * @param c The character to search for.
 * @return A pointer to the located character, or NULL if the character does not occur in the string.
 */
char *strrchr(const char *s, int c);

/**
 * Finds the first occurrence of the substring 'what' in the string 's'.
 *
 * @param s The input string.
 * @param what The substring to search for.
 * @return A pointer to the beginning of the located substring, or NULL if the substring does not occur in the string.
 */
char *strstr(const char *s, const char *what);

/**
 * Locates the first occurrence of the character 'value' (converted to an unsigned char) in the first 'num' bytes of the memory area pointed to by 'ptr'.
 *
 * @param ptr The input memory area.
 * @param value The value to search for.
 * @param num The number of bytes to examine.
 * @return A pointer to the located character, or NULL if the character does not occur in the memory area.
 */
void *memchr(void *ptr, int value, unsigned int num);

/**
 * Copies 'count' bytes from the memory area 'src' to the memory area 'dest'. The memory areas may overlap.
 *
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param count The number of bytes to copy.
 * @return A pointer to the destination memory area.
 */
void *memmove(void *dest, const void *src, unsigned int count);


#endif /* #ifndef __STRING_H__ */
