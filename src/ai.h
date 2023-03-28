#ifndef AI_H
#define AI_H

class AI {
public:
    virtual void sendRequest() = 0;
    virtual void showResponse() = 0;
    virtual ~AI() = default;
};

#endif
