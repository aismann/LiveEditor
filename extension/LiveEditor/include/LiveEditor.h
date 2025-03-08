#pragma once

NS_AX_EXT_BEGIN
 
class LiveEditor
{
public:
    static LiveEditor* getInstance();
    void startPoint(ax::Scene*);
    void close();
};

NS_AX_EXT_END
