#pragma once

#include "std/string.h"

class Minecraft;
class ServerLevel;

class CommandOrigin {
};

enum class CommandPermissionLevel {
    Visitor = 0,
    ByPassSpawn = 1,
    Operator = 2,
    ServerAdministrator = 3,
    ServerConsole = 4
};

class ServerCommandOrigin : public CommandOrigin {

public:

    char filler[0x20];

    ServerCommandOrigin(mcpe::string const& s, ServerLevel& m, CommandPermissionLevel l);

};
