{ pkgs ? import <nixpkgs> {}  }:

with pkgs; 

stdenv.mkDerivation { 
  name = "neuron-shell";
  buildInputs = [];

  shellHook = ''
  '';
} 
