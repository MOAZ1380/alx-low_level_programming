#include <stdio.h>
/**
 * _strcmp - moa
 * @s1: m
 * @s2: moa
 * Return: moa
*/
int _strcmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
