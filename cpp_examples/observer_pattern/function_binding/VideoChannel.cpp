#include <iostream>

#include "VideoChannel.hpp"
#include "Observer.hpp"

namespace micuninja
{

void VideoChannel::registerr(int uniqueId, const UpdateCallBack& observer)
{
    observers_.emplace(uniqueId, observer);
}

void VideoChannel::unregister(int uniqueId)
{
    observers_.erase(uniqueId);
    std::cout << "Unregistered observer.\n";
}

void VideoChannel::notifyObserver()
{
    for (auto& observer : observers_)
    {
        observer.second(videoTitle_);
    }
}

void VideoChannel::uploadNewVideo(const std::string& videoTitle)
{
    videoTitle_ = videoTitle;
    notifyObserver();
}

}  // namespace micuninja