/*---------------------------------------------------------------------------*/
/* crc.h                                                                     */
/* copyright (c) innovaphone 2017                                            */
/*                                                                           */
/*---------------------------------------------------------------------------*/

class Crc {
public:
    static dword crc32(dword crc, const void *buf, int size);
};
