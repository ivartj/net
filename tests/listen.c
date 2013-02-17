#include "../net.h"
#include <assert.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int s;

	s = tcplisten("14141");
	assert(s != -1);
	close(s);

	exit(EXIT_SUCCESS);
}
