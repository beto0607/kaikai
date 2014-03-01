/* 
 * File:   XMLLoader.h
 * Author: beto0607
 *
 * Created on 27 de febrero de 2014, 10:05
 */

#ifndef XMLLOADER_H
#define	XMLLOADER_H

#include <map>
#include <string>
#include <External/tinyxml2.h>

namespace kaikai{
    class XMLLoader {
    public:
        XMLLoader(const char *);
        virtual ~XMLLoader();
        void setFile(const char *);
        float getFloat(const char *);
        int getInt(const char *);
        const char* getString(const char *);
    private:
        const char * file;
        std::map<std::string,std::string> data;
        void load();
    };
}
#endif	/* XMLLOADER_H */

