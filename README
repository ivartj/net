This library provides convenience functions for experimenting with network
programming in C.

Compile and install with:

    autoreconf --install
    ./configure --prefix=$HOME/local      # Or whatever prefix you prefer
    make all install clean

If you have pkg-config installed, you should be able to link with the library
like this:

    CFLAGS=$(pkg-config --clfags ivartjnet)
    LDFLAGS=$(pkg-config --libs ivartjnet)
    
    gcc -o program $CFLAGS main.c $LDFLAGS

This library currently provides the following interface:

    #include <ivartj/net.h>

    /* Create server socket from which you can accept(2) incoming connections.
     */
    int tcplisten(const char *port);

    /* Same as tcplisten but force IPv4 or IPv6. */
    int tcplisten4(const char *port);
    int tcplisten6(const char *port);

    /* Connect to node and get socket on which you can send(2) and recv(2)
     * data */
    int tcpdial(const char *node, const char *port);

You likely want to use something like select(2) to listen on multiple file
descriptors and sockets at the same time, or use libevent if you are more
sophisticated.

Take a look at [Beej's Guide](http://beej.us/guide/bgnet/output/html/multipage/index.html) to learn more about network programming in C.
