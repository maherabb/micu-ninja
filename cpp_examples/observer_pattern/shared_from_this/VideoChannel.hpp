#ifndef MICUNINJA_VIDEO_CHANNEL_HPP_
#define MICUNINJA_VIDEO_CHANNEL_HPP_

#include <vector>
#include <memory>

#include "Subject.hpp"

namespace micuninja
{

class Observer;

class VideoChannel final : public Subject
{
public:
    void registerr(const std::shared_ptr<Observer>&) override;
    void unregister(const std::shared_ptr<Observer>&) override;
    void notifyObserver() override;

    void uploadNewVideo(const std::string& videoTitle_);

private:
    std::vector<std::shared_ptr<Observer>> observers_;
    std::string videoTitle_;
};

}  // namespace micuninja

#endif  // MICUNINJA_VIDEO_CHANNEL_HPP_
