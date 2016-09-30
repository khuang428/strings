strtest: strings.c
	gcc -o strtest strings.c
run: strtest
	./strtest
