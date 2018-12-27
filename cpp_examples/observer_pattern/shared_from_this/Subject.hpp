#ifndef MICUNINJA_SUBJECT_HPP_
#define MICUNINJA_SUBJECT_HPP_

#include <memory>

namespace micuninja
{

class Observer;

class Subject
{
public:
    virtual void registerr(const std::shared_ptr<Observer>&) = 0;
    virtual void unregister(const  std::shared_ptr<Observer>&) = 0;
    virtual void notifyObserver() = 0;

    virtual ~Subject() { }
};

}  // namespace micuninja

#endif  // MICUNINJA_SUBJECT_HPP_
