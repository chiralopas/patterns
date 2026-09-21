/**
 * The Problem: if there is some repetitive information in object then
 * it will increase the RAM without having any fruitful impact.
 *
 * Flyweight pattern: it makes one object of a class capable of providing
 * multiple instances of same object.
 */

#include "tree.h"


int main()
{
    std::vector<Tree*> trees;

    for (int i = 0; i < 1000000; i++)
    {
        Tree* tree = new Tree(i, i, 1001, "brown", "max_lod");
        trees.emplace_back(tree);
    }

    // put a breakpoint and view the memory while toggling USE_FLYWEIGHT
    // cleanup
    for (auto& tree : trees)
        delete tree;

    for (auto& material : TreeMaterialManager::materials)
        delete material;

    TreeMaterialManager::materials.clear();

    return 0;
}
