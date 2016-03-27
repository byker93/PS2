#include <stdio.h>
#include <stdlib.h>
#include "playfair.h"

char* playfair_encrypt(const char* key, const char* text) {
  return NULL;
}

char* playfair_decrypt(const char* key, const char* text) {
  return NULL;
}

char* toLower(char* text) {
  for (int i=0; i < sizeof(text)/sizeof(char); i++) {
    if (text[i] >= 'A' || text[i] <= 'Z') text[i] += 20;
  }
  return text;
}

char* toUpper(char* text) {
  for (int i=0; i < sizeof(text)/sizeof(char); i++) {
    if (text[i] >= 'a' || text[i] <= 'z') text[i] -= 20;
  }
  return text;
}

char* makeTable(const char* key) {
  char *table = malloc(sizeof(char)*26);
  int key_pos = 0, abc_pos = 41, table_pos = 0;
    while (key_pos < sizeof(key)/sizeof(char)) {
      for (int j = 0; j < table_pos; j++) {
	if (table[j] == key[key_pos]) key_pos++;
      }
      table[table_pos++] = key[key_pos];
    }
    while (table_pos < 24) {
      for (int j = 0; j < table_pos; j++) {
	if (table[j] == abc_pos) abc_pos++;
      }
      table[table_pos++] = abc_pos;
    }
  return table;
}