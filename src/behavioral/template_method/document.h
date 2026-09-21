#pragma once
#include <string>


class IDocument
{
private:
    virtual std::string can_open(const std::string& name) = 0;
    virtual std::string create() = 0;

public:
    virtual ~IDocument() = default;
    std::string open(const std::string& name);
};


class TextDocument : public IDocument
{
private:
    std::string can_open(const std::string& name) override;
    std::string create() override;
};


class WordDocument : public IDocument
{
private:
    std::string can_open(const std::string& name) override;
    std::string create() override;
};
