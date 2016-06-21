set(target "app")

file(GLOB hrcs ../${INCLUDE}/*h)
file(GLOB srcs "*.cpp")

add_library(${target} STATIC ${hrcs}  ${srcs})