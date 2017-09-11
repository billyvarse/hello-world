#include <sys/sem.h>

main()
{
          int id;
          id=semget(12345,1,0666 | IPC_CREAT);
          semctl(id,0,SETVAL,1);

}