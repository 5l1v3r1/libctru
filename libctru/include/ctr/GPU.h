#ifndef GPU_H
#define GPU_H

void GPU_Init(Handle *gsphandle);
void GPU_Reset(u32* gxbuf, u32* gpuBuf, u32 gpuBufSize);

void GPUCMD_SetBuffer(u32* adr, u32 size, u32 offset);
void GPUCMD_Run(u32* gxbuf);
void GPUCMD_Add(u32 cmd, u32* param, u32 paramlength);
void GPUCMD_AddSingleParam(u32 cmd, u32 param);
void GPUCMD_Finalize();

void GPU_SetUniform(u32 startreg, u32* data, u32 numreg);
void GPU_SetViewport(u32* depthBuffer, u32* colorBuffer, u32 x, u32 y, u32 w, u32 h);

#endif