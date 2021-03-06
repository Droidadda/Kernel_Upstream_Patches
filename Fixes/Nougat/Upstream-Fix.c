##    DROIDADDA INC    ##
## NOUGAT UPSTREAM FIX ##

##    Create a new file "build-kernel.sh"    ##
+diff ++git a/build-kernel.sh b/build-kernel.sh
 index dd7466c..2e4ff00 100644
--- a/build.sh
+++ b/build.sh
@@ +1,1 @@ ""
 
 +
 +
 +# SET COLORS! (SOME OF THEM ARE NOT USED, BUT IF YOU LIKE, YOU CAN ADD IT IN THE ECHO LINES)
 +blue='\033[0;34m'
 +cyan='\033[0;36m'
 +yellow='\033[0;33m'
 +green='\033[0;32m'
 +red='\033[0;31m'
 +nocol='\033[0m'
 +orange='\033[0;33m'
 +light_red='\033[1;31m'
 +purple='\033[0;35m'
 +
 +
 +# SAY INFO ABOUT THE KERNEL AND THE SCRIPT
 +echo -e "${orange}####################################################"
 +echo -e "${orange}#      INFO ABOUT THE KERNEL AND THE SCRIPT        #"
 +echo -e "${orange}####################################################"
 +echo -e "${orange}#                  KERNEL INFO:                    #"
 +echo -e "${orange}#             DEVICE: Generic MT6582               #"
 +echo -e "${orange}#          LINUX KERNEL VERSION: 3.10.54           #"
 +echo -e "${orange}#                VERSION: STABLE                   #"
 +echo -e "${orange}####################################################"
 +echo -e "${orange}#                  SCRIPT INFO:                    #"
 +echo -e "${orange}#            DEVELOPER: SUNMUGHAN SWAMY            #"
 +echo -e "${orange}####################################################"
 +
 +
 +# EXPORT TOOLCHAIN + SAY USER AND HOST BUILDER
 +export ARCH=arm CROSS_COMPILE=../arm-eabi-4.8/bin/arm-eabi-
 +export KBUILD_BUILD_USER=pablito
 +export KBUILD_BUILD_HOST=developer
 +
 +# READ THE DEFAULT DEFCONFIG
 +echo -e "${cyan} CONFIGURE KRILLIN.."
 +make lineage_krillin_defconfig
 +
 +
 +# BUILD ZIMAGE
 +echo -e "${purple} BUILD DAREDEVIL KERNEL FOR KRILLIN.."
 +make zImage
 +
 +# SAY YES TO A SUCCESFULLY BUILD :)
 +echo -e "${green} SUCCESSFULLY BUILDED DAREDEVIL KERNEL"
 +echo -e "${green} ZIMAGE IS IN ARCH/ARM/BOOT/ZIMAGE"
 +echo -e "${green} MAKE BOOT.IMG WITH CARLIV IMAGE KITCHEN"
 +echo -e "${green} HAVE FUN AND GIVE PROPER CREDITS!"
 +echo -e $[$SECONDS / 60]' minutes '$[$SECONDS % 60]' seconds'
 +
 
 ##    Edit the existing file "build.sh"    ##
 diff --git a/build.sh b/build.sh
 index dd7466c..2e4ff00 100644
--- a/build.sh
+++ b/build.sh
@@ -1,1 +1,1 @@ #!/bin/bash
 -#!/bin/bash
 +export ARCH=arm CROSS_COMPILE=../android_toolchain/linaro-4.9/bin/arm-linux-androideabi-
 +export KBUILD_BUILD_USER=assusdan
 +export KBUILD_BUILD_HOST=SRT
  		  
 +    #For checking errors
 +echo 'Remove kernel...'
 +rm -rf arch/arm/boot/zImage
 
@@ +4,1 @@ #!/bin/bash
 -# SET COLORS! (SOME OF THEM ARE NOT USED, BUT IF YOU LIKE, YOU CAN ADD IT IN THE ECHO LINES)		
 -blue='\033[0;34m'		
 -cyan='\033[0;36m'		
 -yellow='\033[0;33m'		
 -green='\033[0;32m'		
 -red='\033[0;31m'		
 -nocol='\033[0m'		
 -orange='\033[0;33m'		
 -light_red='\033[1;31m'		
 -purple='\033[0;35m'
 
@@ +4,1 @@ # SET COLORS! (SOME OF THEM ARE NOT USED, BUT IF YOU LIKE, YOU CAN ADD IT IN THE ECHO LINES)
 +echo 'Configure CM Zera S '
 +make alps_defconfig >/dev/null
 
 +echo 'Building CM Zera S'
 +make -j4 zImage >/dev/null 2>buildlog.log
 
 -# SAY INFO ABOUT THE KERNEL AND THE SCRIPT
 -echo -e "${orange}####################################################"
 -echo -e "${orange}#      INFO ABOUT THE KERNEL AND THE SCRIPT        #"		
 -echo -e "${orange}####################################################"		
 -echo -e "${orange}#                  KERNEL INFO:                    #"		
 -echo -e "${orange}#             DEVICE: GENERIC MT6582               #"		
 -echo -e "${orange}#          LINUX KERNEL VERSION: 3.10.54           #"		
 -echo -e "${orange}#                VERSION: STABLE                   #"		
 -echo -e "${orange}####################################################"		
 -echo -e "${orange}#                  SCRIPT INFO:                    #"		
 -echo -e "${orange}#            DEVELOPER: SUNMUGHAN SWAMY            #"		
 -echo -e "${orange}####################################################"
 
@@ +16,6 @@ -# SAY INFO ABOUT THE KERNEL AND THE SCRIPT
 +    #check errors
 +if [ ! -f arch/arm/boot/zImage ]
 +then
 +    echo "BUID ERRORS!"
 +else
 + #if OK
 +echo 'Moving CM Zera S'
 +mv arch/arm/boot/zImage /var/www/compiled/CM-zImage-zeras
 +fi
 
@@ -30,1 +27,1 @@ -# SAY INFO ABOUT THE KERNEL AND THE SCRIPT
 -# EXPORT TOOLCHAIN + SAY USER AND HOST BUILDER		
 -export ARCH=arm CROSS_COMPILE=../arm-eabi-4.8/bin/arm-eabi-		
 -export KBUILD_BUILD_USER=pablito		
 -export KBUILD_BUILD_HOST=developer		
 -		
 -# READ THE DEFAULT DEFCONFIG		
 -echo -e "${cyan} CONFIGURE KRILLIN.."		
 -make lineage_krillin_defconfig		
 -		
 -		
 -# BUILD ZIMAGE		
 -echo -e "${purple} BUILD DAREDEVIL KERNEL FOR KRILLIN.."		
 -make zImage		
 -		
 -# SAY YES TO A SUCCESFULLY BUILD :)		
 -echo -e "${green} SUCCESSFULLY BUILDED DAREDEVIL KERNEL"		
 -echo -e "${green} ZIMAGE IS IN ARCH/ARM/BOOT/ZIMAGE"		
 -echo -e "${green} MAKE BOOT.IMG WITH CARLIV IMAGE KITCHEN"		
 -echo -e "${green} HAVE FUN AND GIVE PROPER CREDITS!"		
 -echo -e $[$SECONDS / 60]' minutes '$[$SECONDS % 60]' seconds'
 
 +#write worktime
 +echo $[$SECONDS / 60]' minutes '$[$SECONDS % 60]' seconds' 
