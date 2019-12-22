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
    std::mutex* m_cellKey;
public:
    Cell();
    Cell(CellType _type);
    CellType getCellType();
    void enter();
    void leave();
};

#endif /* CELL_H */
