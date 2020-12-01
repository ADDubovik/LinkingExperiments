#include "cpp11.h"

extern int externData;

int globalData;

static int staticData;

namespace
{
    int unnamedNamespaceData;
} // namespace

int getExternData()
{
    return externData;
}

void setExternData(int value)
{
    externData = value;
}

int getGlobalData()
{
    return globalData;
}

void setGlobalData(int value)
{
    globalData = value;
}

int getStaticData()
{
    return staticData;
}

void setStaticData(int value)
{
    staticData = value;
}

int getUnnamedNamespaceData()
{
    return unnamedNamespaceData;
}

void setUnnamedNamespaceData(int value)
{
    unnamedNamespaceData = value;
}
