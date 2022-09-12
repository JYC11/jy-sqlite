#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *buffer;         // pointer to buffer
    size_t buffer_length; // size_t is an unsigned data type that has to be greater than 0
    ssize_t input_length; // signed size_t so it allows negative value (-1)
} InputBuffer;

InputBuffer *new_input_buffer() // returns pointer to InputBuffer struct
{
    InputBuffer *input_buffer = (InputBuffer *)malloc(sizeof(InputBuffer)); // allocates memory to the size of input buffer struct
    input_buffer->buffer = NULL;                                            // sets Null pointer to buffer pointer
    input_buffer->buffer_length = 0;                                        // sets buffer length as 0
    input_buffer->input_length = 0;                                         // same as above
    return input_buffer;
}

void print_prompt() { printf("db > "); } // input prompt for user

ssize_t getline(char **lineptr, size_t *n, FILE *stream); // get bytes read size from user input and mallocs it
// lineptr is the pointer to the buffer with the readline
// n is the pointer to the variable where buffer length is saved
// stream is the input stream to read from

void read_input(InputBuffer *input_buffer)
{
    ssize_t bytes_read = getline(&(input_buffer->buffer), &(input_buffer->buffer_length), stdin);

    if (bytes_read <= 0)
    {
        printf("Error reading input\n");
        exit(EXIT_FAILURE);
    }
    input_buffer->input_length = bytes_read - 1; // setting input length
    input_buffer->buffer[bytes_read - 1] = 0;    // initializing character array filled with 0
}

void close_input_buffer(InputBuffer *input_buffer)
{
    free(input_buffer->buffer);
    free(input_buffer);
} // frees memory when not needed anymore

int main(int argc, char *argv[])
{
    InputBuffer *input_buffer = new_input_buffer();
    while (true)
    {
        print_prompt();
        read_input(input_buffer);
        if (strcmp(input_buffer->buffer, ".exit") == 0)
        {
            close_input_buffer(input_buffer);
            exit(EXIT_SUCCESS);
        }
        else
        {
            printf("Unrecognized command '%s'. \n", input_buffer->buffer);
        }
    }
}