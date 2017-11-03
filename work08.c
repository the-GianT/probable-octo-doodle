#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>

int main()
{
  struct stat sb;
  stat("README.md", &sb);

  printf("README.md:\n\tfile size: %lu bytes\n\tmode: %o\n\ttime of last access: %s\n", sb.st_size, sb.st_mode, ctime(&sb.st_atime));

  return 0;
}
