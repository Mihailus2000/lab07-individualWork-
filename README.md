## Individual work

## Tutorial


```
$ export GITHUB_USERNAME=Mihailus2000       # создание переменной окружения
```

$ cd ${GITHUB_USERNAME}
$ mkdir Lab7
$ cd Lab7
$ mkdir sources
$ cd sources
$ touch demo.cpp
$ cat > demo.cpp <<EOF
#include <fmt/format.h>
#include <iostream>

int main(){
   int number = 2;
   int power = 4;
   int res = 2*2*2*2;
   std::cout << "\tResualt of 2^4 = " << res << "\n";
   return 0;
}
EOF

$ cd ..
$ touch CMakeLists.txt

$ cat > CMakeLists.txt <<EOF
cmake_minimum_required(VERSION 3.0)
EOF

$ cat >> CMakeLists.txt << EOF
include("cmake/HunterGate.cmake")
huntergate(
  URL "https://github.com/ruslo/hunter/archive/v0.23.83.tar.gz"
  SHA1 "12dec078717539eb7b03e6d2a17797cba9be9ba9"
)
EOF

$ wget https://github.com/hunter-packages/gate/archive/v0.9.0.tar.gz -O /tmp/gate.tar.gz

--2019-06-10 23:07:40--  https://github.com/hunter-packages/gate/archive/v0.9.0.tar.gz
Распознаётся github.com (github.com)… 140.82.118.3
Подключение к github.com (github.com)|140.82.118.3|:443... соединение установлено.
HTTP-запрос отправлен. Ожидание ответа… 302 Found
Адрес: https://codeload.github.com/hunter-packages/gate/tar.gz/v0.9.0 [переход]
--2019-06-10 23:07:40--  https://codeload.github.com/hunter-packages/gate/tar.gz/v0.9.0
Распознаётся codeload.github.com (codeload.github.com)… 192.30.253.121
Подключение к codeload.github.com (codeload.github.com)|192.30.253.121|:443... соединение установлено.
HTTP-запрос отправлен. Ожидание ответа… 200 OK
Длина: 336289 (328K) [application/x-gzip]
Сохранение в: «/tmp/gate.tar.gz»

/tmp/gate.tar.gz                      100%[=======================================================================>] 328,41K   633KB/s    за 0,5s    

2019-06-10 23:07:41 (633 KB/s) - «/tmp/gate.tar.gz» сохранён [336289/336289]

$ tar -xf /tmp/gate.tar.gz
$ mkdir -p cmake
$ mv gate-0.9.0/cmake/HunterGate.cmake cmake
$ rm -rf gate-0.9.0
$ $ sudo apt install libfmt-dev 

Чтение списков пакетов… Готово
Построение дерева зависимостей       
Чтение информации о состоянии… Готово
Следующие пакеты устанавливались автоматически и больше не требуются:
  libboost-program-options1.67.0 libboost-python1.62.0 libboost-serialization1.67.0 libboost-system1.62.0 libboost-test1.67.0 libboost-thread1.62.0
  libboost-timer1.67.0 libcgal13 libcrypt2 libfcgi-bin libfcgi0ldbl libicu-le-hb0 libicu60 liblwgeom-2.5-0 liblwgeom-dev libmozjs-52-0 libpyside1.2
  libpython3.6 libpython3.6-dev libpython3.6-minimal libpython3.6-stdlib libqca2 libqca2-plugins libqgis-analysis2.18.25 libqgis-analysis2.18.28
  libqgis-core2.18.25 libqgis-core2.18.28 libqgis-customwidgets libqgis-gui2.18.25 libqgis-gui2.18.28 libqgis-networkanalysis2.18.25
  libqgis-networkanalysis2.18.28 libqgis-server2.18.25 libqgis-server2.18.28 libqgispython2.18.25 libqgispython2.18.28 libqtwebkit4 libqwt6abi1
  libradare2-3.1 libsfcgal1 libshiboken1.2v5 libspatialindex4v5 libspatialindex5 libwhisker2-perl python-cycler python-kiwisolver python-matplotlib
  python-matplotlib2-data python-nassl python-owslib python-pyproj python-pyside.qtcore python-pyside.qtgui python-pyside.qtnetwork
  python-pyside.qtwebkit python-pyspatialite python-qgis python-qgis-common python-qt4-sql python-shapely python-subprocess32 python3-iso8601
  python3.6 python3.6-dev python3.6-minimal qt4-designer ruby-dm-serializer ruby-faraday ruby-geoip ruby-libv8 ruby-ref ruby-therubyracer
