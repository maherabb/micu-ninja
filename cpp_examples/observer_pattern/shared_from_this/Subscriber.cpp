#include <iostream>

#include "Subscriber.hpp"
#include "Subject.hpp"

namespace micuninja
{

Subscriber::Subscriber()
{
    observerUniqueId_ = ++observersCounter_;
}

void Subscriber::observe(const std::shared_ptr<Subject>& videoChannel)
{
    videoChannel->registerr(shared_from_this());
    std::cout << "Observer #" << observerUniqueId_ << " registered\n";
}

void Subscriber::update(const std::string& videoTitle)
{
    newVideos_ += 1;
    videoTitle_ = videoTitle;

    displayRecentActivity();
}

void Subscriber::displayRecentActivity()
{
    std::cout << "Subscriber #" << observerUniqueId_
        << " has " << newVideos_ << " new notification(s).\n"
        << "Latest video is titled: " << videoTitle_ << "\n\n";
}

}  // namespace micuninja
