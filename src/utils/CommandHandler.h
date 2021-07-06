#ifndef HANDLER_H
#define HANDLER_H

#include "../commands/TestCommand.h"
#include "inferfaces/Command.h"
#include <string>
#include <map>
#include <iostream>

namespace Handler {
    std::map<std::string, CMD::Command*> commandMap;
        
    void registerCommands() {
        commandMap.insert(std::make_pair<std::string, CMD::Command*>("test", new TestCommand));
    }
};

#endif // HANDLER_H
