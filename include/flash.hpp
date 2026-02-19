
#ifndef FLASH_HPP
#define FLASH_HPP

#include <iostream>

enum class FlashType {
    IPC,
    SERIAL,
    NETWORK
};
class Flash
{
private:
    FlashType type;

public:
    Flash(FlashType t);
    ~Flash();

    void printType() const;
};

#endif // FLASH_HPP