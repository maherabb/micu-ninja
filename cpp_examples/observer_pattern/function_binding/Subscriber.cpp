#include <iostream>

#include "Subscriber.hpp"
#include "Subject.hpp"

namespace micuninja
{

Subscriber::Subscriber(const std::shared_ptr<Subject>& videoChannel)
	: Observer(videoChannel)
{
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