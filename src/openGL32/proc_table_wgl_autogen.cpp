// GENERATED FILE - DO NOT EDIT.
// Generated by gen_proc_table.py using data from gl.xml, wgl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// getProcAddress loader table:
//   Mapping from a string entry point name to function address.
//

#include "openGL32/proc_table_wgl.h"

#include "openGL32/entry_points_gl_1_0_autogen.h"
#include "openGL32/entry_points_gl_1_1_autogen.h"
#include "openGL32/entry_points_gl_1_2_autogen.h"
#include "openGL32/entry_points_gl_1_3_autogen.h"
#include "openGL32/entry_points_gl_1_4_autogen.h"
#include "openGL32/entry_points_gl_1_5_autogen.h"
#include "openGL32/entry_points_gl_2_0_autogen.h"
#include "openGL32/entry_points_gl_2_1_autogen.h"
#include "openGL32/entry_points_gl_3_0_autogen.h"
#include "openGL32/entry_points_gl_3_1_autogen.h"
#include "openGL32/entry_points_wgl.h"
#include "platform/Platform.h"

#define P(FUNC) reinterpret_cast<PROC>(FUNC)

namespace wgl
{
ProcEntry g_procTable[] = {{"glAccum", P(gl::Accum)},
                           {"glAreTexturesResident", P(gl::AreTexturesResident)},
                           {"glArrayElement", P(gl::ArrayElement)},
                           {"glBegin", P(gl::Begin)},
                           {"glBeginConditionalRender", P(gl::BeginConditionalRender)},
                           {"glBitmap", P(gl::Bitmap)},
                           {"glCallList", P(gl::CallList)},
                           {"glCallLists", P(gl::CallLists)},
                           {"glClampColor", P(gl::ClampColor)},
                           {"glClearAccum", P(gl::ClearAccum)},
                           {"glClearDepth", P(gl::ClearDepth)},
                           {"glClearIndex", P(gl::ClearIndex)},
                           {"glClipPlane", P(gl::ClipPlane)},
                           {"glColor3b", P(gl::Color3b)},
                           {"glColor3bv", P(gl::Color3bv)},
                           {"glColor3d", P(gl::Color3d)},
                           {"glColor3dv", P(gl::Color3dv)},
                           {"glColor3f", P(gl::Color3f)},
                           {"glColor3fv", P(gl::Color3fv)},
                           {"glColor3i", P(gl::Color3i)},
                           {"glColor3iv", P(gl::Color3iv)},
                           {"glColor3s", P(gl::Color3s)},
                           {"glColor3sv", P(gl::Color3sv)},
                           {"glColor3ub", P(gl::Color3ub)},
                           {"glColor3ubv", P(gl::Color3ubv)},
                           {"glColor3ui", P(gl::Color3ui)},
                           {"glColor3uiv", P(gl::Color3uiv)},
                           {"glColor3us", P(gl::Color3us)},
                           {"glColor3usv", P(gl::Color3usv)},
                           {"glColor4b", P(gl::Color4b)},
                           {"glColor4bv", P(gl::Color4bv)},
                           {"glColor4d", P(gl::Color4d)},
                           {"glColor4dv", P(gl::Color4dv)},
                           {"glColor4fv", P(gl::Color4fv)},
                           {"glColor4i", P(gl::Color4i)},
                           {"glColor4iv", P(gl::Color4iv)},
                           {"glColor4s", P(gl::Color4s)},
                           {"glColor4sv", P(gl::Color4sv)},
                           {"glColor4ubv", P(gl::Color4ubv)},
                           {"glColor4ui", P(gl::Color4ui)},
                           {"glColor4uiv", P(gl::Color4uiv)},
                           {"glColor4us", P(gl::Color4us)},
                           {"glColor4usv", P(gl::Color4usv)},
                           {"glColorMaski", P(gl::ColorMaski)},
                           {"glColorMaterial", P(gl::ColorMaterial)},
                           {"glCompressedTexImage1D", P(gl::CompressedTexImage1D)},
                           {"glCompressedTexSubImage1D", P(gl::CompressedTexSubImage1D)},
                           {"glCopyPixels", P(gl::CopyPixels)},
                           {"glCopyTexImage1D", P(gl::CopyTexImage1D)},
                           {"glCopyTexSubImage1D", P(gl::CopyTexSubImage1D)},
                           {"glDeleteLists", P(gl::DeleteLists)},
                           {"glDepthRange", P(gl::DepthRange)},
                           {"glDisablei", P(gl::Disablei)},
                           {"glDrawBuffer", P(gl::DrawBuffer)},
                           {"glDrawPixels", P(gl::DrawPixels)},
                           {"glEdgeFlag", P(gl::EdgeFlag)},
                           {"glEdgeFlagPointer", P(gl::EdgeFlagPointer)},
                           {"glEdgeFlagv", P(gl::EdgeFlagv)},
                           {"glEnablei", P(gl::Enablei)},
                           {"glEnd", P(gl::End)},
                           {"glEndConditionalRender", P(gl::EndConditionalRender)},
                           {"glEndList", P(gl::EndList)},
                           {"glEvalCoord1d", P(gl::EvalCoord1d)},
                           {"glEvalCoord1dv", P(gl::EvalCoord1dv)},
                           {"glEvalCoord1f", P(gl::EvalCoord1f)},
                           {"glEvalCoord1fv", P(gl::EvalCoord1fv)},
                           {"glEvalCoord2d", P(gl::EvalCoord2d)},
                           {"glEvalCoord2dv", P(gl::EvalCoord2dv)},
                           {"glEvalCoord2f", P(gl::EvalCoord2f)},
                           {"glEvalCoord2fv", P(gl::EvalCoord2fv)},
                           {"glEvalMesh1", P(gl::EvalMesh1)},
                           {"glEvalMesh2", P(gl::EvalMesh2)},
                           {"glEvalPoint1", P(gl::EvalPoint1)},
                           {"glEvalPoint2", P(gl::EvalPoint2)},
                           {"glFeedbackBuffer", P(gl::FeedbackBuffer)},
                           {"glFogCoordPointer", P(gl::FogCoordPointer)},
                           {"glFogCoordd", P(gl::FogCoordd)},
                           {"glFogCoorddv", P(gl::FogCoorddv)},
                           {"glFogCoordf", P(gl::FogCoordf)},
                           {"glFogCoordfv", P(gl::FogCoordfv)},
                           {"glFogi", P(gl::Fogi)},
                           {"glFogiv", P(gl::Fogiv)},
                           {"glFramebufferTexture1D", P(gl::FramebufferTexture1D)},
                           {"glFrustum", P(gl::Frustum)},
                           {"glGenLists", P(gl::GenLists)},
                           {"glGetActiveUniformName", P(gl::GetActiveUniformName)},
                           {"glGetBufferSubData", P(gl::GetBufferSubData)},
                           {"glGetClipPlane", P(gl::GetClipPlane)},
                           {"glGetCompressedTexImage", P(gl::GetCompressedTexImage)},
                           {"glGetDoublev", P(gl::GetDoublev)},
                           {"glGetLightiv", P(gl::GetLightiv)},
                           {"glGetMapdv", P(gl::GetMapdv)},
                           {"glGetMapfv", P(gl::GetMapfv)},
                           {"glGetMapiv", P(gl::GetMapiv)},
                           {"glGetMaterialiv", P(gl::GetMaterialiv)},
                           {"glGetPixelMapfv", P(gl::GetPixelMapfv)},
                           {"glGetPixelMapuiv", P(gl::GetPixelMapuiv)},
                           {"glGetPixelMapusv", P(gl::GetPixelMapusv)},
                           {"glGetPolygonStipple", P(gl::GetPolygonStipple)},
                           {"glGetTexGendv", P(gl::GetTexGendv)},
                           {"glGetTexImage", P(gl::GetTexImage)},
                           {"glGetVertexAttribdv", P(gl::GetVertexAttribdv)},
                           {"glIndexMask", P(gl::IndexMask)},
                           {"glIndexPointer", P(gl::IndexPointer)},
                           {"glIndexd", P(gl::Indexd)},
                           {"glIndexdv", P(gl::Indexdv)},
                           {"glIndexf", P(gl::Indexf)},
                           {"glIndexfv", P(gl::Indexfv)},
                           {"glIndexi", P(gl::Indexi)},
                           {"glIndexiv", P(gl::Indexiv)},
                           {"glIndexs", P(gl::Indexs)},
                           {"glIndexsv", P(gl::Indexsv)},
                           {"glIndexub", P(gl::Indexub)},
                           {"glIndexubv", P(gl::Indexubv)},
                           {"glInitNames", P(gl::InitNames)},
                           {"glInterleavedArrays", P(gl::InterleavedArrays)},
                           {"glIsEnabledi", P(gl::IsEnabledi)},
                           {"glIsList", P(gl::IsList)},
                           {"glLightModeli", P(gl::LightModeli)},
                           {"glLightModeliv", P(gl::LightModeliv)},
                           {"glLighti", P(gl::Lighti)},
                           {"glLightiv", P(gl::Lightiv)},
                           {"glLineStipple", P(gl::LineStipple)},
                           {"glListBase", P(gl::ListBase)},
                           {"glLoadMatrixd", P(gl::LoadMatrixd)},
                           {"glLoadName", P(gl::LoadName)},
                           {"glLoadTransposeMatrixd", P(gl::LoadTransposeMatrixd)},
                           {"glLoadTransposeMatrixf", P(gl::LoadTransposeMatrixf)},
                           {"glMap1d", P(gl::Map1d)},
                           {"glMap1f", P(gl::Map1f)},
                           {"glMap2d", P(gl::Map2d)},
                           {"glMap2f", P(gl::Map2f)},
                           {"glMapGrid1d", P(gl::MapGrid1d)},
                           {"glMapGrid1f", P(gl::MapGrid1f)},
                           {"glMapGrid2d", P(gl::MapGrid2d)},
                           {"glMapGrid2f", P(gl::MapGrid2f)},
                           {"glMateriali", P(gl::Materiali)},
                           {"glMaterialiv", P(gl::Materialiv)},
                           {"glMultMatrixd", P(gl::MultMatrixd)},
                           {"glMultTransposeMatrixd", P(gl::MultTransposeMatrixd)},
                           {"glMultTransposeMatrixf", P(gl::MultTransposeMatrixf)},
                           {"glMultiTexCoord1d", P(gl::MultiTexCoord1d)},
                           {"glMultiTexCoord1dv", P(gl::MultiTexCoord1dv)},
                           {"glMultiTexCoord1f", P(gl::MultiTexCoord1f)},
                           {"glMultiTexCoord1fv", P(gl::MultiTexCoord1fv)},
                           {"glMultiTexCoord1i", P(gl::MultiTexCoord1i)},
                           {"glMultiTexCoord1iv", P(gl::MultiTexCoord1iv)},
                           {"glMultiTexCoord1s", P(gl::MultiTexCoord1s)},
                           {"glMultiTexCoord1sv", P(gl::MultiTexCoord1sv)},
                           {"glMultiTexCoord2d", P(gl::MultiTexCoord2d)},
                           {"glMultiTexCoord2dv", P(gl::MultiTexCoord2dv)},
                           {"glMultiTexCoord2f", P(gl::MultiTexCoord2f)},
                           {"glMultiTexCoord2fv", P(gl::MultiTexCoord2fv)},
                           {"glMultiTexCoord2i", P(gl::MultiTexCoord2i)},
                           {"glMultiTexCoord2iv", P(gl::MultiTexCoord2iv)},
                           {"glMultiTexCoord2s", P(gl::MultiTexCoord2s)},
                           {"glMultiTexCoord2sv", P(gl::MultiTexCoord2sv)},
                           {"glMultiTexCoord3d", P(gl::MultiTexCoord3d)},
                           {"glMultiTexCoord3dv", P(gl::MultiTexCoord3dv)},
                           {"glMultiTexCoord3f", P(gl::MultiTexCoord3f)},
                           {"glMultiTexCoord3fv", P(gl::MultiTexCoord3fv)},
                           {"glMultiTexCoord3i", P(gl::MultiTexCoord3i)},
                           {"glMultiTexCoord3iv", P(gl::MultiTexCoord3iv)},
                           {"glMultiTexCoord3s", P(gl::MultiTexCoord3s)},
                           {"glMultiTexCoord3sv", P(gl::MultiTexCoord3sv)},
                           {"glMultiTexCoord4d", P(gl::MultiTexCoord4d)},
                           {"glMultiTexCoord4dv", P(gl::MultiTexCoord4dv)},
                           {"glMultiTexCoord4fv", P(gl::MultiTexCoord4fv)},
                           {"glMultiTexCoord4i", P(gl::MultiTexCoord4i)},
                           {"glMultiTexCoord4iv", P(gl::MultiTexCoord4iv)},
                           {"glMultiTexCoord4s", P(gl::MultiTexCoord4s)},
                           {"glMultiTexCoord4sv", P(gl::MultiTexCoord4sv)},
                           {"glNewList", P(gl::NewList)},
                           {"glNormal3b", P(gl::Normal3b)},
                           {"glNormal3bv", P(gl::Normal3bv)},
                           {"glNormal3d", P(gl::Normal3d)},
                           {"glNormal3dv", P(gl::Normal3dv)},
                           {"glNormal3fv", P(gl::Normal3fv)},
                           {"glNormal3i", P(gl::Normal3i)},
                           {"glNormal3iv", P(gl::Normal3iv)},
                           {"glNormal3s", P(gl::Normal3s)},
                           {"glNormal3sv", P(gl::Normal3sv)},
                           {"glOrtho", P(gl::Ortho)},
                           {"glPassThrough", P(gl::PassThrough)},
                           {"glPixelMapfv", P(gl::PixelMapfv)},
                           {"glPixelMapuiv", P(gl::PixelMapuiv)},
                           {"glPixelMapusv", P(gl::PixelMapusv)},
                           {"glPixelStoref", P(gl::PixelStoref)},
                           {"glPixelTransferf", P(gl::PixelTransferf)},
                           {"glPixelTransferi", P(gl::PixelTransferi)},
                           {"glPixelZoom", P(gl::PixelZoom)},
                           {"glPointParameteri", P(gl::PointParameteri)},
                           {"glPointParameteriv", P(gl::PointParameteriv)},
                           {"glPolygonMode", P(gl::PolygonMode)},
                           {"glPolygonStipple", P(gl::PolygonStipple)},
                           {"glPopAttrib", P(gl::PopAttrib)},
                           {"glPopClientAttrib", P(gl::PopClientAttrib)},
                           {"glPopName", P(gl::PopName)},
                           {"glPrimitiveRestartIndex", P(gl::PrimitiveRestartIndex)},
                           {"glPrioritizeTextures", P(gl::PrioritizeTextures)},
                           {"glPushAttrib", P(gl::PushAttrib)},
                           {"glPushClientAttrib", P(gl::PushClientAttrib)},
                           {"glPushName", P(gl::PushName)},
                           {"glRasterPos2d", P(gl::RasterPos2d)},
                           {"glRasterPos2dv", P(gl::RasterPos2dv)},
                           {"glRasterPos2f", P(gl::RasterPos2f)},
                           {"glRasterPos2fv", P(gl::RasterPos2fv)},
                           {"glRasterPos2i", P(gl::RasterPos2i)},
                           {"glRasterPos2iv", P(gl::RasterPos2iv)},
                           {"glRasterPos2s", P(gl::RasterPos2s)},
                           {"glRasterPos2sv", P(gl::RasterPos2sv)},
                           {"glRasterPos3d", P(gl::RasterPos3d)},
                           {"glRasterPos3dv", P(gl::RasterPos3dv)},
                           {"glRasterPos3f", P(gl::RasterPos3f)},
                           {"glRasterPos3fv", P(gl::RasterPos3fv)},
                           {"glRasterPos3i", P(gl::RasterPos3i)},
                           {"glRasterPos3iv", P(gl::RasterPos3iv)},
                           {"glRasterPos3s", P(gl::RasterPos3s)},
                           {"glRasterPos3sv", P(gl::RasterPos3sv)},
                           {"glRasterPos4d", P(gl::RasterPos4d)},
                           {"glRasterPos4dv", P(gl::RasterPos4dv)},
                           {"glRasterPos4f", P(gl::RasterPos4f)},
                           {"glRasterPos4fv", P(gl::RasterPos4fv)},
                           {"glRasterPos4i", P(gl::RasterPos4i)},
                           {"glRasterPos4iv", P(gl::RasterPos4iv)},
                           {"glRasterPos4s", P(gl::RasterPos4s)},
                           {"glRasterPos4sv", P(gl::RasterPos4sv)},
                           {"glRectd", P(gl::Rectd)},
                           {"glRectdv", P(gl::Rectdv)},
                           {"glRectf", P(gl::Rectf)},
                           {"glRectfv", P(gl::Rectfv)},
                           {"glRecti", P(gl::Recti)},
                           {"glRectiv", P(gl::Rectiv)},
                           {"glRects", P(gl::Rects)},
                           {"glRectsv", P(gl::Rectsv)},
                           {"glRenderMode", P(gl::RenderMode)},
                           {"glRotated", P(gl::Rotated)},
                           {"glScaled", P(gl::Scaled)},
                           {"glSecondaryColor3b", P(gl::SecondaryColor3b)},
                           {"glSecondaryColor3bv", P(gl::SecondaryColor3bv)},
                           {"glSecondaryColor3d", P(gl::SecondaryColor3d)},
                           {"glSecondaryColor3dv", P(gl::SecondaryColor3dv)},
                           {"glSecondaryColor3f", P(gl::SecondaryColor3f)},
                           {"glSecondaryColor3fv", P(gl::SecondaryColor3fv)},
                           {"glSecondaryColor3i", P(gl::SecondaryColor3i)},
                           {"glSecondaryColor3iv", P(gl::SecondaryColor3iv)},
                           {"glSecondaryColor3s", P(gl::SecondaryColor3s)},
                           {"glSecondaryColor3sv", P(gl::SecondaryColor3sv)},
                           {"glSecondaryColor3ub", P(gl::SecondaryColor3ub)},
                           {"glSecondaryColor3ubv", P(gl::SecondaryColor3ubv)},
                           {"glSecondaryColor3ui", P(gl::SecondaryColor3ui)},
                           {"glSecondaryColor3uiv", P(gl::SecondaryColor3uiv)},
                           {"glSecondaryColor3us", P(gl::SecondaryColor3us)},
                           {"glSecondaryColor3usv", P(gl::SecondaryColor3usv)},
                           {"glSecondaryColorPointer", P(gl::SecondaryColorPointer)},
                           {"glSelectBuffer", P(gl::SelectBuffer)},
                           {"glTexBuffer", P(gl::TexBuffer)},
                           {"glTexCoord1d", P(gl::TexCoord1d)},
                           {"glTexCoord1dv", P(gl::TexCoord1dv)},
                           {"glTexCoord1f", P(gl::TexCoord1f)},
                           {"glTexCoord1fv", P(gl::TexCoord1fv)},
                           {"glTexCoord1i", P(gl::TexCoord1i)},
                           {"glTexCoord1iv", P(gl::TexCoord1iv)},
                           {"glTexCoord1s", P(gl::TexCoord1s)},
                           {"glTexCoord1sv", P(gl::TexCoord1sv)},
                           {"glTexCoord2d", P(gl::TexCoord2d)},
                           {"glTexCoord2dv", P(gl::TexCoord2dv)},
                           {"glTexCoord2f", P(gl::TexCoord2f)},
                           {"glTexCoord2fv", P(gl::TexCoord2fv)},
                           {"glTexCoord2i", P(gl::TexCoord2i)},
                           {"glTexCoord2iv", P(gl::TexCoord2iv)},
                           {"glTexCoord2s", P(gl::TexCoord2s)},
                           {"glTexCoord2sv", P(gl::TexCoord2sv)},
                           {"glTexCoord3d", P(gl::TexCoord3d)},
                           {"glTexCoord3dv", P(gl::TexCoord3dv)},
                           {"glTexCoord3f", P(gl::TexCoord3f)},
                           {"glTexCoord3fv", P(gl::TexCoord3fv)},
                           {"glTexCoord3i", P(gl::TexCoord3i)},
                           {"glTexCoord3iv", P(gl::TexCoord3iv)},
                           {"glTexCoord3s", P(gl::TexCoord3s)},
                           {"glTexCoord3sv", P(gl::TexCoord3sv)},
                           {"glTexCoord4d", P(gl::TexCoord4d)},
                           {"glTexCoord4dv", P(gl::TexCoord4dv)},
                           {"glTexCoord4f", P(gl::TexCoord4f)},
                           {"glTexCoord4fv", P(gl::TexCoord4fv)},
                           {"glTexCoord4i", P(gl::TexCoord4i)},
                           {"glTexCoord4iv", P(gl::TexCoord4iv)},
                           {"glTexCoord4s", P(gl::TexCoord4s)},
                           {"glTexCoord4sv", P(gl::TexCoord4sv)},
                           {"glTexGend", P(gl::TexGend)},
                           {"glTexGendv", P(gl::TexGendv)},
                           {"glTexImage1D", P(gl::TexImage1D)},
                           {"glTexSubImage1D", P(gl::TexSubImage1D)},
                           {"glTranslated", P(gl::Translated)},
                           {"glVertex2d", P(gl::Vertex2d)},
                           {"glVertex2dv", P(gl::Vertex2dv)},
                           {"glVertex2f", P(gl::Vertex2f)},
                           {"glVertex2fv", P(gl::Vertex2fv)},
                           {"glVertex2i", P(gl::Vertex2i)},
                           {"glVertex2iv", P(gl::Vertex2iv)},
                           {"glVertex2s", P(gl::Vertex2s)},
                           {"glVertex2sv", P(gl::Vertex2sv)},
                           {"glVertex3d", P(gl::Vertex3d)},
                           {"glVertex3dv", P(gl::Vertex3dv)},
                           {"glVertex3f", P(gl::Vertex3f)},
                           {"glVertex3fv", P(gl::Vertex3fv)},
                           {"glVertex3i", P(gl::Vertex3i)},
                           {"glVertex3iv", P(gl::Vertex3iv)},
                           {"glVertex3s", P(gl::Vertex3s)},
                           {"glVertex3sv", P(gl::Vertex3sv)},
                           {"glVertex4d", P(gl::Vertex4d)},
                           {"glVertex4dv", P(gl::Vertex4dv)},
                           {"glVertex4f", P(gl::Vertex4f)},
                           {"glVertex4fv", P(gl::Vertex4fv)},
                           {"glVertex4i", P(gl::Vertex4i)},
                           {"glVertex4iv", P(gl::Vertex4iv)},
                           {"glVertex4s", P(gl::Vertex4s)},
                           {"glVertex4sv", P(gl::Vertex4sv)},
                           {"glVertexAttrib1d", P(gl::VertexAttrib1d)},
                           {"glVertexAttrib1dv", P(gl::VertexAttrib1dv)},
                           {"glVertexAttrib1s", P(gl::VertexAttrib1s)},
                           {"glVertexAttrib1sv", P(gl::VertexAttrib1sv)},
                           {"glVertexAttrib2d", P(gl::VertexAttrib2d)},
                           {"glVertexAttrib2dv", P(gl::VertexAttrib2dv)},
                           {"glVertexAttrib2s", P(gl::VertexAttrib2s)},
                           {"glVertexAttrib2sv", P(gl::VertexAttrib2sv)},
                           {"glVertexAttrib3d", P(gl::VertexAttrib3d)},
                           {"glVertexAttrib3dv", P(gl::VertexAttrib3dv)},
                           {"glVertexAttrib3s", P(gl::VertexAttrib3s)},
                           {"glVertexAttrib3sv", P(gl::VertexAttrib3sv)},
                           {"glVertexAttrib4Nbv", P(gl::VertexAttrib4Nbv)},
                           {"glVertexAttrib4Niv", P(gl::VertexAttrib4Niv)},
                           {"glVertexAttrib4Nsv", P(gl::VertexAttrib4Nsv)},
                           {"glVertexAttrib4Nub", P(gl::VertexAttrib4Nub)},
                           {"glVertexAttrib4Nubv", P(gl::VertexAttrib4Nubv)},
                           {"glVertexAttrib4Nuiv", P(gl::VertexAttrib4Nuiv)},
                           {"glVertexAttrib4Nusv", P(gl::VertexAttrib4Nusv)},
                           {"glVertexAttrib4bv", P(gl::VertexAttrib4bv)},
                           {"glVertexAttrib4d", P(gl::VertexAttrib4d)},
                           {"glVertexAttrib4dv", P(gl::VertexAttrib4dv)},
                           {"glVertexAttrib4iv", P(gl::VertexAttrib4iv)},
                           {"glVertexAttrib4s", P(gl::VertexAttrib4s)},
                           {"glVertexAttrib4sv", P(gl::VertexAttrib4sv)},
                           {"glVertexAttrib4ubv", P(gl::VertexAttrib4ubv)},
                           {"glVertexAttrib4uiv", P(gl::VertexAttrib4uiv)},
                           {"glVertexAttrib4usv", P(gl::VertexAttrib4usv)},
                           {"glVertexAttribI1i", P(gl::VertexAttribI1i)},
                           {"glVertexAttribI1iv", P(gl::VertexAttribI1iv)},
                           {"glVertexAttribI1ui", P(gl::VertexAttribI1ui)},
                           {"glVertexAttribI1uiv", P(gl::VertexAttribI1uiv)},
                           {"glVertexAttribI2i", P(gl::VertexAttribI2i)},
                           {"glVertexAttribI2iv", P(gl::VertexAttribI2iv)},
                           {"glVertexAttribI2ui", P(gl::VertexAttribI2ui)},
                           {"glVertexAttribI2uiv", P(gl::VertexAttribI2uiv)},
                           {"glVertexAttribI3i", P(gl::VertexAttribI3i)},
                           {"glVertexAttribI3iv", P(gl::VertexAttribI3iv)},
                           {"glVertexAttribI3ui", P(gl::VertexAttribI3ui)},
                           {"glVertexAttribI3uiv", P(gl::VertexAttribI3uiv)},
                           {"glVertexAttribI4bv", P(gl::VertexAttribI4bv)},
                           {"glVertexAttribI4sv", P(gl::VertexAttribI4sv)},
                           {"glVertexAttribI4ubv", P(gl::VertexAttribI4ubv)},
                           {"glVertexAttribI4usv", P(gl::VertexAttribI4usv)},
                           {"glWindowPos2d", P(gl::WindowPos2d)},
                           {"glWindowPos2dv", P(gl::WindowPos2dv)},
                           {"glWindowPos2f", P(gl::WindowPos2f)},
                           {"glWindowPos2fv", P(gl::WindowPos2fv)},
                           {"glWindowPos2i", P(gl::WindowPos2i)},
                           {"glWindowPos2iv", P(gl::WindowPos2iv)},
                           {"glWindowPos2s", P(gl::WindowPos2s)},
                           {"glWindowPos2sv", P(gl::WindowPos2sv)},
                           {"glWindowPos3d", P(gl::WindowPos3d)},
                           {"glWindowPos3dv", P(gl::WindowPos3dv)},
                           {"glWindowPos3f", P(gl::WindowPos3f)},
                           {"glWindowPos3fv", P(gl::WindowPos3fv)},
                           {"glWindowPos3i", P(gl::WindowPos3i)},
                           {"glWindowPos3iv", P(gl::WindowPos3iv)},
                           {"glWindowPos3s", P(gl::WindowPos3s)},
                           {"glWindowPos3sv", P(gl::WindowPos3sv)},
                           {"wglChoosePixelFormat", P(wglChoosePixelFormat)},
                           {"wglCopyContext", P(wglCopyContext)},
                           {"wglCreateContext", P(wglCreateContext)},
                           {"wglCreateLayerContext", P(wglCreateLayerContext)},
                           {"wglDeleteContext", P(wglDeleteContext)},
                           {"wglDescribeLayerPlane", P(wglDescribeLayerPlane)},
                           {"wglDescribePixelFormat", P(wglDescribePixelFormat)},
                           {"wglGetCurrentContext", P(wglGetCurrentContext)},
                           {"wglGetCurrentDC", P(wglGetCurrentDC)},
                           {"wglGetEnhMetaFilePixelFormat", P(wglGetEnhMetaFilePixelFormat)},
                           {"wglGetLayerPaletteEntries", P(wglGetLayerPaletteEntries)},
                           {"wglGetPixelFormat", P(wglGetPixelFormat)},
                           {"wglGetProcAddress", P(wglGetProcAddress)},
                           {"wglMakeCurrent", P(wglMakeCurrent)},
                           {"wglRealizeLayerPalette", P(wglRealizeLayerPalette)},
                           {"wglSetLayerPaletteEntries", P(wglSetLayerPaletteEntries)},
                           {"wglSetPixelFormat", P(wglSetPixelFormat)},
                           {"wglShareLists", P(wglShareLists)},
                           {"wglSwapBuffers", P(wglSwapBuffers)},
                           {"wglSwapLayerBuffers", P(wglSwapLayerBuffers)},
                           {"wglUseFontBitmaps", P(wglUseFontBitmaps)},
                           {"wglUseFontBitmapsA", P(wglUseFontBitmapsA)},
                           {"wglUseFontBitmapsW", P(wglUseFontBitmapsW)},
                           {"wglUseFontOutlines", P(wglUseFontOutlines)},
                           {"wglUseFontOutlinesA", P(wglUseFontOutlinesA)},
                           {"wglUseFontOutlinesW", P(wglUseFontOutlinesW)}};

size_t g_numProcs = 404;
}  // namespace wgl