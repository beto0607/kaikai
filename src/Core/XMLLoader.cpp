/* 
 * File:   XMLLoader.cpp
 * Author: beto0607
 * 
 * Created on 27 de febrero de 2014, 10:05
 */

#include <Core/XMLLoader.h>

#include <map>
#include <string>
#include <stdlib.h>
#include <External/tinyxml2.h>

using namespace kaikai;
XMLLoader::XMLLoader(const char * _file) {
    file = _file;
    load();
}

void XMLLoader::setFile(const char* _file){
    file = _file;
    load();
}

void XMLLoader::load(){
    XMLDocument doc;
    doc.LoadFile( file );
    XMLNode* node = doc.FirstChild();
    XMLElement* ele = node->ToElement();
    while(node->NextSibling() != NULL){
        data.insert(std::pair<std::string,std::string>(ele->Value(),ele->GetText()));
        node = node->NextSibling();
        ele = node->ToElement();
    }
    data.insert(std::pair<std::string, std::string>(ele->Value(),ele->GetText()));
}

float XMLLoader::getFloat(const char* _key){
    const char * aux = data[_key].c_str();
    return strtod(aux, NULL);
}
int XMLLoader::getInt(const char* _key){
    const char * aux = data[_key].c_str();
    return strtol(aux, NULL, 10);
}
const char * XMLLoader::getString(const char* _key){
    return data[_key].c_str();
}
XMLLoader::~XMLLoader() {
}

