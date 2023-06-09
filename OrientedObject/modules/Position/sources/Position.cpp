#include "../includes/Position.hpp"

void Position::showPosition() { std::cout << "(" << x << "," << y << ")\n"; }

// Exemplo de sobrecarga do operador ==
bool Position::operator==(const Position &b) const {
  return (x == b.x && y == b.y);
}
void Position::setPosition(const Position &b) {
  x = b.x;
  y = b.y;
}