#pragma once

class IDummy {
public:
    virtual void dummy() = 0;
};

class Test : public IDummy {
public:
    void dummy();
};
