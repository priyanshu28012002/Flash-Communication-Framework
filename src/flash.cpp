#include "flash.hpp"

Flash::Flash(FlashType t) : type(t) {}

Flash::~Flash() {}

void Flash::printType() const {
    switch(type) {
        case FlashType::IPC:     std::cout << "IPC\n"; break;
        case FlashType::SERIAL:  std::cout << "SERIAL\n"; break;
        case FlashType::NETWORK: std::cout << "NETWORK\n"; break;
    }
}