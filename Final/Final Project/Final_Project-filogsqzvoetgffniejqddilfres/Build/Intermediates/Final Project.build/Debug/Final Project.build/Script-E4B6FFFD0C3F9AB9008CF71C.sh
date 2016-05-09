#!/bin/sh
mkdir -p "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Resources/"
# Copy default icon file into App/Resources
rsync -aved "$ICON_FILE" "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Resources/"
# Copy bin/data into App/Resources
rsync -avz --exclude='.DS_Store' "${SRCROOT}/bin/data/" "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/data/"
# Copy libfmod and change install directory for fmod to run
rsync -aved ../../openFrameworks/libs/fmodex/lib/osx/libfmodex.dylib "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Frameworks/";
install_name_tool -change @executable_path/libfmodex.dylib @executable_path/../Frameworks/libfmodex.dylib "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/MacOS/$PRODUCT_NAME";
# Copy GLUT framework (must remove for AppStore submissions)
rsync -aved ../../openFrameworks/libs/glut/lib/osx/GLUT.framework "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Frameworks/"

