#include <stdio.h>
 
int main()
{
    FILE *fp; // FILE pointer
    int i=0,pos;
    char ch;
    
    fp = fopen("file.txt","r"); // OPEN the file with the "r"(read) operation mode
    
    // Moves the FILE pointer to the end
    fseek(fp,0,SEEK_END);
    pos = ftell(fp); // // Gets the position of file pointer
    
    while(i<pos)
    {
    	i++;
    	fseek(fp,-i,SEEK_END); // Reverse procedure
    	ch = getc(fp); // Gets each character from file.txt
		printf("%c", ch);
	}
    fclose(fp);
     
    return 0;
}

