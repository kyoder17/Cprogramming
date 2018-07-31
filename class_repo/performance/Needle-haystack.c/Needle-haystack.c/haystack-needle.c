/*
Kyle Yoder
Needle in the haystack 
30 July 2018
*/

/*
Haystack Needle Lab

Purpose:
Remove the needle from the haystack
AKA: Move the substring from the string using memory operators and functions

*/
// TODO: Include any needed headers
#include <stdio.h>

int haystack_needle(char *haystack, char *needle, char *buffer);

int main()
{
  char string[] = "This is my brand new sentence";
  char substring[] = " brand new";

 
  // TODO: Create a char buffer named *buffer using malloc \
  ensure it is large enough to hold string[] + a nul-terminator
  char *buffer;
  buffer = (char *)malloc(sizeof(string));

  // TODO: Ensure buffer was created
  if (buffer == NULL)
  {
	  printf("Error creating Buffer");
	  return -1;
  }
  
  haystack_needle(string, substring, buffer);

  // TODO: Give back the memory from buffer
  free(buffer);
  buffer = NULL;


  // TODO: Print out the modified string
  printf("%s \n", string);
  getchar(); getchar();
  return 0;

}

/*
Arguments:
-haystack --- pointer to string to search
-needle   --- pointer to substring to search inside of haystack
-buffer   --- pointer to a buffer

PURPOSE:
haystack_needle takes the arguments above and searches the haystack
for the needle. Once it finds the needle... it removes it from the haystack.

Return:
return 0 on success
return -1 on error .... only needed if userinput is enabled.
*/
int haystack_needle(char *haystack, char *needle, char *buffer)
{
    int needleLength = strlen(needle);
	printf("%s \n", needle);
    // TODO: Using strstr() find the needle in the haystack (substring in string)\
    the pointer that is returned is pointing to the substring within the string \
    Set that pointer to a new char pointer called *mark_position


	char *mark_position = strstr(haystack, needle);;
	//mark_position = strstr(haystack, needle);
	printf("%s\n", mark_position);

    // TODO: Using strcpy(), store the needle into the buffer... \
    you are not authorized to use the variable needle.

	strcpy(buffer, mark_position + needleLength);
	printf("%s\n", buffer);

    // TODO: Using memmove, overwrite the haystack (string)... effectivly removing the needle \
    // HINT: start at the mark_position... that is after all where we need to start replacing.
	memmove(mark_position, buffer, strlen(buffer) + 1);
	printf("%s\n", haystack);

    return 0;
}