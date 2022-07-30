from winotify import Notification, audio
import sys


def cleanArgv(argv):
    return argv.replace("_", " ")


if len(sys.argv) != 4 and len(sys.argv) != 6:
    title = "Error"
    msg = str(len(sys.argv)) + " argument(s) were passed"
    icon = R"C:\Users\super\Desktop\Giovanni\Programacion\Resources\ErrorIcon.png"

else:
    title = cleanArgv(sys.argv[1])
    msg = cleanArgv(sys.argv[2])
    icon = cleanArgv(sys.argv[3])

toast = Notification(app_id="CReminder",
                     title=title,
                     msg=msg,
                     duration="long",
                     icon=icon)

toast.set_audio(audio.Mail, loop=False)

if len(sys.argv) == 6:
    buttonText = cleanArgv(sys.argv[4])
    buttonLaunch = sys.argv[5]
    toast.add_actions(label=buttonText, launch=buttonLaunch)

toast.show()
