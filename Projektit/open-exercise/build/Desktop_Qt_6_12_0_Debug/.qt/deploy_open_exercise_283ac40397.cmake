include("/home/jagheterhermanni/Koulumateriaali/QT-ohjelmointi/Projektit/open-exercise/build/Desktop_Qt_6_12_0_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/open-exercise-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "/home/jagheterhermanni/Koulumateriaali/QT-ohjelmointi/Projektit/open-exercise/build/Desktop_Qt_6_12_0_Debug/open-exercise"
    GENERATE_QT_CONF
)
