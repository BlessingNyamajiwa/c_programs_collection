#include <stdio.h>
#include <string.h>

void isPalindrome(char word[])
{	
	// Start from leftmost and rightmost corner of the word	
	int l = 0, h = strlen(word) - 1;
	
	//	Keep comparing characters while they're the same
	while(h > 1)
	{
		if(word[l++] != word[h--])
		{
			printf("%s is not a palindrome\n", word);
			return;
		}
	}
	printf("%s is a palindrome\n", word);
}

int main()
{
	isPalindrome("abba");
	isPalindrome("programming");
	isPalindrome("abbccbba");
	return 0;
}
