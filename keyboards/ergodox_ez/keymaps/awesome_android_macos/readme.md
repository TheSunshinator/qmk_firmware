# ErgoDox EZ Configuration For Android development on MacOS

Set as default keyboard: `qmk config user.keyboard=ergodox_ez`
Set as default keymap: `qmk config user.keymap=awesome_android_macos`

Build: `qmk compile -kb ergodox_ez -km awesome_android_macos`
Build (with defaults): `qmk compile`

Flash: `qmk flash -kb ergodox_ez -km awesome_android_macos`
Build (with defaults): `qmk flash`
