/**
 *Everyone knows passphrases. One can choose passphrases from poems, songs, movies names and so on but frequently 
  they can be guessed due to common cultural references. You can get your passphrases stronger by different means. 
  One is the following:

  1.choose a text in capital letters including or not digits and non alphabetic characters,
  2.shift each letter by a given number but the transformed letter must be a letter (circular shift),
  3.replace each digit by its complement to 9,
  4.keep such as non alphabetic and non digit characters,
  5.downcase each letter in odd position, upcase each letter in even position (the first character is in position 0),
  6.reverse the whole result.
 *
 */

/*Example :
 * BORN IN 2015!", shift 1
 *
 * 1 + 2 + 3 -> "CPSO JO 7984!"
 *
 * 4 "CpSo jO 7984!"
 *
 * 5 "!4897 Oj oSpC"
 *
 */

#include<stdio.h>
#include<string.h>//Why this?
#include<stdlib.h>//Why this?
void doTest(char *s, int n, char* expr);
char* playPass(char* s, int n){
  
 return "aa";
}
//Test function, please don't modify it.
void doTest(char* s, int n, char* expr){
  char *sact = playPass(s, n);
  if(strcmp(sact, expr) != 0){
    printf("Some error in your play pass function.Expected \n%s\n but got \n%s\n",expr, sact);
    exit(-1);
	}
}
int main(int argc, char ** argv){
  doTest("I LOVE YOU!!!", 1, "!!!vPz fWpM J");
  doTest("AAABBCCY", 1, "zDdCcBbB");
  doTest("MY GRANMA CAME FROM NY ON THE 23RD OF APRIL 2015", 2,
            "4897 NkTrC Hq fT67 GjV Pq aP OqTh gOcE CoPcTi aO");
  printf("--------------------------------\n");
  printf("|You have passed all of them.|\n");
  printf("--------------------------------\n");
}
