project('calculator', ['c'],
        default_options: ['warning_level=1', 'c_std=gnu11', 'cpp_std=gnu++11', 'b_colorout=auto',
                          'b_staticpic=false', 'stdsplit=false', 'optimization=2', 'b_pie=true'],
        version: files ('VERSION')
)

ss = import('sourceset')
keyval = import('keyval')

target_inc = [include_directories('inc')]
target_inc += include_directories('src/lib/algos/inc')
target_inc += include_directories('/usr/include/glib-2.0')
target_inc += include_directories('/usr/lib/x86_64-linux-gnu/glib-2.0/include')

glib_dep = dependency('glib-2.0', version : '>=2.0')
readline_dep = dependency('readline')

# TODO: 添加 Kconfig; 添加编译进度
# config_algos_mak = configure_file(
#         input: ['configs/algos/algos.mak'],
#         output: 'algo_conf.h',
#         copy: true
# )

#config_algos_data = configuration_data()
#config_algos = keyval.load('configs/algos/algos.mak')

minikconf = find_program('scripts/minikconf.py')

config_all_mak = 'config-all.mak'

config_all_mak = configure_file(
  input: ['configs/algos/algos.mak', 'Kconfig'],
  output: config_all_mak,
  depfile: config_all_mak + '.d',
  capture: true,
  command: [minikconf,
	    '--defconfig',
	    config_all_mak, 
            '@DEPFILE@', 
            '@INPUT@']
)

config_all_data = configuration_data()
config_all = keyval.load(config_all_mak)


#foreach k, v: config_algos
#        config_algos_data.set(k, 1)
#endforeach
#
foreach k, v: config_all
  config_all_data.set(k, 1)
endforeach



algo_ss = ss.source_set()
cal_ss = ss.source_set()

subdir('src')

#config_data = {}

#algo_ss = algo_ss.apply(config_algos_data, strict: false)
algo_ss = algo_ss.apply(config_all_data, strict: false)

libalgorithm = shared_library('algorithm',
                             sources: algo_ss.sources(),
                             include_directories: target_inc,
                             dependencies: [algo_ss.dependencies(), glib_dep])


algorithm = declare_dependency(link_whole: libalgorithm)

# strict: false，在config没有出现的选项，默认为 false
#cal_ss = cal_ss.apply(config_data, strict: false)
cal_ss = cal_ss.apply(config_all_data, strict: false)

# deps = [ algorithm ]
deps = [ libalgorithm ]
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
        #        dependencies: deps
               dependencies: [ glib_dep, readline_dep ],
               link_with: deps
               )
