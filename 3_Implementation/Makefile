main.exe: main.c src/calculator.c
		gcc -Iinc ./src/calculator.c ./main.c -o main.exe

run : main.exe
		./main.exe

clean:
		rm *.exe