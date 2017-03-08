# include "bsq.h"


void  bsq(char **av){
  int ret;
  int fd;
  int count = 0;
  int lines;

  fd = open(av[1], O_RDONLY);
  if (fd == -1)
    return (error(FD));

  while ((ret = getline(fd)) != 0)
      count += 1;
  if ret == -1
    return (error(READ));
  lines = count;
  count = 0;

  columns = strlen(getline(fd));
}
