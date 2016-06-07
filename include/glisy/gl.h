#ifndef GLISY_GL_H
#define GLISY_GL_H

#ifdef __APPLE__
#  define __gl_h_
#  define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED
#endif

#if __APPLE__
#  include "TargetConditionals.h"
#  if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
#    if GLISY_USE_GLES2
#      include <OpenGLES/ES2/gl.h>
#      include <OpenGLES/ES2/glext.h>
#    else
#      include <OpenGLES/ES3/gl.h>
#      include <OpenGLES/ES3/glext.h>
#  endif
#elif TARGET_OS_MAC
#  include <OpenGL/OpenGL.h>
#  include <OpenGL/gl3.h>
#else
#  error Unsupported Apple platform
#endif
#  if GL_EXT_separate_shader_objects
#    define glUseProgramStages glUseProgramStagesEXT
#    define glActiveShaderProgram glActiveShaderProgramEXT
#    define glCreateShaderProgramv glCreateShaderProgramvEXT
#    define glBindProgramPipeline glBindProgramPipelineEXT
#    define glDeleteProgramPipelines glDeleteProgramPipelinesEXT
#    define glGenProgramPipelines glGenProgramPipelinesEXT
#    define glIsProgramPipeline glIsProgramPipelineEXT
#    define glProgramParameteri glProgramParameteriEXT
#    define glGetProgramPipelineiv glGetProgramPipelineivEXT
#    define glValidateProgramPipeline glValidateProgramPipelineEXT
#    define glGetProgramPipelineInfoLog glGetProgramPipelineInfoLogEXT
#    define glProgramUniform1i glProgramUniform1iEXT
#    define glProgramUniform2i glProgramUniform2iEXT
#    define glProgramUniform3i glProgramUniform3iEXT
#    define glProgramUniform4i glProgramUniform4iEXT
#    define glProgramUniform1f glProgramUniform1fEXT
#    define glProgramUniform2f glProgramUniform2fEXT
#    define glProgramUniform3f glProgramUniform3fEXT
#    define glProgramUniform4f glProgramUniform4fEXT
#    define glProgramUniform1ui glProgramUniform1uiEXT
#    define glProgramUniform2ui glProgramUniform2uiEXT
#    define glProgramUniform3ui glProgramUniform3uiEXT
#    define glProgramUniform4ui glProgramUniform4uiEXT
#    define glProgramUniform1iv glProgramUniform1ivEXT
#    define glProgramUniform2iv glProgramUniform2ivEXT
#    define glProgramUniform3iv glProgramUniform3ivEXT
#    define glProgramUniform4iv glProgramUniform4ivEXT
#    define glProgramUniform1fv glProgramUniform1fvEXT
#    define glProgramUniform2fv glProgramUniform2fvEXT
#    define glProgramUniform3fv glProgramUniform3fvEXT
#    define glProgramUniform4fv glProgramUniform4fvEXT
#    define glProgramUniform1uiv glProgramUniform1uivEXT
#    define glProgramUniform2uiv glProgramUniform2uivEXT
#    define glProgramUniform3uiv glProgramUniform3uivEXT
#    define glProgramUniform4uiv glProgramUniform4uivEXT
#    define glProgramUniformMatrix2fv glProgramUniformMatrix2fvEXT
#    define glProgramUniformMatrix3fv glProgramUniformMatrix3fvEXT
#    define glProgramUniformMatrix4fv glProgramUniformMatrix4fvEXT
#    define glProgramUniformMatrix2x3fv glProgramUniformMatrix2x3fvEXT
#    define glProgramUniformMatrix3x2fv glProgramUniformMatrix3x2fvEXT
#    define glProgramUniformMatrix2x4fv glProgramUniformMatrix2x4fvEXT
#    define glProgramUniformMatrix4x2fv glProgramUniformMatrix4x2fvEXT
#    define glProgramUniformMatrix3x4fv glProgramUniformMatrix3x4fvEXT
#    define glProgramUniformMatrix4x3fv glProgramUniformMatrix4x3fvEXT
#  endif
#elif __ANDROID__ || GLISY_USE_GLES2
#  define GL_GLEXT_PROTOTYPES
#  include <GLES2/gl2.h>
#  include <GLES2/gl2ext.h>
#else
#  define GL_GLEXT_PROTOTYPES
#  include <GL/gl.h>
#  include <GL/glext.h>
#endif
#endif
