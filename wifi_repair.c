//首先要查看自己的电脑是否存在驱动冲突的情况。输入如下指令
$ rfkill list all
//可以看到无线局域网卡和蓝牙的驱动各有两个：ideapad版本和其他的版本，其中前面标有ideapad的版本是联想自带的驱动，它与Ubuntu默认的驱动相冲突。
//因此需要将其从Ubuntu系统中移除。
//因为每次开机都需要进行移除操作，因此将移除代码直接写入系统启动文件中：
$ sudo nano /etc/rc.local

//在文件结尾的exit 0上一行添加如下命令：
echo "123" |sudo modprobe -r ideapad_laptop
//然后重启电脑即可。
