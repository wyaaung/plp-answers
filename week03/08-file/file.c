#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_SIZE 100

char *read_file(char *filename);

void delete(char *string, char *word);

int main(int argc, char **argv){

    char *f;
    char *w;

    f = malloc(MAX_SIZE);
    f = argv[1];

    w = malloc(MAX_SIZE);
    w = argv[2];
    
    char *file_contents = read_file(f);

    if (!file_contents){
        printf("Error reading file.\n");
        return -1;
    }


    delete( file_contents, w);

    int fd1 = open("f-processed", O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
    
    if (!fd1){
        printf("Error with open\n");
        return -1;
    }

    if(write(fd1, file_contents, strlen(file_contents)) != strlen(file_contents)) {
        printf("issue writing\n");
        close(fd1); return -1;
    }

    close(fd1);
    
    free(file_contents);
    free(f);
    free(w);

    return 0;
}

char *read_file(char *filename){
    FILE *file;

    file = fopen(filename, "r");

    if (!file) return NULL;

    // Move the file pointer to the end of the file
    fseek(file, 0, SEEK_END);

    // fseek(file) will return the current value of the position indicator,
    // which give us the number of characters in the file
    int length = ftell(file);

    // Move back to the start of the file to start reading characters
    fseek(file, 0, SEEK_SET);

    char *string = malloc(length * sizeof(char));

    char c;
    int i = 0;

    while( (c = fgetc(file)) != EOF){
        string[i] = c;
        i++;
    }

    string[i] = '\0';
    fclose(file);

    return string;
}

void delete(char *string, char *word){
  // i is used to loop through the string
  int i = 0;

  // store the lengths of the string and substr
  int string_length = strlen(string);
  int substr_length = strlen(word);
  
  // loop through the string keeping track of our current index with i, 
  // starting at the first index
  while (i < string_length)
  {
    // if we find the substr at the current index, delete it
    if (strstr(&string[i], word) == &string[i])
    {
      // determine the string's new length after removing the substr occurrence
      string_length -= substr_length;
      
      // shift forward the remaining characters in the string after the substr 
      // occurrence by the length of substr, effectively removing it!
      for (int j = i; j < string_length; j++)
        string[j] = string[j + substr_length];
    }
    else i++;
  }
  
  // put a null terminator at the end of the string 
  string[i] = '\0';
}