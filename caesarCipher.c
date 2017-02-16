/* Caesar Cipher Project
   Input a message and a shift amount
   then prints out the encrypted message

   Programmer: Alexander Mas
   Date: 11/01/2014
*/

#include <stdio.h>
#include <ctype.h>

char encrypt( unsigned char ch, int k )  // Function to encrypt the string one character at a time
{
	if( isupper( ch ) != 0 )
	{
		ch = ( ( ch - 'A' ) + k ) % 26 + 'A';
	}

	else if( islower( ch ) != 0 )
	{
		ch = ( ( ch - 'a' ) + k ) % 26 + 'a';
	}

	else
	{
		return ch;
	}
	
	return ch;
}

int main( void )
{
	int key = 0;  // Shift amount
	unsigned char in;  // User's string

	printf( "Enter shift amount (1-25):\n" );
	scanf( "%d", &key );

	printf( "Enter message to be encrypted:\n" );
	
	getchar();

	in = getchar();

	in = encrypt( in, key );
	
	printf( "\n" );
	printf( "Encrypted message: " );

	putchar( in );

	while( in != '\n' )
	{
		in = getchar();

		in = encrypt( in, key );

		putchar( in );
	}


	return 0;
}