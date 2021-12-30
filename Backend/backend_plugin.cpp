#include "backend_plugin.h"

#include "backend.h"

#include <qqml.h>

void BackendPlugin::registerTypes(const char *uri)
{
    // @uri Backend
    qmlRegisterType<Backend>(uri, 1, 0, "Backend");
}

