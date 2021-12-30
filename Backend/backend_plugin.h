#ifndef BACKEND_PLUGIN_H
#define BACKEND_PLUGIN_H

#include <QQmlExtensionPlugin>

class BackendPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // BACKEND_PLUGIN_H
