#include "flash.hpp"

int main() {
    Flash f(FlashType::NETWORK);
    Flash r(FlashType::IPC);
    f.printType();
    r.printType();
}