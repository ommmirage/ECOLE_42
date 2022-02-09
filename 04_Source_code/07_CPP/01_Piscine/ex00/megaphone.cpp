#include <io.h>

int main(int argc, char* argv[])
{
    int fd = 1;
    int i = 0;
    char c;
    while (argv[1][i])
    {
        c = argv[1][i];
        
        write(fd, &c, 1);
        i++;
    }
}