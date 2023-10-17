#include "main.h"
/**
 * location - determine the location
 * @command: the command
 * Return: Null
 */

char *location(char *command)
{
    char *path, *copy, *token, *file_path;
    int length, directory_length;
    struct stat buffer;

    path = getenv("PATH");
    if (path)
    {
        copy = strdup(path);
        length = strlen(command);
        token = strtok(copy, ":");
        while(token != NULL)
        {
            directory_length = strlen(token);
            file_path = malloc(length + directory_length + 2);
            strcpy(file_path, token);
            strcat(file_path, "/");
            strcat(file_path, command);
            strcat(file_path, "\0");
            if (stat(file_path, &buffer) == 0)
            {
                free(copy);
                return (file_path);
            }
            else
            {
                free(file_path);
                token = strtok(NULL, ":");
            } 
        }
        free(copy);
        if (stat(command, &buffer) == 0)
        {
            return (command);
        }
        return (NULL);
    }
    return (NULL);
    }
