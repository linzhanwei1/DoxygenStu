all : main.o xtask1.o xtask2.o xtask3.o xtask1.h xtask2.h xtask3.h
	g++ $^ -o $@

.PHONY : clean
clean:
	rm -f *.o all