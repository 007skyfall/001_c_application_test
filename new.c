Zhangxy@ai-vision.net
新工商银行卡号：6212260200152018285
开户网点：望京四元桥支行

10007510 543295811572
10007510 758707132458
10007511 863626424449

JDEZ171127300132597   8DAE-FEB0-606F-D7E5

增值税专票开票信息：
户名   ：南京爱科伟视信息科技有限公司
开户行 ：中国农业银行股份有限公司 南京高淳支行
账号   ：10124001040243049
税号   ：91320118MA1WATH50Q
地址   ：南京市高淳区经济开发区古檀大道3号
电话   ：13901086453

无线网络密码：aivision123456007

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

2018/08/19
快捷键命令大全：

						scp		winscp
						uart	串口助手
						ev		everything
						sd		SD卡格式化
						img		树莓派镜像烧录
						gen		盘符查看
						putty   putty
						hy		超级终端
						fs      截图工具软件
						layout 	PADS layout
						se		protel 99SE
						logic	PADS logic
						vm		virtual box
						ware	vmware
						xm		xmind
						qq		QQ
						wei		微信
						ie		百度浏览器
						AD		ad13
						ad9		ad9
						you		优酷
						kw		酷我
						yd		网易词典
						ssh		ssh登录
						sh		ssh文件传输
						ed		edraw
						by       代码比较工具
						visio	visio
						vs2013   vs
						qt		qt
						labview		lab
						data      法国设备
						halcon    HALCON软件

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
2018/08/20
讯为开发板常用操作：
开启tftp服务器：
sudo service tftpd-hpa restart
sudo /etc/init.d/xinetd restart
sudo /etc/init.d/ssh restart

传输文件：
tftp -g -l test -r test 192.168.1.103
#############################################################
开启NFS服务器：
sudo service nfs-kernel-server restart
*************************************************************
uboot命令：
			printenv
			setenv ipaddr   192.168.100.20		//开发板的ip地址
			setenv serverip 192.168.100.19		//ubuntu的ip地址
			saveenv
			tftp 41000000 application.bin  		//tftp命令，前提是tftp服务器上存在该文件
			wangj_jt@hqyj.com
…………………………………………………………………………………………………………………………………………………………………………
设置启动参数（uboot下）：
	setenv  serverip  192.168.1.249
	setenv  ipaddr   192.168.1.1
	setenv bootcmd tftp 41000000 uImage\;tftp 42000000 exynos4412-fs4412.dtb\;bootm 41000000 - 42000000
	setenv bootargs root=/dev/nfs nfsroot=192.168.1.249:/source/rootfs rw console=ttySAC2,115200  init=/linuxrc  ip=192.168.1.13
	saveenv
挂载NFS的配置
################################################################################
EMMC加载内核和文件系统
1）烧写内核镜像到EMMC上
tftp  41000000  zImage
movi  write  kernel  41000000
 2）烧写设备树文件到EMMC上
tftp  41000000  exynos4412-fs4412.dtb
movi  write  dtb  41000000
3）烧写文件系统镜像到EMMC上
tftp  41000000  ramdisk.img
movi  write  rootfs  41000000  300000
重新设置启动参数
setenv bootcmd movi read kernel 41000000\;movi read dtb 42000000\;movi read rootfs 43000000 300000\;bootm 41000000 43000000 42000000
 saveenv
###########################################################################
fdisk -c 0
fatformat mmc 0:1
ext3format mmc 0:2
ext3format mmc 0:3
ext3format mmc 0:4
fastboot

fastboot flash uboot u-boot-fs4412.bin
fastboot flash uboot  u-boot-iTOP-4412
fastboot.exe flash kernel zImage
fastboot.exe flash ramdisk ramdisk-uboot.img
fastboot.exe flash system  system.img
fastboot -w
fastboot reboot
………………………………………………………………………………………………………………………………………………………………………………………………………………………………………………
共享文件开启：
sudo mount -t vmhgfs .host:/ /mnt/hgfs

更改文件用户属性：		sudo chown linux.linux out -R
*******************************************************************************************
ip地址分配情况：itop的ubuntu的地址：192.168.1.103
				板子的ip:192.168.1.230 
				主机的Ip:可以选择自动分配
				
				/home/linux/toolchain/arm-2010.09/bin
/source/rootfs  *(rw,sync,no_subtree_check,no_root_squash)
				
