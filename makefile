all: stringshw.o stringhw.c
	gcc -o strhw stringshw.o stringhw.c

stringshw.o: stringshw.c
	gcc -c stringshw.c

clean:
	rm *o
	rm *~

run: all
	./strhw
