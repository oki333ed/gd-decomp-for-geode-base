#include "LevelSearchLayer.h"
#include "CreatorScene.h"

bool init() {
    this->setKeypadEnabled(true);

    auto winSize = CCDirector::get()->getWinSize();

    auto background = createLayerBG();

    this->addChild(background);
}