#pragma once
#include <string>
#include <vector>

#define USE_FLYWEIGHT 1


/**
 * @brief Flyweight Candidate.
 * object of this class will be taking more RAM
 */
class TreeMaterial
{
public:
    int id;

    std::string color; // BIG RAM consumption
    std::string texture; // BIG RAM consumption

    TreeMaterial();
    TreeMaterial(int id, const std::string& color, const std::string& texture);
};


/**
 * @brief Flyweight manager
 */
class TreeMaterialManager
{
public:
    static std::vector<TreeMaterial*> materials;
    static TreeMaterial* get_material(int id, const std::string& color, const std::string& texture);
};


/**
 * @brief actual type visible to client
 */
class Tree
{
public:
    double x;
    double y;
#if !USE_FLYWEIGHT
    std::string duplicate_color;
    std::string duplicate_texture;
#else
    TreeMaterial* material;
#endif

    Tree(double x, double y, int id, const std::string& color, const std::string& texture);
};
