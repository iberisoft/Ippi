# IPPI

This C++ DLL exposes some functions of Intel IPP used in my projects requiring fast image processing:

Function                   | Description
---------------------------|------------
ippiRotate_16u_C1R         | Rotates an image around the origin (0,0) and then shifts it
ippiMirror_16u_C1IR        | Mirrors an image about a horizontal or vertical axis, or both
ippiResizeSqrPixel_16u_C1R | Changes an image size using different interpolation algorithm
ippiResizeGetBufSize       | Computes the size of the external buffer for image resizing
ippiSet_16u_C1R            | Sets an array of pixels to a value
ippiLUTPalette_16u8u_C1R   | Maps an image by applying intensity transformation in accordance with a palette table
