#ifndef CELL_H
#define CELL_H
#include <mutex>
/*! \enum CellType
 *
 *  Helps determine the type of Cell
 */
enum class CellType { CELL, STATION };
class Cell
{
private:
    CellType type;
    std::mutex cellKey;
public:
    Cell();
    Cell(CellType _type);
    bool getCellType();
    void enter();
    void leave();
};

#endif /* CELL_H */
