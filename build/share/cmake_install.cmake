# Install script for directory: /Users/markbennett/Desktop/XCode/PasswordVault_OSX/share

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Applications")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/PasswordVault.app/Contents/Resources/icons/database" TYPE FILE FILES
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C00_Password.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C01_Package_Network.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C02_MessageBox_Warning.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C03_Server.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C04_Klipper.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C05_Edu_Languages.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C06_KCMDF.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C07_Kate.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C08_Socket.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C09_Identity.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C10_Kontact.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C11_Camera.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C12_IRKickFlash.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C13_KGPG_Key3.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C14_Laptop_Power.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C15_Scanner.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C16_Mozilla_Firebird.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C17_CDROM_Unmount.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C18_Display.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C19_Mail_Generic.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C20_Misc.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C21_KOrganizer.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C22_ASCII.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C23_Icons.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C24_Connect_Established.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C25_Folder_Mail.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C26_FileSave.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C27_NFS_Unmount.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C28_QuickTime.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C29_KGPG_Term.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C30_Konsole.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C31_FilePrint.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C32_FSView.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C33_Run.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C34_Configure.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C35_KRFB.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C36_Ark.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C37_KPercentage.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C38_Samba_Unmount.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C39_History.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C40_Mail_Find.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C41_VectorGfx.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C42_KCMMemory.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C43_EditTrash.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C44_KNotes.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C45_Cancel.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C46_Help.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C47_KPackage.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C48_Folder.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C49_Folder_Blue_Open.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C50_Folder_Tar.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C51_Decrypted.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C52_Encrypted.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C53_Apply.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C54_Signature.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C55_Thumbnail.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C56_KAddressBook.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C57_View_Text.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C58_KGPG.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C59_Package_Development.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C60_KFM_Home.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C61_Services.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C62_Tux.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C63_Feather.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C64_Apple.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C65_W.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C66_Money.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C67_Certificate.png"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/database/C68_BlackBerry.png"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/PasswordVault.app/Contents/Resources" TYPE FILE FILES "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/macosx/keepassx.icns")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/PasswordVault.app/Contents/Resources/icons/application" TYPE DIRECTORY FILES "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/icons/application/" FILES_MATCHING REGEX "/[^/]*\\.png$" REGEX "/[^/]*\\.svgz$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/cmake_install.cmake")

endif()

