#ifndef __COIN_H__
#define __COIN_H__

#include "special/moving_object.h"

namespace SuperTux {
  class Sprite;
}

using namespace SuperTux;

class Coin : public MovingObject
{
public:
  Coin(const Vector& pos);
  ~Coin();

  HitResponse collision(GameObject& other, const CollisionHit& hit);
  void action(float elapsed_time);
  void draw(DrawingContext& context);

  void collect();

private:
  Sprite* sprite;
};

#endif

