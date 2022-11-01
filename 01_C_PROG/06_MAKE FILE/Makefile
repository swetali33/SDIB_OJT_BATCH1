#Rule-1:

#<target>:dependencies


#Rule-2:

#<tabspace>commands

#Rule-3:
#<phony_target>:
#<tabspace>commands
App: app.c add.o sub.o arith.h
		gcc app.c -o App libsweta.a


add.o:add.c
		gcc -c add.c

sub.o:sub.c
		gcc -c sub.c

clean:
		rm *.o App