#pragma once

#include <Geode/DefaultInclude.hpp>

using namespace geode::prelude;

class GJSearchObject : public cocos2d::CCNode {
public:
    static GJSearchObject* create(SearchType searchType);
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery);
    static GJSearchObject* create(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);
    static GJSearchObject* createFromKey(char const* key);
    static char const* getSearchKey(SearchType searchType, gd::string searchQuery, gd::string difficulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    char const* getKey();
    char const* getNextPageKey();
    GJSearchObject* getNextPageObject();
    GJSearchObject* getPageObject(int page);
    GJSearchObject* getPrevPageObject();
    bool init(SearchType searchType, gd::string searchQuery, gd::string difficaulty, gd::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);
    bool isLevelSearchObject();

    SearchType m_searchType;
    gd::string m_searchQuery;
    gd::string m_difficulty;
    gd::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};