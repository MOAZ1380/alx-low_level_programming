#include"main.h"
/**
 * rev_string - moaz
 *
 * @s: moaz
 *
 * Return: Nothing
*/
void rev_string(char *s)
{
	int l, i;
	char temp;
	/*find stringfdsjkdkj fdskjfksdj*/
		for (l = 0; s[l] != '\0'; ++l)
			/*swap string flsdklfdsjfdslkfkds char*/
		for (i = 0; i < l / 2; i++)
	{
			temp = s[i];
		s[i] = s[l - 1 - i];/* 1 because dfflkjfdsdfifdsijio 0*/
	s[l - 1 - i] = temp;
	}
}
