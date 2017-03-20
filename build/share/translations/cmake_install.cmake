# Install script for directory: /Users/markbennett/Desktop/XCode/PasswordVault_OSX/share/translations

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/PasswordVault.app/Contents/Resources/translations" TYPE FILE FILES
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_cs.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_da.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_de.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_el.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_en_plurals.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_es.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_fr.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_id.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_it.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_ja.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_ko.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_lt.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_nl_NL.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_pl.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_pt_BR.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_pt_PT.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_ru.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_sl_SI.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_sv.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_uk.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_zh_CN.qm"
    "/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/share/translations/keepassx_zh_TW.qm"
    )
endif()

