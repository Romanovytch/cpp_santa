//
// LittlePony.hh for LittlePony in /home/givern_f/rendu/rush2
// 
// Made by Givernaud Florian
// Login   <givern_f@epitech.net>
// 
// Started on  Sat Jan 17 10:54:14 2015 Givernaud Florian
// Last update Sat Jan 17 11:17:00 2015 Givernaud Florian
//

#ifndef LITTLEPONY_HH_
# define LITTLEPONY_HH_

#include <string>
#include "Toy.hh"

class	LittlePony : public Toy
{
protected:
  std::string		_title;

public:
  LittlePony(std::string);
  ~LittlePony();

public:
  virtual void		isTaken();
};

#endif /* !LITTLEPONY_HH_ */
