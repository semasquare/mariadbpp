project(
    'mariadbpp',
    'cpp',
    version : 'master',
    license : 'BSL-1.0'
)

includes = include_directories('include')

install_headers([
    'include/mariadb++/exceptions.hpp',
    'include/mariadb++/last_error.hpp',
    'include/mariadb++/connection.hpp',
    'include/mariadb++/result_set.hpp',
    'include/mariadb++/date_time.hpp',
    'include/mariadb++/time.hpp',
    'include/mariadb++/time_span.hpp',
    'include/mariadb++/account.hpp',
    'include/mariadb++/statement.hpp',
    'include/mariadb++/transaction.hpp',
    'include/mariadb++/data.hpp',
    'include/mariadb++/conversion_helper.hpp',
    'include/mariadb++/save_point.hpp',
    'include/mariadb++/decimal.hpp',
    'include/mariadb++/types.hpp',
    'include/mariadb++/bind.hpp',
    'include/mariadb++/concurrency.hpp'
], subdir: 'mariadb++')

thread_dep = dependency('threads')
libmariadb_dep = dependency('libmariadb')

sources = [
    'src/connection.cpp',
    'src/save_point.cpp',
    'src/time.cpp',
    'src/bind.cpp',
    'src/concurrency.cpp',
    'src/time_span.cpp',
    'src/transaction.cpp',
    'src/statement.cpp',
    'src/last_error.cpp',
    'src/worker.cpp',
    'src/exceptions.cpp',
    'src/result_set.cpp',
    'src/date_time.cpp',
    'src/account.cpp'
]

mariadbpp_lib = library(
    'mariadbpp',
    sources,
    include_directories : includes,
    dependencies : [libmariadb_dep, thread_dep],
    install: true
)

mariadbpp_dep = declare_dependency(
    include_directories : includes,
    link_with: mariadbpp_lib
)
