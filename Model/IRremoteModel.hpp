#ifndef IRREMOTEMODEL_H
#define IRREMOTEMODEL_H

#include "key_data.h"

#include <QList>

using KeysStorage = QList<key_data_t>;

class IRremoteModel
{
public:
    IRremoteModel();

    KeysStorage keys;

    KeysStorage &getKeyTableFromRemoteDevice();
    key_data_t& getKeyData(int item);
    void setKeyData(int item, key_data_t &keyData);
    void fillModelWithTestData();

};

#endif // IRREMOTEMODEL_H
