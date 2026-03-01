# Read me

Work in progres ...

## Install

See the [official QMK documentation page](`https://docs.qmk.fm/#/newbs_getting_started`)

Place the folder `baeriivan` here: `qmk_firmare/keyboards/dz60/keymaps/<baeriivan>` (i.e. where the `qmk_firmware` was installed)

## Compilation

In the `qmk_firmware` folder, you might have to use:

- `qmk clean -a`
- `qmk compile` or (`qmk compile -kb dz60 -km baeriivan`)

and to flash the keyboard:
- `qmk flash`
- Press on `MO(_FN) + KC_BSPC` to trigger `KQ_BOOT`

## TODO

- [X] Re-create a working setup on new QMK
- [X] Add `gaming` layout
- [ ] Re-up the handling of accents with unicode
