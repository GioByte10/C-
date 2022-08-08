from winotify import Notification, audio
import sys


def cleanArgv(argv):
    return argv.replace("~", " ")


def createNotification(title, msg, icon, duration, button_text, button_launch):
    toast = Notification(app_id="CReminder",
                         title=title,
                         msg=msg,
                         duration=duration,
                         icon=icon)

    toast.set_audio(audio.Mail, loop=False)
    if button_launch != "":
        toast.add_actions(label=button_text, launch=button_launch)

    elif button_text != "":
        toast.add_actions(label=button_text)

    toast.show()


none = len(sys.argv) != 4 and len(sys.argv) != 6 and len(sys.argv) != 7

if none:
    createNotification("Error", str(len(sys.argv)) + " argument(s) were passed", R"C:\Users\super\Desktop\Giovanni\Programacion\Resources\ErrorIcon.png", "long", "Ok", "")

elif len(sys.argv) == 4:
    createNotification(cleanArgv(sys.argv[1]), cleanArgv(sys.argv[2]), cleanArgv(sys.argv[3]), "long", "Ok", "")

elif len(sys.argv) == 5:
    createNotification(cleanArgv(sys.argv[1]), cleanArgv(sys.argv[2]), cleanArgv(sys.argv[3]), cleanArgv(sys.argv[4]), "", "")

elif len(sys.argv) == 6:
    createNotification(cleanArgv(sys.argv[1]), cleanArgv(sys.argv[2]), cleanArgv(sys.argv[3]), "long", cleanArgv(sys.argv[4]), cleanArgv(sys.argv[5]))

'''
    title = "Error"
    msg = str(len(sys.argv)) + " argument(s) were passed"
    icon = R"C:\Users\super\Desktop\Giovanni\Programacion\Resources\ErrorIcon.png"

    buttonText = "Ok"
    buttonLaunch = "exit"

'''