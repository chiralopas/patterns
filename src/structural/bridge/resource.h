#pragma once
#include <string>


/**
 * @brief [Implementation] This will provide various implementations
 * like Artist, Book, Album etc. which must have something in common
 */
class IResource
{
public:
    virtual ~IResource() = default;

    virtual std::string summary() = 0;
    virtual std::string image() = 0;
    virtual std::string title() = 0;
};


class ArtistResource : public IResource
{
public:
    std::string summary() override;
    std::string image() override;
    std::string title() override;
};


class BookResource : public IResource
{
public:
    std::string summary() override;
    std::string image() override;
    std::string title() override;
};


class AlbumResource : public IResource
{
public:
    std::string summary() override;
    std::string image() override;
    std::string title() override;
};
