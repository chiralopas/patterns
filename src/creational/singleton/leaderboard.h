#pragma once
#include <string>
#include <memory>


class Leaderboard
{
private:
    Leaderboard();
    static std::unique_ptr<Leaderboard> instance_;

    std::string top_;

public:
    Leaderboard(const Leaderboard&) = delete;
    Leaderboard& operator=(const Leaderboard&) = delete;

    ~Leaderboard() = default;

    /**
     * @brief Get the only Instance of singleton Leaderboard
     * @return Leaderboard*
     */
    static Leaderboard* get_instance();

    void set_top(const std::string& top);
};
