aux_source_directory(./ src)
aux_source_directory(./module module)

add_library(demo2 STATIC ${src} ${module})
