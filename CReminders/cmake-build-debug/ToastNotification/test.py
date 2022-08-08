from winotify import Notification
import sys


def cleanArgv(argv):
    return argv.replace("~~", "+")


msg = "The battery level is %"

toast = Notification(app_id="Battery Warning",
                     title="Unplug your computer",
                     msg=msg,
                     icon=r"C:\Users\super\Desktop\Giovanni\Programacion\Resources\Battery_80_full.png",
                     duration="short")

toast.add_actions(label='Ok', launch='')

toast.show()

print(cleanArgv("~~~"))
