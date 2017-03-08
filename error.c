void  error(int error)
{
  if (error == USAGE)
    printf("bad usage: ./bsq [fileName]"\n);
  if (error == FD)
    printf("Error open File \n")
  if (error == READ)
    printf("Error while reading Line \n")
}
