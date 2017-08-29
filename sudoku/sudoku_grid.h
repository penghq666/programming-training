#ifndef SUDOKU_GRID_H
#define SUDOKU_GRID_H

#include <QtWidgets>
#include <vector>
#include "sudoku_cell.h"

class SudokuGrid : public QLabel
{
	Q_OBJECT

public:
	explicit SudokuGrid(QWidget *parent = 0);
	~SudokuGrid();

signals:

public slots:

private:
	int cell_size, cell_span;
	QGridLayout *top_layer;
	std::vector<QGridLayout*> grids;
	std::vector<SudokuCell*> cells;
};

#endif // SUDOKU_GRID_H