Для их удаления используйте «sudo apt autoremove».
Предлагаемые пакеты:
  libfmt-doc
Следующие НОВЫЕ пакеты будут установлены:
  libfmt-dev
Обновлено 0 пакетов, установлено 1 новых пакетов, для удаления отмечено 0 пакетов, и 30 пакетов не обновлено.
Необходимо скачать 122 kB архивов.
После данной операции объём занятого дискового пространства возрастёт на 674 kB.
Пол:1 http://mirror-1.truenetwork.ru/kali kali-rolling/main amd64 libfmt-dev amd64 5.2.1+ds-2 [122 kB]
Получено 122 kB за 1с (151 kB/s)     
Выбор ранее не выбранного пакета libfmt-dev.
(Чтение базы данных … на данный момент установлено 444965 файлов и каталогов.)
Подготовка к распаковке …/libfmt-dev_5.2.1+ds-2_amd64.deb …
Распаковывается libfmt-dev (5.2.1+ds-2) …
Настраивается пакет libfmt-dev (5.2.1+ds-2) …

$ cat >> CMakeLists.txt << EOF
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
EOF

$ cat >> CMakeLists.txt << EOF
project(demo)
EOF

$ cat >> CMakeLists.txt << EOF
set(DEMO_VERSION_MAJOR 0)
set(DEMO_VERSION_MINOR 1)
set(DEMO_VERSION_PATCH 0)
set(DEMO_VERSION_TWEAK 0)
set(DEMO_VERSION
  ${DEMO_VERSION_MAJOR}.${DEMO_VERSION_MINOR}.${DEMO_VERSION_PATCH}.${DEMO_VERSION_TWEAK})
set(DEMO_VERSION_STRING "v${DEMO_VERSION}")
EOF

$ cat >> CMakeLists.txt << EOF
hunter_add_package(fmt)
find_package(fmt CONFIG REQUIRED)
EOF

$ cat >> CMakeLists.txt << EOF

add_executable(demo_fmt ./sources/demo.cpp)
target_link_libraries(demo_fmt PUBLIC fmt)
EOF


$ cmake -H. -B_builds

-- The C compiler identification is GNU 8.3.0
-- The CXX compiler identification is GNU 8.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter] Calculating Toolchain-SHA1
-- [hunter] Calculating Config-SHA1
-- [hunter] HUNTER_ROOT: /home/mihailus/.hunter
-- [hunter] [ Hunter-ID: 12dec07 | Toolchain-ID: bb25d6f | Config-ID: 510d5e8 ]
-- [hunter] FMT_ROOT: /home/mihailus/.hunter/_Base/12dec07/bb25d6f/510d5e8/Install (ver.: 5.2.1)
-- Configuring done
-- Generating done
-- Build files have been written to: /home/mihailus/Mihailus2000/Lab7/_builds

$ cmake --build _builds
Scanning dependencies of target demo_fmt
[ 50%] Building CXX object CMakeFiles/demo_fmt.dir/sources/demo.cpp.o
[100%] Linking CXX executable demo_fmt
[100%] Built target demo_fmt

Добавить на сервисе GitHub в репозитории lab02 файл .gitignore со следующем содержимом:

```
*build*/
```

$ git remote add origin https://github.com/Mihailus2000/lab07-individualWork-.git
$ git push -u origin master
Username for 'https://github.com': Mihailus2000
Password for 'https://Mihailus2000@github.com': 
Перечисление объектов: 8, готово.
Подсчет объектов: 100% (8/8), готово.
При сжатии изменений используется до 4 потоков
Сжатие объектов: 100% (6/6), готово.
Запись объектов: 100% (8/8), 8.37 KiB | 2.79 MiB/s, готово.
Всего 8 (изменения 0), повторно использовано 0 (изменения 0)
To https://github.com/Mihailus2000/lab07-individualWork-.git
 * [new branch]      master -> master
Ветка «master» отслеживает внешнюю ветку «master» из «origin».

$ nano README.md




