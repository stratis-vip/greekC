CC=clang
DBG=-g
CLANGS=-Wall -std=c11
INC=../includes/

all: random paragontiko test mstring_test

random: random.c 
	@$(CC) $(DBG) $(CLANGS) -I$(INC) $^ -o $@

test: test.c mstring.o
	@$(CC) $(DBG) $(CLANGS) -I$(INC) $^ -o $@

paragontiko: paragontiko.c my_math.o alg_anadromi.o array.o mstd.o
	@$(CC) $(DBG) $(CLANGS) -I$(INC) $^ -o $@

mstring.o: mstring.c mstring.h
	@$(CC) $(DBG) $(CLANGS) -I$(INC) -c $< -o  $@

my_math.o: my_math.c my_math.h
	@$(CC) $(DBG) $(CLANGS) -I$(INC) -c $< -o  $@

alg_anadromi.o: alg_anadromi.c alg_anadromi.h
	@$(CC) $(DBG) $(CLANGS) -I$(INC) -c $< -o  $@

array.o: array.c mstd.o array.h
	@$(CC) $(DBG) $(CLANGS) -I$(INC) -c $< -o  $@	

mstd.o: mstd.c mstd.h
	@$(CC) $(DBG) $(CLANGS) -I$(INC) -c $< -o  $@

mstring_test: mstring_test.c mstring.o
	@$(CC) $(DBG) $(CLANGS) $^ -o  $@ -lcriterion


check: *_test
	@./*_test

clean:
	@rm -rf *.dSYM random *.o main paragontiko results in mstring_test test 
