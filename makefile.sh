#!/bin/sh

/opt/gbdk/bin/lcc main.c -c -o o/main.o

/opt/gbdk/bin/lcc tiles/placeholder.c -c -o o/bkgtile.o
/opt/gbdk/bin/lcc tiles/placeholder.c -c -o o/bkgmap.o

/opt/gbdk/bin/lcc sprites/placeholdersprite.c -c -o o/sprite.o

/opt/gbdk/bin/lcc o/main.o o/bkgtile.o o/bkgmap.o o/sprite.o -o main.gb

wine /opt/bgbw64/bgb64 main.gb

#clear