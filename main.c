# include "bsq.h"

int main(int ac, char **av)
{
  if (ac == 2)
    bsq(av);
  else
    return (error(USAGE));
  return (1);
}