********************************************************************************************
appwiz.cpl：程序和功能 
calc：启动计算器 
自动关机命令 
 　 Shutdown -s -t 600：表示600秒后自动关机 
 　 shutdown -a ：可取消定时关机 
 　 Shutdown -r -t 600：表示600秒后自动重启 
logoff：注销命令 
osk：打开屏幕键盘 
snippingtool：截图工具，支持无规则截图 
……………………………………………………………………………………………………………………………………………………………………………………………………………………………………………………
setenv bootcmd tftp 41000000 zImage\;bootm 41000000 

set bootargs root=/dev/nfs nfsroot=192.168.100.19:/source/rootfs/rootfs  ip=192.168.100.20:192.168.100.19::255.255.255.0::eth0:off console=ttySAC2,115200 init=/linuxrc
 setenv ootargs
 
root=/dev/nfs rw nfsroot=192.168.101.100:/home/skyfall/nfs/system ip=192.168.101.230:192.168.101.100:192.168.101.1:255.255.255.0:iTOP:eth0:off rootfstype=ext4 init=/linuxrc console=ttySAC2,115200

########################################################################################################################################

2018/09/18
用户名：192.168.1.201
登录名：pi
密码：raspberry
5280@PC-201805201542;5280@localhost
sudo make bcm2709_defconfig
sudo mount -t vboxsf myshare /mnt/share

myshare /mnt/share vboxsf rw,gid=100,uid=1000,auto 0 0

MMAL_PARAM_EXPOSUREMODE_NIGHTPREVIEW

mmal_para_exposuremode_nightpreview

sudo add-apt-repository ppa:nmi/vim-snapshots
0~mmal_para_exposuremode_nightpreview1~

离线中。。。t0068MgAAAEEl3AVR0DNTQwVwTVJY92Cl6V+sHx5oMmcra+r4BnHLYWdkO5eXF5COP9C7DaQLa3pULVD6Vr+NQ+1x1jj3hMw= 要用的话可以换这个试用的key

########################################################################################################################################
2018/09/03
扫描枪更改设计要求

1、前端整体高度增加，以便安装自行设计的光源部分，两侧的预留空间应考虑向周边增加光源的情况。
2、新增加的光源板的设计要求：
		2.1光源板的整体设计尺寸:矩形，长款和以前基本一致，预留两个安装孔。
		2.2增加的控制开关的形状的选择，需要尽快确定按控制开关的形状，至少应该是那种90°结构的开关才可。
		2.3控制开关的控制情况，仅是控制增加的部分，还是控制总体部分，还是两组分别进行控制，如果分别进行控制，
		需要使用两组控制开关，这会涉及结构设计，如果只是一组控制，不涉及结构设计，只需要更改电路的连接方式。
		2.4控制开关的固定，与结构设计讨论，但是一定要预留。
		2.5新增光源板应该与原有的光源板在垂直方向上为一条直线。
		2.6光源控制按键的标识的预留？
3、改变前端的设计结构后，需要考虑上下光源与镜头之间的影响，应该做隔离措施进行防护。
4、前端的亚克力面板的设计方式，应该便于后期生产安装。
5、前端设计应该与原有形状较完美衔接，符合一定的美工设计。
6、粘贴公司标识logo的形状的设计与原有形状的更改。
7、前端设计完成后所有设计图纸，应该满足模具厂家或者加工厂家可以使用该图纸完成产品的加工生产，如若中间出现无法生产或生产疑惑，需要
	协助进行加工生产。
8、前端增加亚克力面板的图纸，需要单独给出，以便我们供应给专做亚克力的厂家，使其进行样品的生产加工。
9、前端的3D打印，需要上色处理，保证新设计的外壳使用3D出图后的实物与未更改部分可以无缝衔接。
10、前端整体设计的周期在两周内全部完成。
11、付款方式，前期设计先付1500元，待后期全部设计完成支付剩余部分；后期整体设计的周期，整体的设计费用在双方当时约定的范围内。公司是否可以开具增值税发票？

****************************************************************************************************************************************************************************************************************************************************************************************
现有设计样品的问题：
1、上面光源部分没有设计遮挡，属于设计中的遗漏，需要在最终设计后增加此部分。
2、增加光源板的结构需要更改，按键放置在板子上，做为一个整体进行安装，需要在设计中考虑到安装的方便性。
3、前端的亚克力板位置感觉不是竖直放置，是否可以调整。
4、整体的外观感觉比较难看，需要进行调整。

