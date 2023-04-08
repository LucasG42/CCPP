#include <memory>
#include "Block.hpp"
#pragma once
class smartPointers {
     std::shared_ptr<Block> myPtr = std::make_shared<Block>(42,42);
    public:
        smartPointers(int value1, int value2);
        void showInformation()const; 
        Block* getMyBlockPtr() const;
};