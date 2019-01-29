#ifndef DBTABLE_H
#define DBTABLE_H

#include <QTableView>

class DBTable : QTableView
{
    Q_OBJECT
    
public:
    int index();
};

#endif  //DBTABLE_H