********************************************************************************************************************************************
XPEBWT-L1-0000-00E51  和XPEBRD-L1-0000-00801

export PATH=$PATH:/home/skyfall/qt/arm-2014.05/bin
export CROSS_COMPILE=arm-none-linux-gnueabi-

./configure -release -opensource -tslib -xplatform linux-arm-gnueabi-g++ -prefix /opt/Qt-5.5.0/armv7-a  -no-opengl -I/opt/tslib1.4/include -L/opt/tslib1.4/lib     -skip qtdeclarative

./configure -opensource -shared -xplatform linux-arm-gnueabihf-g++ -qt-zlib -no-opengl -no-openssl -nomake examples -skip qtcanvas3d -skip qt3d -qreal float -skip qtdeclarative -prefix /xilinx/qt5/qt5instll/

C:\Users\Administrator\AppData\Local\Programs\Python\Python37

C:\Users\Administrator\Documents\Tencent Files\565911459\FileRecv

2018/10/14
C:\Python34;C:\Python34\Scripts;C:\Program Files (x86)\Microsoft Visual Studio\Common\Tools\WinNT;C:\Program Files (x86)\Microsoft Visual Studio\Common\MSDev98\Bin;C:\Program Files (x86)\Microsoft Visual Studio\Common\Tools;C:\Program Files (x86)\Microsoft Visual Studio\VC98\bin

C:\Python34;C:\Python34\Scripts;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\PROGRAM FILES (X86)\INTEL\ICLS CLIENT\;C:\PROGRAM FILES\INTEL\ICLS CLIENT\;C:\PROGRAM FILES (X86)\NVIDIA CORPORATION\PHYSX\COMMON;C:\MENTORGRAPHICS\9.5PADS\SDD_HOME\COMMON\WIN32\BIN;C:\MENTORGRAPHICS\9.5PADS\SDD_HOME\COMMON\WIN32\LIB;%MGC_HOME%\BIN;%MGC_HOME%\LIB;%SYSTEMROOT%\SYSTEM32;%SYSTEMROOT%;%SYSTEMROOT%\SYSTEM32\WBEM;%SYSTEMROOT%\SYSTEM32\WINDOWSPOWERSHELL\V1.0\;C:\PROGRAM FILES\COMMON FILES\THUNDER NETWORK\KANKAN\CODECS;C:\PROGRAM FILES\INTEL\INTEL(R) MANAGEMENT ENGINE COMPONENTS\DAL;C:\PROGRAM FILES\INTEL\INTEL(R) MANAGEMENT ENGINE COMPONENTS\IPT;C:\PROGRAM FILES (X86)\INTEL\INTEL(R) MANAGEMENT ENGINE COMPONENTS\DAL;C:\PROGRAM FILES (X86)\INTEL\INTEL(R) MANAGEMENT ENGINE COMPONENTS\IPT;C:\Program Files\WIDCOMM\Bluetooth Software\;C:\Program Files\WIDCOMM\Bluetooth Software\syswow64;C:\Qt\Qt5.11.1\5.11.1\mingw53_32\bin;C:\Qt\Qt5.11.1\Tools\mingw530_32\bin;C:\Program Files\Git\cmd;c:\Program Files (x86)\Microsoft SQL Server\100\Tools\Binn\;c:\Program Files\Microsoft SQL Server\100\Tools\Binn\;c:\Program Files\Microsoft SQL Server\100\DTS\Binn\

******************************************************************************************
安装PyQt5
pip install PyQt5 -i https://pypi.douban.com/simple

安装PyQt5常用工具：
pip install PyQt5-tools -i https://pypi.douban.com/simple

python3.7 configure.py -d /Library/Frameorks/Python.framwork/Versions/3.7/python3.7/site-packages

sudo apt-get install -y make build-essential libssl-dev zlib1g-dev libbz2-dev  libreadline-dev libsqlite3-dev wget curl llvm libncurses5-dev libncursesw5-dev  xz-utils tk-dev

mount -t vboxsf myshare  /mnt/share

ps -A | grep apt
sudo rm /var/lib/dpkg/lock

python3.7 configure.py --qmake /Users/xinping/Qt5.9.1/5.9.1/clang_64/bin/qmake -disable-QtPositioning --disable=QtNfc --disable=QtBluetooth 
import PyQt5
PyQt5.__path__

from PyQt5.QtWidgets import QWidget
dir(QWidget)

