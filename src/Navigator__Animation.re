type common =
  | Fade
  | SlideHorizontal;

let commonToJs =
  fun
  | Fade => "fade"
  | SlideHorizontal => "slide-horizontal";

type showModal =
  | None
  | SlideUp;

let showModalToJs =
  fun
  | None => "none"
  | SlideUp => "slide-up";
