--------
Salu\n
Bonjour\n
Hola
--------

1) appel1 de GNL
(fct read) string1 = salu\n -> return / etape 1
	reste statique : b\0 sauvegarde dans malloc buff size

2) appel2 de fct GNL dans main, string repart de \0 : 
string2 = reste statique + on -> return appel1 et appel2 ?
	reste statique = \0

3) appel3 de fct GNL dans main, string repart de \0 : 
string3 = jou -> return 1, 2 et 3 ?
	reste statique = \0

4) appel4 de fct GNL dans main, string repart de \0 : 
string4 = r\n -> return 1, 2, 3 et 4 ?
	reste statique = h\0

5) appel5 de fct GNL dans main, string repart de \0 : 
string5 = reste statique + ola -> return 1 2 3 4 5
	reste statique = \n\0 ?



malloc : buf = 3
bytes lus n = 3

nb = read(fd, buf, n) pour return bytes lus
buf devient la suite
str_temp += str_temp + buf
si nb < n alors str_temp += reste statique + str_temp + buf

   
