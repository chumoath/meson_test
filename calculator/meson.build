project('calculator', ['c'],
        default_options: ['warning_level=1', 'c_std=gnu11', 'cpp_std=gnu++11', 'b_colorout=auto',
                          'b_staticpic=false', 'stdsplit=false', 'optimization=2', 'b_pie=true'],
        version: files ('VERSION')
)

ss = import('sourceset')

algo_ss = ss.source_set()
cal_ss = ss.source_set()

subdir('src')

config_data = {}

algo_ss = algo_ss.apply(config_data, strict: false)

libalgorithm = static_library('algorithm',
                             sources: algo_ss.sources(),
                             dependencies: [algo_ss.dependencies()])


algorithm = declare_dependency(link_whole: libalgorithm)

# strict: false，在config没有出现的选项，默认为 false
cal_ss = cal_ss.apply(config_data, strict: false)


target_inc = [include_directories('inc')]
target_inc += include_directories('src/lib/inc')

deps = [ algorithm ]
deps += algo_ss.dependencies()

exe = {
        'name': 'calculator',
        'sources': cal_ss.sources(),
        'dependencies': []
}

calculator = executable(exe['name'], 
               sources: exe['sources'],
               install: true,
               include_directories: target_inc,
               dependencies: deps
               )