from winotify import Notification
import sys

msg = "The battery level is " + sys.argv[1]  + "%"

toast = Notification(app_id="Battery Warning",
                     title="Unplug your computer",
                     msg=msg,
                     duration="long",
                     icon=r"C:\Users\super\Desktop\Giovanni\Programacion\Resources\Battery_80_full.png")

toast.show()
