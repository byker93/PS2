//Funkcia na zašifrovanie textu aplikovaním Playfairovej šifry. 
//Parametre:
//   const char* text - Odkaz na reťazec, ktorý reprezentuje text na zašifrovanie. 
//Tento text môže pozostávať len z písmen, pričom na veľkosti písmen nezáleží, 
//alebo zo znaku medzery. Žiadne iné znaky nie sú prípustné (nie je možné ich 
//zašifrovať).
//   const char* key - Odkaz na reťazec, ktorý reprezentuje kľúč, pomocou ktorého 
//bude text zašifrovaný. Kľúč je reprezentovaný jedným slovom, v ktorom nezáleží 
//na veľkosti písmen. Jednotlivé písmená sa v kľúči nemôžu opakovať (ak sa opakujú 
//tak vo vašej implementácii zabezpečte, že duplikáty budú odstránené).
//Návratová hodnota: 
//    referencia na zašifrovaný reťazec 
char* playfair_encrypt(const char* key, const char* text);

//Funkcia na dešifrovanie textu aplikovaním Playfairovej šifry. 
//Parametre:
//   const char* text - Odkaz na reťazec, ktorý reprezentuje text na dešifrovanie. 
//   const char* key - Odkaz na reťazec, ktorý reprezentuje kľúč, pomocou ktorého 
//je text zašifrovaný. Kľúč je reprezentovaný jedným slovom, v ktorom nezáleží 
//na veľkosti písmen.
//Návratová hodnota: referencia na dešifrovaný reťazec. 
char* playfair_decrypt(const char* key, const char* text);


char* toLower(char* text);
char* toUpper(char* text);
char* makeTable(const char* key);
