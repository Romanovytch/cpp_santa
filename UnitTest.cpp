//
// UnitTest.cpp for UnitTests in /home/givern_f/rendu/rush2
// 
// Made by Givernaud Florian
// Login   <givern_f@epitech.net>
// 
// Started on  Sat Jan 17 11:04:51 2015 Givernaud Florian
// Last update Sat Jan 17 12:33:56 2015 Givernaud Florian
//

#include "Toy.hh"
#include "Teddy.hh"
#include "LittlePony.hh"

Toy **MyUnitTests()
{
  Toy	*array = new Toy [1];

  array[0] =  new LittlePony("gay pony");
  return (array);
}
