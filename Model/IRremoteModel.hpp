#ifndef IRREMOTEMODEL_H
#define IRREMOTEMODEL_H

#include <QList>

#include "key_data.h"

using KeysStorage = QList<key_data_t>;

class IRremoteModel {
public:
  IRremoteModel();

  QList<key_data_t> keys;

  QList<key_data_t> &getKeyTableFromRemoteDevice();
  key_data_t &getKeyData(int item);
  void setKeyData(int item, key_data_t &keyData);
  void fillModelWithTestData();
};

#endif  // IRREMOTEMODEL_H
