#include <io.h>

void capitalize(char* c)
{
    if (*c>=97 && *c<=122)
        *c-=32;
}

void putSpace(int word, int* space, char c)
{
    if (word > 1 && !*space && c != ' ')
        {
            write(1, " ", 1);
            *space = 0;
        }
}

int main(int argc, char* argv[])
{
    int fd = 1;
    if (argc == 1)
    {
        write(fd, "* LOUD AND UNBEARABLE FEEDBACK NOISE *", 38);
    }
    int word = 1;
    int space = 0;
    while (word < argc)
    {
        int i = 0;
        char c;
        putSpace(word, &space, argv[word][0]);
        while (argv[word][i])
        {
            c = argv[word][i];
            capitalize(&c);
            write(fd, &c, 1);
            i++;
        }
        if (c==' ')
            space = 1;
        word++;
    }
}