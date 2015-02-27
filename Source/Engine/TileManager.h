#ifndef TILE_MGR_H
#define TILE_MGR_H
#include <SFML/Graphics.hpp>
#include "ResourceManager.h"
#include "TextureManager.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <set>

/**
 * Tile Manager.
 * 
 * Loads in a set of tiles from a file and stores them
 * 
 * @author Thomas Tallentire
 */
namespace Manager
{
    class TileManager
    {
        public: 
            /**
            * Destructor
            */
            ~TileManager(){ clear(); }
         
            /**
            * Loads and populates the map with the contents of the
            * file at path
            *
            * @param std::string path - The path location of the tset file
            * @return id_resource - Texture id with the tileset
            */
            static id_resource load(std::string);
            
            /**
            * Uses a string id to get the id_resource to get the rectangle
            *
            * @param std::string id - The string id to be used on the tsetmap.
            * @return sf::FloatRect - Returns the appropriate rectangle
            */
            static sf::FloatRect* get(std::string);
            
            /**
            * Static versions of the Resource Manager functions.
            */
            static id_resource store(sf::FloatRect* r) { return rm.store(r); }
            static void store(sf::FloatRect* r, id_resource id) { return rm.store(r, id, true); }
            static sf::FloatRect* get(id_resource id) { return rm.get(id); }
            static sf::FloatRect* remove(id_resource id) { return rm.remove(id); }
            static unsigned int clear() { return rm.clear(true); }
            
            /**
            * Uses a string id to get the id_resource to remove the rectangle
            *
            * @param std::string id - The string id to be used on the tsetmap.
            * @return sf::FloatRect - The object removed.
            */
            static sf::FloatRect* remove(std::string);
        private:
            /**
            * The resource manager
            */
            static ResourceManager<sf::FloatRect*> rm;
            
            /**
            * Map to associate the string id to the tile id_resource
            */
            static std::map<std::string, id_resource> tsetmap_;

            /**
            * Map to associate a texture id to a map of tiles
            */
            static std::map<id_resource, std::set<std::string> > texturemap_;
            
            /**
            * The file stream for the tset file.
            */
            static std::ifstream tset_;

            /**
            * Does the actual reading of the file
            *
            * @param void
            * @return id_resource - Texture id with the tileset
            */
            static id_resource readtset();
            
            /**
            * Trims leading and trailing whitespace from the given string 
            * and returns a copy.
            *
            * @param std::string line - The string to be trimmed
            * @return std::string - The trimmed string
            */
            static std::string trim(std::string);
            
            /**
            * Changes the given string to an array of floats.
            *
            * @param std::string tile - The string with the values to be interpreted
            *        float* - A pointer to the float array to be set
            */
            static void tocords(std::string&, float*);
    };
}

#endif // TILE_MGR_H
