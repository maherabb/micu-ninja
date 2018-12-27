#include "Observer.hpp"

namespace micuninja
{

int Observer::getUniqueId()
{
	return observerUniqueId_;
}

int Observer::observersCounter_ = 0;

}  // namespace micuninja
