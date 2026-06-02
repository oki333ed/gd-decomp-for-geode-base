#pragma once

#include <Geode/DefaultInclude.hpp>
#include "GJSearchObject.h"

using namespace geode::prelude;

class LevelSearchLayer : public cocos2d::CCLayer {
public:
    static LevelSearchLayer* create(int type);
    static cocos2d::CCScene* scene(int type);

    virtual void keyBackClicked();
    virtual void textInputOpened(CCTextInputNode* node);
    virtual void textInputClosed(CCTextInputNode* node);
    virtual void textChanged(CCTextInputNode* node);
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);
    virtual void demonFilterSelectClosed(int filter);
    bool checkDiff(int diff);
    bool checkTime(int time);
    void clearFilters();
    void confirmClearFilters(cocos2d::CCObject* sender);
    char const* getDiffKey(int diff);
    gd::string getLevelLenKey();
    gd::string getSearchDiffKey();
    GJSearchObject* getSearchObject(SearchType type, gd::string query);
    char const* getTimeKey(int time);
    bool init(int type);
    void onBack(cocos2d::CCObject* sender);

    // Don't fully
};