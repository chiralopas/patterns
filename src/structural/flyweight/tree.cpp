#include "tree.h"
#include <algorithm>
#include <iostream>


// TreeMaterial
TreeMaterial::TreeMaterial()
    : id(0)
{
}

TreeMaterial::TreeMaterial(int id, const std::string& color, const std::string& texture)
    : id(id), color(color), texture(texture)
{
}


// TreeMaterialManager
std::vector<TreeMaterial*> TreeMaterialManager::materials;

TreeMaterial* TreeMaterialManager::get_material(int id, const std::string& color, const std::string& texture)
{
    TreeMaterial* tree_material = nullptr;

    auto it = std::find_if(materials.begin(), materials.end(),
        [&id](TreeMaterial* material)
        { return material->id == id; });

    if (it != materials.end())
        tree_material = *it; // match found
    else
    {
        tree_material = new TreeMaterial(id, color, texture);
        materials.emplace_back(tree_material); // no match found
    }

    return tree_material;
}


// Tree
Tree::Tree(double x, double y, int id, const std::string& color, const std::string& texture)
    : x(x), y(y),
#if !USE_FLYWEIGHT
      duplicate_color(color), duplicate_texture(texture)
#else
      material(TreeMaterialManager::get_material(id, color, texture))
#endif
{
}
