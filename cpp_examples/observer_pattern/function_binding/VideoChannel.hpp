#ifndef MICUNINJA_VIDEO_CHANNEL_HPP_
#define MICUNINJA_VIDEO_CHANNEL_HPP_

#include <map>
#include <memory>

#include "Subject.hpp"

namespace micuninja
{

class Observer;

class VideoChannel final : public Subject
{
public:
    void registerr(int, const UpdateCallBack&) override;
    void unregister(int) override;
    void notifyObserver() override;

    void uploadNewVideo(const std::string& videoTitle_);

private:
    std::map<int, UpdateCallBack> observers_;
    std::string videoTitle_;
};

}  // namespace micuninja

#endif  // MICUNINJA_VIDEO_CHANNEL_HPP_