make[1]: *** [qpycore_qobject_helpers.o] Error 1

python3.7 configure.py --qmake /home/skyfall/Qt5.3.1/5.3/gcc_64/bin/qmake -disable=QtPositioning -disable=QtNfc -disable=QtBluetooth -disable=QtCore

pip install matplotlib

pip install QScintilla -i https://pypi.douban.com/simple

pip install jedi

##############################################################################################################
2018/10/15
./configure CC=arm-none-linux-gnueabi-gcc CXX=arm-none-linux-gnueabi-g++ --host=arm-none-linux-gnueabi  --prefix=/opt/tslib1.4 ac_cv_func_malloc_0_nonnull=yes

qtbase/mkspecs/linux-arm-gnueabi-g++/qmake.conf

export PATH=$PATH:/usr/local/arm/arm-2014.05/bin
export CROSS_COMPILE=arm-none-linux-gnueabi-

#
# qmake configuration for building with arm-linux-gnueabi-g++
#
 
MAKEFILE_GENERATOR      = UNIX
CONFIG                 += incremental
QMAKE_INCREMENTAL_STYLE = sublib
 
QT_QPA_DEFAULT_PLATFORM = linux #eglfs
QMAKE_CFLAGS_RELEASE += -O2 -march=armv7-a
QMAKE_CXXFLAGS_RELEASE += -O2 -march=armv7-a
 
include(../common/linux.conf)
include(../common/gcc-base-unix.conf)
include(../common/g++-unix.conf)
 
# modifications to g++.conf
QMAKE_CC                = arm-none-linux-gnueabi-gcc
QMAKE_CXX               = arm-none-linux-gnueabi-g++
QMAKE_LINK              = arm-none-linux-gnueabi-g++
QMAKE_LINK_SHLIB        = arm-none-linux-gnueabi-g++
 
# modifications to linux.conf
QMAKE_AR                = arm-none-linux-gnueabi-ar cqs
QMAKE_OBJCOPY           = arm-none-linux-gnueabi-objcopy
QMAKE_NM                = arm-none-linux-gnueabi-nm -P
QMAKE_STRIP             = arm-none-linux-gnueabi-strip
load(qt_config)

-skip qtdeclarative


./configure -release -opensource  -xplatform linux-arm-gnueabi-g++ -prefix /opt/Qt-5.0.1/armv7-a -no-c++11 -no-opengl -I/opt/tslib1.4/include -L/opt/tslib1.4/lib

sudo apt-get install libXrender-dev
sudo apt-get install libglib2.0-dev libSM-dev libxrender-dev libfontconfig1-dev libxext-dev
sudo apt-get install libglui-dev

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
2018/10/16

项目描述：
请不要拿zxing等开源的源码来提交测试，因为肯定是达不到要求的。

1.详细需求：
实现datamatrix二维码的识别功能。必须用C或C++语言实现，最好是C语言，算法这块必须全部是源码，不得调用系统函数(malloc,free等基本函数可以调用系统的)；
开发平台最好是arm linux；

######################################################################################################################################
2018/10/17
扫描枪外观喷漆颜色方案说明：
1、因为3D打印的前壳的颜色已定，所以除了手柄外，设备整体颜色与新设计的前壳的黑色颜色一致，
	但是上面那个白色的部分保留，以便观看设备接通后的LED指示灯。
2、扳机的黄色改成银白色，在发货时留了一个示例颜色，请参考这个颜色。
3、在上次的样品喷漆后，边缘的原来颜色还是模糊可见，安装螺钉部分内部的原来颜色也是隐约可见，需要把边缘部分的颜色处理好。
4、原来粘贴标识部分隐藏的颜色也需要改。
5、里面部分也需要进行喷漆。

姓侯，13581965205
价格是SDK6800元50个设备授权，单个追加50元，批量1K的话每可以做到28，技术支持是1年内免费
开发技术支持，就是协助进行设备开发和算法集成、测试、优化
1年后按照合同总额的10~15%进行开发支持（如果不需要开发支持的话，不需要支持）

有多机场扫描设备的，比如无锡知谷
北京天安股份，北京汇人科技，广州宇洋智能

http://www.efittech.com/xw/xw20140707.html
http://www.efittech.com/xw20111210.html
http://www.efittech.com/xw/xw20150618.html

我们这有 几张图片，您可以测试一下使用您的算法的识别速度和难易程度如何？

