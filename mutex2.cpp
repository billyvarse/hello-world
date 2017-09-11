#include <sys/sem.h>
#include <stdio.h>

main()
{
          int id;
          id=semget(12345,1,0);
          struct sembuf sb={0,-1,0};
          printf("\n Press any key to LOCK");
          getchar();
          printf("\n Trying to LOCK");
          semop(id,&sb,1);
          printf("\n LOCKED");

          printf("\n Press any key to UNLOCK");
          getchar();
          printf("\n Trying to UNLOCK");
          sb.sem_op=1;
          semop(id,&sb,1);
          printf("\n UNLOCKED");
}

