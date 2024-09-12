set(template_examples_demo1 "template.examples.demo1")
set(template_examples_demo2 "template.examples.demo2")

add_subdirectory(demo1)
add_subdirectory(demo2)

aux_source_directory(./ src)

add_library(${ROOT_LIBRARY} ${src})
add_dependencies(${ROOT_LIBRARY} template_examples_demo1 template_examples_demo2)
target_link_libraries(${ROOT_LIBRARY} PRIVATE template_examples_demo1 template_examples_demo2)