**************************************************************************************************************************************
2018/10/19

Hi3519V101_SDK_V1.0.4.0

/home/skyfall/tjhs/Hi3519V101_SDK_V1.0.4.0/osdrv/opensource/toolchain/arm-hisiv500-linux

/opt/hisi-linux/x86-arm/arm-hisiv500-linux/bin



https://pan.baidu.com/s/11cHDocAElj1bakRn9WROKA 
密码：4g75
https://blog.csdn.net/qq_36084640/article/details/79320883


/home/topeet/linux/ *(rw,sync,no_root_squash)


mount -t nfs  -o nolock localhost:/home/skyfall/nfs /mnt


**************************************************************************************************************************************
2018/10/22

Revised Common Lectionary 修订版本
 Linux 内核中增加程序需要完成以下 3 项工作。
● 将编写的源代码复制到 Linux 内核源代码的相应目录中。
● 在目录的 Kconfig 文件中增加关于新源代码对应项目的编译配置选项。
● 在目录的 Makefile 文件中增加对新源代码的编译条目。


1、打印的亚克力板，厚度设计成1Mm，厂家做的只能喷漆，厚度需要至少2mm。
2、前壳上下卡扣的钩，再次取出，必断一个，这种方式不可取。
3、新的前壳与原来的结构的衔接还是有缝隙，需要优化。
4、打印的材质是什么材质，设计的误差，加工设备的精度。
5、整套的图纸


http://www.packtpub.com/files/code/4947_Code.zip


sudo vim /etc/lightdm/lightdm.conf
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
2018/10/29

GPIO和门电路
UART
I2C
SPI
NAND Flash
内存
LCD
￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥
2018/10/30
1、海思3516可见光部分MIPI、CMOS接口的设置
2、红外与可见光部分采集位宽的设置
3、图像的分辨率的设置
4、图像的大小格式的设置

sudo vim /etc/sysctl.conf 

*********************************************************************************************************************************
2018/11/01
无线网卡 无线上网卡 有线网卡

SDK包是官方的，还是根据我们的需求在官方的基础上修改定制的。

#################################################################################################################################
2018/11/02
常用术语：
媒体处理软件平台 :Media Process Platform,简称 MPP
媒体处理软件平台程序接口 :	MPI MPP Programe Interface
视频输入:VI
视频处理:VPSS
视频编码:VENC
视频解码:VDEC
视频输出:VO
视频侦测分析:VDA
音频输入:AI
音频输出:AO
音频编码:AENC
音频解码:ADEC
区域管理:REGION
MPI

应用程序启动 MPP业务前，必须完成MPP系统初始化工作。同理，应用程序退出MPP业务后，也要完成MPP系统去初始化工作，释放资源。


1、使用脚本执行后的结果验证硬件的功能的正确。

2、系统现有的功能说明

3、在现有的功能基础上，修改一些设置参数实现自己的功能

4、软件包的整体架构

5、测试脚本文件的使用方式

6、板子的结构的设计,可见光与红外需要横向并排使用，需要我们自己加一个转接板；扩展板的LED灯的位置以及颜色的区分。


mount -t nfs -o nolock -o tcp -o rsize=32768,wsize=32768 192.168.1.155:/home/skyfall/nfs /mnt
************************************************************************************************************************************************
2018/11/15

问题：
1，千兆网需要几条线
2，5v、12v防反接
3，可见光：CMOS数据复用
4，TF卡性能  
5，GPIO的中断输入
6，IO的波形：示波器  (已经测试)

网页：
提供库，自己维护

方案：
1、千兆网络性能测试的完善。
2、TF卡性能测试的完善。
3、himm功能的实现，操作寄存器的地址。
4、GPIO做终端输入时的验证。
5、GPIO输出波形的稳定性的测试。

xumm@csoneplus.com
gaofei@csoneplus.com

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
2018/11/19
1、422测试

		1.1、在硬件上连接没有问题，没有短路，可以进行测试。
		1.2、GPIO0_3设置为置高，但是通过设置后实际的状态没有被设置成高。
		
			himm 0x12040098 0x1 //设置UART2_TXD
			himm 0x1204009c 0x1 //设置UART2_RXD
			GPIO0_3 需要置高 
			himm 0x12040014 0x0  //设置GPIO0_3
			himm 0x12140400 0xFF //设置GPIO0_3为输出
			himm 0x12140020 0x08  //设置GPIO0_3为高
			himm 0x12140020 0x00  //设置GPIO0_3为低


