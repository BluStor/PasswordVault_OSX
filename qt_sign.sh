#!/bin/sh

#Code signing no longer allows app bundle to have an extended attribute containing a resource fork or Finder info
#So, remove them if they exist.
xattr -cr ./build/src/PasswordVault.app/

#sign app
codesign --force --verify --verbose --sign "Developer ID Application: BLUSTOR PMC, INC." ./build/src/PasswordVault.app

#sign all *.dylib
find ./build/src/PasswordVault.app -name *.dylib | xargs -I $ codesign --force --verify --verbose --sign "Developer ID Application: BLUSTOR PMC, INC." $

#sign Qt frameworks
find ./build/src/PasswordVault.app -name Qt* -type f | xargs -I $ codesign --force --verify --verbose --sign "Developer ID Application: BLUSTOR PMC, INC." $

#xattr breaks icns file, so copy over it
cp ./share/icons/keepassx.icns ./build/src/PasswordVault.app/Contents/Resources/
cp ./share/icons/keepassx.icns ./build/src/PasswordVault.app/Contents/Resources/icons/
