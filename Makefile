# Flashing the keyboard:
# make flash

qmk_dir = qmk_firmware

keyboard = cantor
keymap = KEYMAP
target = flash

keymap_path = ${qmk_dir}/keyboards/${keyboard}/keymaps/${keymap}/
build_cmd = sudo util/docker_build.sh ${keyboard}:${keymap}:${target}

keymap_clean:
	rm -rf ${keymap_path}

keymap_copy: keymap_clean
	mkdir ${keymap_path}
	cp cantor/* ${keymap_path}

qmk_flash:
	cd ${qmk_dir} && ${build_cmd}

flash:
	@make keymap_copy
	@make qmk_flash
	@make keymap_clean
