#include "Grid.h"
#include "SpreadsheetCell.h"

int main()
{
	Grid<int> myIntGrid;		// Initial value is 0
	Grid<int, 10> myIntGrid2;	// Initial value is 10

	SpreadsheetCell defaultCell;
	//Grid<SpreadsheetCell, defaultCell> mySpreadsheet; // WILL NOT COMPILE

	return 0;
}
