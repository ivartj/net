#define WIN32_LEAN_AND_MEAN
#define WINVER 0x501
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>

static int initialize(void);
static void cleanup(void);

static int initialized = 0;

int ws_initialize(void)
{
	int err;
	WSADATA wsa;

	if(initialized)
		return;

	err = WSAStartup(MAKEWORD(2, 2), &wsa);
	if(err)
		return 1;

	atexit(cleanup);

	initialized = 1;

	return 0;
}

void cleanup(void)
{
	WSACleanup();
}
