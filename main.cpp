//
// main.cpp for main in /home/givern_f/rendu/rush2
// 
// Made by Givernaud Florian
// Login   <givern_f@epitech.net>
// 
// Started on  Sat Jan 17 11:11:58 2015 Givernaud Florian
// Last update Sat Jan 17 12:52:57 2015 Givernaud Florian
//

#include <iostream>
#include "Toy.hh"

Toy	**MyUnitTests();

int	main()
{
  Toy	**tab;

  tab = MyUnitTests();
  tab[0]->isTaken();
  tab[1]->isTaken();
  return (0);
}
