prog.out: bin/recherche.o bin/main.o bin/admin.o bin/comparaison.o bin/indexation.o bin/img.o bin/indexation_txt.o bin/descripteurAudio.o bin/pile_Img.o bin/pile_Audio.o bin/pile_Texte.o bin/interface.o bin/pwd.o
	gcc bin/recherche.o bin/main.o bin/admin.o bin/comparaison.o bin/indexation.o bin/img.o  bin/indexation_txt.o bin/descripteurAudio.o bin/pile_Img.o bin/pile_Audio.o bin/pile_Texte.o bin/interface.o bin/pwd.o -o prog.out -lm

bin/interface.o: src/interface.c include/interface.h
	gcc -c src/interface.c -o bin/interface.o -Wall

bin/pwd.o: src/pwd.c include/pwd.h
	gcc -c src/pwd.c -o bin/pwd.o -Wall

bin/recherche.o: src/recherche.c include/recherche.h
	gcc -c src/recherche.c -o bin/recherche.o -Wall

bin/admin.o: src/admin.c include/admin.h
	gcc -c src/admin.c -o bin/admin.o -Wall

bin/comparaison.o: src/comparaison.c include/comparaison.h
	gcc -c src/comparaison.c -o bin/comparaison.o -Wall

bin/indexation.o: src/indexation.c include/indexation.h
	gcc -c src/indexation.c -o bin/indexation.o -Wall

bin/img.o: src/img.c include/img.h
	gcc -c src/img.c -o bin/img.o

bin/indexation_txt.o: src/indexation_txt.c include/indexation_txt.h
	gcc -c src/indexation_txt.c -o bin/indexation_txt.o -Wall

bin/pile_Img.o: src/pile_Img.c include/pile_Img.h
	gcc -c src/pile_Img.c -o bin/pile_Img.o -Wall

bin/pile_Audio.o: src/pile_Audio.c include/pile_Audio.h
	gcc -c src/pile_Audio.c -o bin/pile_Audio.o -Wall

bin/pile_Texte.o: src/pile_Texte.c include/pile_Texte.h
	gcc -c src/pile_Texte.c -o bin/pile_Texte.o -Wall

bin/descripteurAudio.o: src/descripteurAudio.c include/descripteurAudio.h
	gcc -c src/descripteurAudio.c -o bin/descripteurAudio.o -Wall

bin/main.o: src/main.c
	gcc -c src/main.c -o bin/main.o -Wall