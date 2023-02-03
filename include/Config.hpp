#pragma once
#include <string>
#include "beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "LeaderboardEntry.hpp"
namespace LocalLeaderboard::Config{
    void AddBeatMap(rapidjson::Value& obj, std::string mapID, std::string diff, int missCount, int badCutCount, bool fullCombo, std::string datePlayed, float acc);
    void UpdateBeatMapInfo(std::string mapID, std::string diff, int missCount, int badCutCount, bool fullCombo, std::string datePlayed, float acc);
    std::vector<LeaderboardEntry> LoadBeatMapInfo(std::string mapID, std::string diff, int page);
}