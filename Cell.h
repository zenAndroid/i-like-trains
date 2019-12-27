#ifndef CELL_H
#define CELL_H
#include <mutex>
/*! \enum CellType
 *
 *  Helps determine the type of Cell
 */
enum class CellType { CELL = 1 , STATION };

class Cell
{
public:
    std::string m_cellName; // Guess
    CellType m_type;
    // Mutex protecting the *specific instance* of the cell.
    std::mutex* m_cellKey;
    // ----------------------------- //
    Cell();
    Cell(CellType, std::string);
    CellType getCellType();
    void promoteCell(std::string); // Upgrading a cell to station level.
    void enter(std::string); // Enter and leave this cell.
    void leave(std::string);

};

#endif /* CELL_H */
