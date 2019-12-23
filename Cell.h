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
private:
    CellType m_type;
    // Mutex protecting the *specific instance* of the cell.
    std::mutex* m_cellKey;
public:
    Cell();
    Cell(CellType _type);
    CellType getCellType();
    void promoteCell(); // Upgrading a cell to station level.
    void enter(); // Enter and leave this cell.
    void leave();
};

#endif /* CELL_H */
