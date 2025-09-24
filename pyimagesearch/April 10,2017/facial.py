
FACIAL_LANDMARKS_IDS=OrderedDict([
    ("mouth",(48,68))
])


def Visualize(image,shape,colors=None,alpha=0.75):
    # creating two copies of the input image
    # overlay and one for the final output image
    overlay=image.copy()
    output=image.copy()

    if colors is None:
        colors=[(19,199,109)]

