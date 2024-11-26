soal6 : soal6.o
	g++ soal6.o -o soal6
soal6.o : soal6.cpp
	g++ -c soal6.cpp -o soal6.o
test_soal6 : test_soal6.o
	g++ test_soal6.o -o test_soal6
test_soal6.o : test_soal6.cpp
	g++ -c test_soal6.cpp -o test_soal6.o
test : test_soal6 soal6
	./test_soal6
	./soal6
clean :
	rm -f soal6 soal6.o
