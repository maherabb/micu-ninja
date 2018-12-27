#include "Observer.hpp"

namespace micuninja
{

Observer::Observer(const std::shared_ptr<Subject>& subject)
{
    observerUniqueId_ = ++observersCounter_;
    subject->registerr(observerUniqueId_,
        std::bind(&Observer::update, this, std::placeholders::_1));
}

int Observer::getUniqueId()
{
    return observerUniqueId_;
}

int Observer::observersCounter_ = 0;

}  // namespace micuninja