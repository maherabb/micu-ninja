#ifndef MICU_NINJA_OBSERVER_HPP_
#define MICU_NINJA_OBSERVER_HPP_

#include <string>
#include <memory>
#include <functional>
#include "Subject.hpp"

namespace micuninja
{

class Observer : public std::enable_shared_from_this<Observer>
{
public:
	Observer(const std::shared_ptr<Subject>&);

    virtual void update(const std::string&) = 0;
    int getUniqueId();

    virtual ~Observer() { }

protected:
    int observerUniqueId_;

private:
	static int observersCounter_;
};

}  // namespace micuninja

#endif  // MICU_NINJA_OBSERVER_HPP_
