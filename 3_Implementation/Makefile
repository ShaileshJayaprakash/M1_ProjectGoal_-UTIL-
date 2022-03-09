SRC = main.c\
src/create.c\
src/search.c\
src/pay.c\
src/add.c\
src/print.c 

INC = inc

new.out : $(SRC)
	gcc $^ -I$(INC)  -o $@

run : new.out
	.\new.out

clean : 
	rm new.out 