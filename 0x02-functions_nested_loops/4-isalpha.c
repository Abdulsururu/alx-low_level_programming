#include "main.h"

/**
  *_isalpha - checks for alphabets
  *@c: The character
  *Return: 1 for alphabetic character or 0 for anything else
  */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
