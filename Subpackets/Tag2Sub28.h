// Signer's User ID
#include "subpacket.h"

#ifndef __TAG2SUB28__
#define __TAG2SUB28__
class Tag2Sub28 : public Subpacket{
    private:
        std::string signer;

    public:
        Tag2Sub28();
        Tag2Sub28(std::string & data);
        void read(std::string & data);
        std::string show();
        std::string raw();

        std::string get_signer();

        void set_signer(const std::string & s);

        Tag2Sub28 * clone();
};
#endif