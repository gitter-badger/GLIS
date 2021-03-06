attribute vec4 coord;
varying vec2 texpos;
uniform mat4 projection;

void main(void) {
  gl_Position = projection * vec4(coord.xy, 0, 1);
  texpos = coord.zw;
}
