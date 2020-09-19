#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand(time(0));

int lostGame = 0, validCard = 0;
int upper = 21, lower = 2;
int card1, card2, dealersHand;
dealersHand = (rand() % (upper - lower + 1)) + lower;
// printf("%d", dealersHand);

while(!validCard) {
printf("Please enter your value for card 1 (> 0): ");
scanf("%d", &card1);
printf("Please enter your value for card 2 (> 0): ");
scanf("%d", &card2);

if(card1 < 0 || card1 > 11) {
  validCard = 0;
} else if(card2 < 0 || card2 > 11) {
  validCard = 0;
} else {
  validCard = 1;
}
}

while(!lostGame) {
if(card1 + card2 > 21) {
  printf("Bust!\n");
  lostGame = 1;
}
else if(card1 + card2 == 21) {
  printf("you won!\n");
  lostGame = 1;
}
else if((card1 + card2 < upper) && (card1 + card2 >= lower) && (card1 + card2) > dealersHand) {
  printf("you won!\n");
  break;
}
else if((card1 + card2 < upper) && (card1 + card2 >= lower) && (card1 + card2) < dealersHand) {
  printf("you lost to the value %d :(\n", dealersHand);
  break;
}
}


}