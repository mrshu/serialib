#include <stdio.h>
#include "serialib.h"
/*
typedef struct str{
	char *name;
	int id;
} sss;

void sss_init(sss **s, char* name, int id)
{
	*s = (sss *) malloc(sizeof(sss));
	(*s)->name = name;
	(*s)->id = id;
}
*/

int main(void)
{
	serial *s;
	if (serial_open(&s, "/dev/ttyUSB1", 115200) == 0){
		printf("Port opened.\n");

	} else {
		printf("Problem with port opening\n");
		return -1;
	}
	printf("%s -> %d\n", s->port, s->fd);
	system("sleep 3");
	
	char buffer[128];
	serial_read(s, buffer, '\n', 128);
	printf("%s %d\n", buffer, strlen(buffer));
	serial_read(s, buffer, '\n', 128);
	printf("%s %d\n", buffer, strlen(buffer));
	serial_read(s, buffer, '\n', 128);
	printf("%s %d\n", buffer, strlen(buffer));


	//while (1) {
/*
		serial_read(s, buffer, '\n', 128);
		printf("%s", buffer);
		
		timer *t;
		timer_init(&t);

		serial_read(s, buffer, '\n', 128);
		printf("%s", buffer);
		
		serial_write(s, "ls\r\n");
		sleep(1);

		printf("\nt=%d\n", timer_elapsed(t));
		//system("sleep 1");
		
		serial_read(s, buffer, '\n', 128);
		printf("%s", buffer);
		serial_read(s, buffer, '\n', 128);
		printf("%s", buffer);
		serial_read(s, buffer, '\n', 128);
		printf("%s", buffer);

	//}




*/






/*
	serial_read(s, buffer, '\n', 128);
	printf("-> %s\n", buffer);
	serial_read(s, buffer, '\n', 128);
	printf("-> %s\n", buffer);
	serial_read(s, buffer, '\n', 128);
	printf("-> %s\n", buffer);
*/

/*
	char p;
	int i;
	i = serial_read_char(s, &p);
	printf("-> %c %d ", p, i);
*/
/*
	sss *es;
	//es = (sss *) malloc(sizeof(sss));
	sss_init(&es, "ahoj", 5);
	printf("%s, %d\n",es->name, es->id);
*/
}

