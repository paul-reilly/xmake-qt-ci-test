add_rules("mode.debug", "mode.release")
set_languages("c++17")

target("xmake-qt-actions")
    add_rules("qt.console")
    add_files("src/*.cpp")
