#ifndef MICU_NINJA_OBSERVER_HPP_
#define MICU_NINJA_OBSERVER_HPP_

#include <string>
#include <memory>

namespace micuninja
{

class Observer : public std::enable_shared_from_this<Observer>
{
public:
    virtual void update(const std::string&) = 0;
    int getUniqueId();

    virtual ~Observer() { }
    
protected:
	static int observersCounter_;
    int observerUniqueId_;
};

}  // namespace micuninja

#endif  // MICU_NINJA_OBSERVER_HPP_
