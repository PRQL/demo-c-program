build-prql:
	cd prql; cargo build -p prql-lib --release

build: main.c build-prql
	gcc main.c -o main -Iprql/prql-lib -Lprql/target/release -l:libprql_lib.a -pthread -ldl -lm

run: build
	./main