set(SOURCE_PATH ${CURRENT_BUILDTREES_DIR}/src)
file(COPY ${CMAKE_CURRENT_LIST_DIR}/CMakeLists.txt DESTINATION ${SOURCE_PATH})
file(COPY ${CMAKE_CURRENT_LIST_DIR}/example2.cpp DESTINATION ${SOURCE_PATH})
file(COPY ${CMAKE_CURRENT_LIST_DIR}/example2.h DESTINATION ${SOURCE_PATH})

vcpkg_configure_cmake(SOURCE_PATH ${SOURCE_PATH} PREFER_NINJA)
vcpkg_install_cmake()
file(REMOVE_RECURSE ${CURRENT_PACKAGES_DIR}/debug/include)
file(INSTALL ${CMAKE_CURRENT_LIST_DIR}/copyright DESTINATION ${CURRENT_PACKAGES_DIR}/share/libexample2)
vcpkg_copy_pdbs()
