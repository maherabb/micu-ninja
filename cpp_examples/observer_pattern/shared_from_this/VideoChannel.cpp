#include <algorithm>
#include <iostream>

#include "VideoChannel.hpp"
#include "Observer.hpp"

namespace micuninja
{

void VideoChannel::registerr(const std::shared_ptr<Observer>& observer)
{
    observers_.emplace_back(observer);
}

void VideoChannel::unregister(const std::shared_ptr<Observer>& observer)
{
    std::cout << "Unregistered observer #" << observer->getUniqueId() << ".\n";
    observers_.erase(std::remove_if(observers_.begin(), observers_.end(),
        [&](const auto& obs)
        {
            return obs->getUniqueId() == observer->getUniqueId();
        }), observers_.end());
}

void VideoChannel::notifyObserver()
{
    for (auto& observer : observers_)
    {
        observer->update(videoTitle_);
    }
}

void VideoChannel::uploadNewVideo(const std::string& videoTitle)
{
    videoTitle_ = videoTitle;
    notifyObserver();
}

}  // namespace micuninja
