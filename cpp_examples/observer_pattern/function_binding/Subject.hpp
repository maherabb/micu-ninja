#ifndef MICUNINJA_SUBJECT_HPP_
#define MICUNINJA_SUBJECT_HPP_

#include <memory>
#include <functional>

namespace micuninja
{

class Observer;

using UpdateCallBack = std::function<void(std::string)>;

class Subject
{
public:
    virtual void registerr(int, const UpdateCallBack&) = 0;
    virtual void unregister(int) = 0;
    virtual void notifyObserver() = 0;

    virtual ~Subject() { }
};

}  // namespace micuninja

#endif  // MICUNINJA_SUBJECT_HPP_
