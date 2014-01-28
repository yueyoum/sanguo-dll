.PHONY: all
all: hero.so equipment.so


hero.so: hero.h hero.c
	gcc hero.c -o hero.so -fPIC -shared -Wall -lm

equipment.so: equipment.h equipment.c
	gcc equipment.c -o equipment.so -fPIC -shared -Wall

.PHONY: clean
clean:
	-rm -f hero.so

