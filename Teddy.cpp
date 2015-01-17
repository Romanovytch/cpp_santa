//
// Teddy.cpp for Teddy in /home/givern_f/rendu/rush2
// 
// Made by Givernaud Florian
// Login   <givern_f@epitech.net>
// 
// Started on  Sat Jan 17 10:51:47 2015 Givernaud Florian
// Last update Sat Jan 17 11:18:30 2015 Givernaud Florian
//

#include <string>
#include <iostream>
#include "Teddy.hh"

Teddy::Teddy(std::string title)
  : Toy()
{
  this->_title = title;
}

Teddy::~Teddy()
{

}

void		Teddy::isTaken()
{
  std::cout << "gra hu" << std::endl;
}
