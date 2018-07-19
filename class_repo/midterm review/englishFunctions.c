/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////// CAPSTONE LAB I.3.A-1 ///////////////////////////////////////////
////////////////////////////////////////////////// "Advanced String Theory" /////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The requirement for this lab is to define all of the EnglishFunctions.h functions as declared.
// The comment blocks for each function should clearly indicate what the requirements are for the function.
// There are a variety of appropriate solutions for many of these functions.
// Unit Test Code v1.c has been written to test all of the functions both individually and as a whole.
// This header definition file includes the instructor solution for the header functions.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
* FUNCTION:   int is_it_alphabet(signed char inputChar);
*
* ARGUMENTS:  inputChar is a single signed character that represents a single character
*                 that is tested as an alphabet letter.
*
* RETURNS:	  1 if inputChar is an alphabet character
*             0 if inputChar is not an alphabet character
*
* NOTES:      This function should not care if inputChar is uppercase or lowercase
*             The return value represents a boolean response without using a 'bool' data type
*             The letters a through z and A through Z represent "alphabet letters" for
*                 the purposes of this assignment.
*/

int is_it_alphabet(signed char inputChar)
{
	if ((inputChar > 64 && inputChar < 91) || (inputChar > 96 && inputChar < 123))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*
* FUNCTION:   int remove_non_letters(char * sentenceString);
*
* ARGUMENTS:  senteceString is expected to be a pointer to a null-terminated string
*
* RETURNS:	  Number of characters that were removed
*             -1 if sentenceString is NULL
*
* NOTES:      The execution of this function must utilize is_it_alphabet() to determine
*                 whether or not a given char is an alphabet letter or not.
*             In addition to removing non-alphabet letters, this function will also remove any
*                 "blank space".
*             Most importantly, sentenceString will be null-terminated before the function returns
*/

int remove_non_letters(char * sentenceString)
{
	int counter = 0;
	char temp;
	int i = 0;
	if (sentenceString == '\0')
	{
		return -1;
	}
	while (sentenceString[i] != '\0')
	{
		if (is_it_alphabet(sentenceString[i]) == 0)
		{
			memmove(&sentenceString[i], &sentenceString[i + 1], (strlen(sentenceString)-i));
			counter++;
		}
		if (is_it_alphabet(sentenceString[i]) == 1)
		{
			i++;
		}
	}

	//add a null terminator to the string
	 int j = strlen(sentenceString);
	sentenceString[j+1] = '\0';

	return counter; // You'll want to change this
}

/*
* FUNCTION:   int reverse_string(char * inputString, char * outputBuff, int inputPosition);
*
* ARGUMENTS:  inputString is expected to be a pointer to a null-terminated string
*             outputBuff is expected to be a pointer to a char array which will store the reversed string from inputString
*             inputPosition is the element of inputString that reverse_string() should reverse
*
* RETURNS:	  Number of characters that were reversed
*             -1 if either inputString or outputBuff is NULL
*             -2 if inputPosition is unrealistic
*                 Examples:
*                     inputPosition is negative
*                     inputPosition is out of the array's scope
*
* NOTES:      This function can be done either itterativly or recursively. Skip over null-terminated input validation!
*
*
*			  Recursive:
*                 1. Reverse inputString[inputPosition] into outputBuff[]
*                 2. Call reverse_string() to reverse the next inputString[] position
*                 3. Count and return the total number of characters that were reversed from inputString[]
*                        into outputBuff[]
*             outputBuff is treated as the same length as inputString.  If outputBuff is longer, it
*                 will still be treated the same length as inputString.  Ideally, outputBuff and inputString
*                 are the exact same length.
*             Most importantly, outputBuff will be null-terminated before the function returns
*
*			 Itterative:
*				  1. Do input checks and return errors if needed
*				  2. LOOP: Reverse inputString[inputLength - i - 1] into outputBuff
*				  3. Count and return the total number of characters that were reversed from inputString[]
*
*				  Ensuring you start at the end of inputString and itterate until you have reached the
*				  inputPosition is very important.
*					EXAMPLE:
*					someArray[] = "Hello World"
*					inputPosition = 3
*					outputBuff = dlroW ol"
*
*/

int reverse_string(char * inputString, char * outputBuff, int inputPosition)
{
	int i;
	int j = 0;
	int counter =0;
	int nullAdd;
	
	if (inputString == '\0' )
	{
		return -1;
	}
	if (outputBuff == '\0')
	{
		return -1;
	}

	if (inputPosition < 0 || inputPosition > strlen(inputString))
	{
		return -2;
	}

	if ( inputPosition >= strlen(inputString))
	{
		return -2;
	}
	

	for (i= (strlen(inputString)) -1; i>=inputPosition; i--)
	{
		outputBuff[j] = inputString[i];
		counter++;
		//printf("%c", outputBuff[j]);
		j++;

	}
	
	nullAdd = strlen(outputBuff);
	outputBuff[nullAdd + 1] = '\0';
	return counter;		//You will want to change this
}

/*
* FUNCTION:   int clear_a_buffer(char * fullBuff, int buffSize);
*
* ARGUMENTS:  fullBuff is expected to be a pointer to a char array
*             buffSize represents the dimension of fullBuff[]
*
* RETURNS:	  0 on success
*             -1 if fullBuff is NULL
*             -2 if buffSize is unrealistic
*                 Examples:
*                     buffSize is zero
*                     buffSize is negative
*
* NOTES:      This function 'zeroizes' all of the elements of fullBuff[buffSize]
*             fullBuff does not necessarily need to be a null-terminated string since the array's
*                 dimension is passed in as an argument (for safety)
*/
int clear_a_buffer(char * fullBuff, int buffSize)
{
	int i;
	if (fullBuff == '\0')
	{
		return -1;
	}
	if (buffSize == 0)
	{
		return -2;
	}
	if (buffSize < 0)
	{
		return -2;
	}
	for (i = 0; i <= buffSize; i++)
	{
		fullBuff[i] = 0;
	}
	return 0;		//You will want to change this
}