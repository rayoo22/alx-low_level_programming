#include "main.h"
/**
 * wildcmp - compares strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}

/**
 * substring_match - check if a substring after wildcard matches s1
 * @s1: one string
 * @s2: another tring
 * @after_wldcd: position tight a fter wildcard
 * Return: 1 if matched, 0 if not
 */
int substring_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, after_wldcd));
	else
		return (substring_match(s1 + 1, after_wldcd, after_wldcd
}
