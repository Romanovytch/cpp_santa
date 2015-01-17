//
// LittlePony.cpp for LittlePony in /home/givern_f/rendu/rush2
// 
// Made by Givernaud Florian
// Login   <givern_f@epitech.net>
// 
// Started on  Sat Jan 17 10:56:51 2015 Givernaud Florian
// Last update Sat Jan 17 12:54:57 2015 Givernaud Florian
//

#include <iostream>
#include <string>
#include "LittlePony.hh"

LittlePony::LittlePony(std::string title)
  : Toy()
{
  this->_title = title;
}

LittlePony::~LittlePony()
{
}

void		LittlePony::isTaken()
{
  std::cout << "yo man" << std::endl;
}

std::string     LittlePony::getTitle()
{
  return (this->_title);
}
