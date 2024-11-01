#include "rpstools.h"

int CheckResults(char* player01, char* player02) {
	if ((player01 == "ROCK" && player02 == "SCISSORS") ||
			(player01 == "PAPER" && player02 == "ROCK") ||
			(player01 == "SCISSORS" && player02 == "PAPER")) {
		return 1;
	}
	else if ((player01 == "ROCK" && player02 == "PAPER") ||
		(player01 == "PAPER" && player02 == "SCISSORS") ||
		(player01 == "SCISSORS" && player02 == "ROCK")) {
		return 2;
	}
	else if ((player01 == "ROCK" && player02 == "ROCK") ||
		(player01 == "PAPER" && player02 == "PAPER") ||
		(player01 == "SCISSORS" && player02 == "SCISSORS")) {
		return 3;
	}
	else {
		return 4;
	}
}