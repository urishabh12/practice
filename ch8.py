import time
import sys

while True:
    from datetime import datetime
    now = datetime.now()
    print ("%s:%s:%s" % (now.hour,now.minute,now.second),flush=True,end='')
    print("\r",flush=True,end=''),
    time.sleep(1)