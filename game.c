
#include <stdio.h>
#include <stdlib.h>

void removeElement(char *array, char letter ) {
	
	//thou shall never open a pointer untill you know it it not NULL

	//chekcs to make sure array is not null
	if( array != NULL ) {

		for( int i = 0; i < 26; ++i ) {

			if( *(array + i ) == letter ) {
			
				*(array + i ) = ' '; 
				break; 

			}// end if

		}//end for

	}// end if 
	
	else
		fprintf( stderr, "Error: Pointer is NULL!!" ); 




}//	
char * createArray( ) {
	static char p[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'
	, 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 
       	return p; 
	

}// end createArray	

void printArray( char *p, int size  ) {

	if( p != NULL ) {
		for( int i = 0; i < size; ++i ) {
			printf( "%c ", *(p + i) );
		}// end for 
	puts( "" ) ;
							
	}// end if 
}// end printArray	

void introDisplay1() {

    printf("{}   {}   {}{}}   {}    {}   {}{}{}    {}    {}   {}{}}   {}    {}\n");
    printf("{}   {}  {}   {}  {}{}  {}  {}         {}{} {}}  {}   {}  {}{}  {}\n");
    printf("{}{ }{}  {}{ }{}  {} {} {}  {} {}{}    {} {} {}  {}{ }{}  {} {} {}\n");
    printf("{}   {}  {}   {}  {}  {}{}  {}   {}    {} {} {}  {}   {}  {}  {}{}\n");
    printf("{}   {}  {}   {}  {}   {}{   {}{}{}    {} {} {}  {}   {}  {}   {}{\n");
    printf("------------------------------------------------------------------\n\n\n");
    printf(" ----------             |---------------------------|\n");
    printf("|         |             |           Menu            |\n");
    printf("|         |             |***************************|\n");
    printf("|                       | <1> player solo           |\n");
    printf("|                       | <2> player vs. player     |\n");
    printf("|                       | <3> quit game             |\n");
    printf("|                       |                           |\n");
    printf("|__________             |---------------------------|\n");
    printf("/_________/|\n");
    printf("|________|/\n");

} // end introDisplay1

int main( ) {
	//asks how many players are involved 
	int numUserInput; 
	char userInput;
	introDisplay1();
        
	char * array = createArray();

	while (numUserInput != 3) { 
		if (numUserInput == 1) { 		 
			puts( "Enter character: " ); 
			scanf( " %c", &userInput );
			// remove element entered by user 
			removeElement(array, userInput);
			printArray(array, 26);
		 } // end if
		
	puts( "Enter choice: " ); 
	scanf( " %d", &numUserInput ); 
	} // end while

	
	printf( "Program works correctly\n" ); 
		
 
}// end 
