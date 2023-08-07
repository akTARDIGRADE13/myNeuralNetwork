add_library(greetings
  SHARED
    activation_function.cpp
    perceptron.cpp
    layer.cpp
  )
# greetingライブラリのインクルードディレクトリを教えてあげる
# PROJECT_SOURCE_DIRはこのプロジェクトのルートディレクトリの絶対パス
target_include_directories(greetings
  PUBLIC ${PROJECT_SOURCE_DIR}/include
  )
