//
// Teddy.hh for Teddy in /home/givern_f/rendu/rush2
// 
// Made by Givernaud Florian
// Login   <givern_f@epitech.net>
// 
// Started on  Sat Jan 17 10:47:56 2015 Givernaud Florian
// Last update Sat Jan 17 11:27:30 2015 Givernaud Florian
//

#ifndef TEDDY_HH_
# define TEDDY_HH_

#include <string>
#include "Toy.hh"

class	Teddy : public Toy
{
protected:
  std::string	_title;

public:
  Teddy(std::string);
  ~Teddy();

public:
  virtual void	isTaken();
};

#endif /* !TEDDY_HH_ */