FPGA板修改：

1、J12的串口接口定义只有接收，没有发送，需要修改。
2、J15的串口接口定义只有接收，没有发送，需要修改。

cat /proc/meminfo
**********************************************************************************************
2018/11/26

echo 27 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio27/direction
echo 1 > /sys/class/gpio/gpio27/value
echo 0 > /sys/class/gpio/gpio27/value
echo 27 > /sys/class/gpio/unexport



mount -t nfs -o nolock -o tcp -o rsize=32768,wsize=32768 192.168.0.250:/home/skyfall/nfs /nfsroot

**********************************************************************************************
2018/11/29

1、新的二维码识别软件的测试，比较北京、杭州、现在这三家？
2、使用手机拍照后的测试。
3、接口板的原理图、JTAG接口板的原理图、50pin排线的原理图，并且绘制三个PCB。


跨距宽度（stride）或叫扫描宽度。

MSDN的示意为: 跨距是单行像素（一个扫描行）的宽度，舍入为一个 4 字节的边界。如果跨距为正，则位图自顶向下。如果跨距为负，则位图颠倒。用程序员的语言表述，就是: Stride指一个扫描行占用的字节数。根据BMP格式的标准，Stride一定是4的倍数。比如一个 24x11 的图像，每行的像素信息就是 24*3 = 72, 正好是4的倍数，而一副 21x11的位图，每行像素信息为 21*3=63, 因为不足4的倍数，所以用1个字节来填充，这样每行像素信息为21*3+1=64字节，这一个字节在笔记中成为 offset, 所以 offset = BitmapData.Stride - BitmapData.Width * 3
===============================================================================================================================
2018/12/3
himm 0x12040000 0x0
himm 0x12141400 0xFF 
himm 0x12141004 0x0x1 

AFC11-S50ICA-00
AFC01-S06FCC-00

	cap->header.type = cpu_to_le16(WLAN_EID_PWR_CAPABILITY);


jpeg H264
1、设计两个内核模块，一个模块输出一些符号给另一个模块。
2、编写一个内核模块，分别实现一个整型，一个字符型模块传参。
– (1)用户模式 usr (2)系统模式 sys(3)管理模式 svc(4)快速中断 fiq(5)外部中
断 irq(6)数据访问终止 abt(7)未定义指令异常
用户空间和内核空间是程序执行的两种不同状态，我们可以通过“系
统调用”和“硬件中断“来完成用户空间到内核空间的转移

 ADN4668ARUZ
 
 sudo apt-get install --reinstall raspberrypi-bootloader raspberrypi-kernel
 
 
Linux raspberrypi 4.14.79-v7+ #1159 SMP Sun Nov 4 17:50:20 GMT 2018 armv7l GNU/Linux
pi@raspberrypi:~ $



6235 0102 5040 0081 373 


1、新的双光系统外壳的设计

2、电源部分和千兆网络的设计
RGB YUV


1、g++编译器



find ./* -inum 686734 -delete
/opt/hisi-linux/x86-arm/arm-hisiv500-linux

tcpsvd -vE 0.0.0.0 21 ftpd /mnt/usb/00/ &

rmmod hi3519v101_wdt.ko 

/opt/hisi-linux/x86-arm/arm-hisiv500-linux/bin/arm-hisiv500-linux-uclibcgnueabi-gcc
/opt/hisi-linux/x86-arm/arm-hisiv500-linux/bin/arm-hisiv500-linux-uclibcgnueabi-strip


仓库（Repository）
仓库用来存放项目代码，每个项目对应一个仓库，多个开源项目则有多个仓库

收藏（Star）
收藏项目，方便下次查看

复制克隆项目（Fork）
将项目复制一份到自己的账号

发起请求（Pull Request）

关注（Watch）
关注项目，当项目更新可以接收到通知

事务卡片（Issue）
发现代码BUG，但是目前没有成型代码，需要讨论时用

Github主页
账号创建成功或点击网址导航栏github图标都可进入github主页：该页左侧主要显示用户动态以及关注用户或关注仓库的动态；右侧显示所有的git库

仓库主页
仓库主页主要显示项目的信息，如：项目代码，版本，收藏/关注/fork情况等

个人主页
个人信息：头像，个人简介，关注我的人，我关注的人，我关注的git库，我的开源项目，我贡献的开源项目等信息











