#pragma once

#include <vector>

namespace Action {
    enum class MoveDirection { UP = 65, DOWN = 90, LEFT = 70, RIGHT = 74 };

    struct Position {
        int32_t x;
        int32_t y;
        bool operator==(const Position& other) const {
            return (x == other.x) && (y == other.y);
        }
        Position& operator=(const Position& other) {
            x = other.x;
            y = other.y;
            return *this;
        }
    };

    class GameController {
        uint32_t score;
        std::vector<std::vector<char>> map;
    public:
        void LoadMap(const std::vector<std::vector<int>>& values);
        void RedrawMap();
        void UpdateMap();
        void ResetMap();
        void UpdateScore();
        void ResetPacmanPosition();
        void ResetGhostPosition(uint8_t ghostNum);
        void RefillCookies();
        bool HasCookie(const Position& position) const;
        bool EatCookie(const Position& position);
        bool IsPositionValid(const Position& position) const;
    };

    class Movement {
        Position position;
        GameController* gameController;
    public:
        bool MoveLeft();
        bool MoveRight();
        bool MoveUp();
        bool MoveDown();
    private:
        bool IsMoveable(MoveDirection moveDirection);
    };
}

namespace Components {
    class Pacman : public Action::Movement {
        uint8_t lives;
        Action::Position currentPosition;
    public:
        uint8_t GetLives() const;
        void UpdatePosition(Action::MoveDirection moveDirection);
        Action::Position GetCurrentPosition() const;
        void TakeOneLife();
    };

    class Ghost : public Action::Movement {
        uint32_t speed;
        Action::Position currentPosition;
    public:
        void UpdatePosition(const Action::Position& position);
        Action::Position GetCurrentPosition() const;
    };
}
