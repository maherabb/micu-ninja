#include "Subscriber.hpp"
#include "VideoChannel.hpp"

using namespace micuninja;

int main(int argc, char** argv)
{
    auto awesomeNinjaChannel = std::make_shared<VideoChannel>();

    auto firstSubscriber = std::make_shared<Subscriber>(awesomeNinjaChannel);
    awesomeNinjaChannel->uploadNewVideo("Avengers (2025) trailer");
	awesomeNinjaChannel->uploadNewVideo("You won't believe what he did, watch this!");
    
    auto secondSubscriber = std::make_shared<Subscriber>(awesomeNinjaChannel);
    // awesomeNinjaChannel->unregister(secondSubscriber->getUniqueId());
    awesomeNinjaChannel->uploadNewVideo("Try not to laugh, funny cats!");
    awesomeNinjaChannel->uploadNewVideo("Top 10 summer songs");

    return 0;
}
