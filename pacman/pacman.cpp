#include "pacman.h"

namespace Action {
    void GameController::LoadMap(const std::vector<std::vector<int>>& values) {
        
    }

    void GameController::RedrawMap() {
        
    }

    void GameController::UpdateMap() {
        
    }

    void GameController::ResetMap() {
        
    }

    void GameController::UpdateScore() {
        
    }

    void GameController::ResetPacmanPosition() {
        
    }

    void GameController::ResetGhostPosition(uint8_t ghostNum) {
        
    }

    void GameController::RefillCookies() {
        
    }

    bool GameController::HasCookie(const Position& position) const {
        
    }

    bool GameController::EatCookie(const Position& position) {
       
    }

    bool GameController::IsPositionValid(const Position& position) const {
        
    }

    bool Movement::IsMoveable(MoveDirection moveDirection) {
        
    }

    bool Movement::MoveLeft() {
        
    }

    bool Movement::MoveRight() {
        
    }

    bool Movement::MoveUp() {
        
    }

    bool Movement::MoveDown() {
        
    }

    uint8_t Pacman::GetLives() const {
       
    }

    void Pacman::UpdatePosition(MoveDirection moveDirection) {
        
    }

    Position Pacman::GetCurrentPosition() const {
        
    }

    void Pacman::TakeOneLife() {
        
    }

    void Ghost::UpdatePosition(const Position& position) {
        
    }

    Position Ghost::GetCurrentPosition() const {
        
    }
}
