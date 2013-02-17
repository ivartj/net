#ifndef NET_H
#define NET_H

int tcplisten(const char *port);
int tcplisten4(const char *port);
int tcplisten6(const char *port);
int tcpdial(const char *node, const char *port);

#endif NET_H
