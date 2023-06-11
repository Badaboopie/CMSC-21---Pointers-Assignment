#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void scan_word(int occurences[26]);	//prototype function

bool is_anagram(int occurences1[26], int occurences2[26]){	
	char c;
// this function will be called by the variable same and will check the two arrays are anagrams or not, if not it will return false, otherwise it will return the value true.

	for (int i = 0; i < 26; ++i){
		if (occurences1[i] == occurences2[i]){
			continue;
		}else{
			return false;
		}
	}return true;

}


int main(void)
{
	int i,
		occurences1[26] = {0},
		occurences2[26] = {0};
	bool same;

	printf("Enter first word: ");
	scan_word(occurences1);
	printf("Enter second word: ");		//Second word check
	scan_word(occurences2);

	same = is_anagram(occurences1, occurences2);	//calls the is_anagram function

	if (same == true){
		printf("The words are anagrams.\n");
		return 0;
	}
	printf("The words are not anagrams.\n");
	return 0;
}

void scan_word(int occurences[26]) {	
// this function will scan the arrays when called and will get the characters of the strings, will return a non-zero number if it is an alphabet and will convert those characters in uppercase form
	char c;
	while((c = getchar()) != '\n'){		//Reads first word
		if (isalpha(c)){
			occurences[toupper(c) - 'A']--;
		}
	}
}

