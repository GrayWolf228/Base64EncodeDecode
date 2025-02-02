cmake_minimum_required(VERSION 3.14)
project(Base64App)

# Настройка Qt
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# Включение автоматической обработки MOC, UIC и RCC
set(CMAKE_AUTOMOC ON)  # Включает автоматическую генерацию .moc файлов
set(CMAKE_AUTORCC ON)  # Включает автоматическую обработку .qrc файлов

# Добавление исходных файлов
set(SOURCES
    base64.cxx
    base64app.h  # Заголовочный файл, который может содержать Q_OBJECT
)

# Создание исполняемого файла
add_executable(Base64App ${SOURCES})

# Подключение Qt-модулей
target_link_libraries(Base64App PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)
