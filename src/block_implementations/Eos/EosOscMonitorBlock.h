#ifndef EOSOSCMONITORBLOCK_H
#define EOSOSCMONITORBLOCK_H

#include "core/block_data/BlockBase.h"


class EosOscMonitorBlock : public BlockBase
{
    Q_OBJECT

public:

    static BlockInfo info() {
        static BlockInfo info;
        info.typeName = "Eos Connection Monitor";
        info.nameInUi = "Connection Monitor";
        info.category << "ETC Consoles" << "Eos";
        info.helpText = "Shows the OSC messages used for the Eos Connection.\n"
                        "With the buttons at the top you can choose if incoming and / or outgoing "
                        "messages will be logged and displayed.";
        info.qmlFile = "qrc:/qml/Blocks/Eos/EosOscMonitorBlock.qml";
        info.complete<EosOscMonitorBlock>();
        return info;
    }

    explicit EosOscMonitorBlock(MainController* controller, QString uid);

public slots:
    virtual BlockInfo getBlockInfo() const override { return info(); }
};

#endif // EOSOSCMONITORBLOCK_H
