{ lib
, stdenv
, fetchFromGitHub
, gcc
, gnumake
, pkg-config
, libclipboard
, xorg
, src ? fetchFromGitHub {
    owner = "qfumbled";
    repo = "pound";
    rev = "main";
    hash = lib.fakeSha256;
  }
}:

stdenv.mkDerivation {
  pname = "pound";
  version = "unstable-2025-10-28";

  inherit src;

  nativeBuildInputs = [ gcc gnumake pkg-config ];
  buildInputs = [ libclipboard xorg.libX11 xorg.libxcb ];

  buildPhase = ''
    make
  '';

  installPhase = ''
    mkdir -p $out/bin
    cp build/pound $out/bin/pound
  '';

  meta = with lib; {
    description = "text editor from nammish";
    homepage = "https://github.com/qfumbled/pound";
    license = licenses.unlicense;
    platforms = platforms.unix;
  };
}
