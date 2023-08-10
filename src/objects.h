struct PotentialNumber {
	char number;
	struct PotentialNumber * next;
};

struct Cell {
	char number;
	struct PotentialNumber * choices;
};
