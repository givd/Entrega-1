#if __VERSION__<130
#define IN attribute
#define OUT varying
#else
#define IN in
#define OUT out
#endif

IN vec4 vPosition;
IN vec4 vColor;
IN vec2 vCoordTexture;

OUT vec4 color;
OUT v_texcoord;

void main()
{
  gl_Position = vPosition;
  color = vColor;
  v_texcoord = vCoordTexture;
}
