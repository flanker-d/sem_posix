#include <stdio.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>

int main(int argc, char *argv[])
{
  sem_t *semid = sem_open("/test.sem", O_CREAT, 0666, 66);
  if(semid == NULL)
  {
    perror("Ошибка при создании семафора: ");
    return -1;
  }

  return 0;
}
