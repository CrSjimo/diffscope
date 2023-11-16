#ifndef DIFFSCOPE_SCRIPTOBJECT_H
#define DIFFSCOPE_SCRIPTOBJECT_H

#include <QJSValue>

class ScriptObject {
public:
    virtual QJSValue createScriptObject() = 0;
};

class ScriptDescriptiveObject : public ScriptObject {
public:
    virtual void configureThisScriptObjectByDescription(QJSValue wrappedObject, const QJSValue &attributes,
                                                        const QJSValue &children,
                                                        const std::function<QJSValue(const QJSValue &)> &renderer);
};

#endif // DIFFSCOPE_SCRIPTOBJECT_H