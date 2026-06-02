#pragma once

#include <Geode/DefaultInclude.hpp>

using namespace geode::prelude;

class LevelBrowserLayer : public cocos2d::CCLayerColor {
public:
    static LevelBrowserLayer* create(GJSearchObject* object);
    static cocos2d::CCScene* scene(GJSearchObject* object);

    virtual void onEnter();
    virtual void onEnterTransitionDidFinish();
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);
    virtual void loadLevelsFailed(char const* key, int type);
    virtual void setupPageInfo(gd::string info, char const* key);
    virtual void onBack(cocos2d::CCObject* sender);
    virtual void shareCommentClosed(gd::string text, ShareCommentLayer* layer);
    virtual void setTextPopupClosed(SetTextPopup* popup, gd::string text);
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);
    virtual cocos2d:CCArray* updateResultArray(cocos2d::CCArray* results);
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);
    gd::string getSearchTitle();
    bool init(GJSearchObject* object);
    bool isCorrect(char const* key);
    void loadPage(GJSearchObject* object);
    void onClearSearch(cocos2d::CCObject* sender);
    void onDeleteAll(cocos2d::CCObject* sender);
    void onDeleteSelected(cocos2d::CCObject* sender);

    // Don't fully
    // I'm lazy here very big classes
    // Just wait updates for the full decompilation of this LevelBrowserLayer
};