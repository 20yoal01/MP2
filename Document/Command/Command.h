//
// Created by Gorillaspluch on 2023-02-22.
//

#ifndef MP2_COMMAND_H
#define MP2_COMMAND_H

class Command {
public:
    virtual ~Command() {}
    virtual void execute() = 0;
};


#endif //MP2_COMMAND_H
