#include "rpstools.h"

int CheckResults(char* player01, char* player02) {
	if ((player01 == "ROCK" && player02 == "SCISSORS") ||
		(player01 == "PAPER" && player02 == "ROCK") ||
		(player01 == "SCISSORS" && player02 == "PAPER")) {
		return 1;
	}
}