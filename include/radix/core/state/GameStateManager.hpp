#ifndef RADIX_GAME_STATE_MANAGER_HPP
#define RADIX_GAME_STATE_MANAGER_HPP

#include <radix/BaseGame.hpp>
#include <radix/core/event/Event.hpp>

namespace radix {

class GameStateManager {
public:
  struct WinEvent : public Event {
    radix_event_declare("radix/GameState:Win")

    WinEvent() {}
  };

public:
  void handleInput(BaseGame &game);
};

} /* namespace radix */

#endif /* RADIX_GAME_STATE_MANAGER_HPP */
