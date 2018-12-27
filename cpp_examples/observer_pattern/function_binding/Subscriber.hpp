#ifndef MICUNINJA_SUBSCRIBER_HPP_
#define MICUNINJA_SUBSCRIBER_HPP_

#include <memory>
#include "Observer.hpp"

namespace micuninja
{

class Subject;

class Subscriber : public Observer
{
public:
	Subscriber(const std::shared_ptr<Subject>&);

    void update(const std::string&) override;

private:
    void displayRecentActivity();

    int newVideos_;
    std::string videoTitle_;
};

}  // namespace micuninja

#endif  // MICUNINJA_SUBSCRIBER_HPP_
