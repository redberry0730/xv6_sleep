#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include <stdarg.h>

int main(int argc, char *argv[]) {
	if (argc < 2){
		printf("usage: sleep num_seconds\n");
		exit(1);
	}
	int sleep_time = atoi(argv[1]);
	if (sleep_time > 0) {
		sleep(10*sleep_time);
	}
	else {
		printf("must sleep for at least one second!\n");
	}
	exit(0);
}
