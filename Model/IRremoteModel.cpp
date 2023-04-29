#include "IRremoteModel.hpp"
#include "test_data.h"


IRremoteModel::IRremoteModel()
{
    fillModelWithTestData();
}

void IRremoteModel::fillModelWithTestData()
{
    keys.clear();

    for (auto &item : test_data) {
        this->keys.append(item);
    }
}


