#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgAngleInterpolate__Ffffi
// Address: 0x130b60 - 0x130d04
void mgAngleInterpolate__Ffffi_0x130b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgAngleInterpolate__Ffffi_0x130b60");
#endif

    ctx->pc = 0x130b60u;

    // 0x130b60: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130b64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130b68: 0x460c6841  sub.s       $f1, $f13, $f12
    ctx->pc = 0x130b68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x130b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130b70: 0x0  nop
    ctx->pc = 0x130b70u;
    // NOP
    // 0x130b74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130b78: 0x0  nop
    ctx->pc = 0x130b78u;
    // NOP
    // 0x130b7c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x130B7Cu;
    {
        const bool branch_taken_0x130b7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130B7Cu;
            // 0x130b80: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b7c) {
            ctx->pc = 0x130B9Cu;
            goto label_130b9c;
        }
    }
    ctx->pc = 0x130B84u;
    // 0x130b84: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x130b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x130b88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130b90: 0x0  nop
    ctx->pc = 0x130b90u;
    // NOP
    // 0x130b94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x130b94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130b98: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x130b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_130b9c:
    // 0x130b9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130ba4: 0x0  nop
    ctx->pc = 0x130ba4u;
    // NOP
    // 0x130ba8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130bac: 0x0  nop
    ctx->pc = 0x130bacu;
    // NOP
    // 0x130bb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x130BB0u;
    {
        const bool branch_taken_0x130bb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130BB0u;
            // 0x130bb4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bb0) {
            ctx->pc = 0x130BC8u;
            goto label_130bc8;
        }
    }
    ctx->pc = 0x130BB8u;
    // 0x130bb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130bc0: 0x0  nop
    ctx->pc = 0x130bc0u;
    // NOP
    // 0x130bc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x130bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_130bc8:
    // 0x130bc8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x130bc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x130bcc: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x130BCCu;
    {
        const bool branch_taken_0x130bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130BCCu;
            // 0x130bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bcc) {
            ctx->pc = 0x130C04u;
            goto label_130c04;
        }
    }
    ctx->pc = 0x130BD4u;
    // 0x130bd4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x130bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130bd8: 0x0  nop
    ctx->pc = 0x130bd8u;
    // NOP
    // 0x130bdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x130BDCu;
    {
        const bool branch_taken_0x130bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130BDCu;
            // 0x130be0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bdc) {
            ctx->pc = 0x130BE8u;
            goto label_130be8;
        }
    }
    ctx->pc = 0x130BE4u;
    // 0x130be4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x130be4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_130be8:
    // 0x130be8: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x130be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130bec: 0x0  nop
    ctx->pc = 0x130becu;
    // NOP
    // 0x130bf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x130BF0u;
    {
        const bool branch_taken_0x130bf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130BF0u;
            // 0x130bf4: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bf0) {
            ctx->pc = 0x130C00u;
            goto label_130c00;
        }
    }
    ctx->pc = 0x130BF8u;
    // 0x130bf8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x130BF8u;
    {
        const bool branch_taken_0x130bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130bf8) {
            ctx->pc = 0x130CFCu;
            goto label_130cfc;
        }
    }
    ctx->pc = 0x130C00u;
label_130c00:
    // 0x130c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130c04:
    // 0x130c04: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x130C04u;
    {
        const bool branch_taken_0x130c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x130c04) {
            ctx->pc = 0x130C88u;
            goto label_130c88;
        }
    }
    ctx->pc = 0x130C0Cu;
    // 0x130c0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130C0Cu;
    {
        const bool branch_taken_0x130c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c0c) {
            ctx->pc = 0x130C1Cu;
            goto label_130c1c;
        }
    }
    ctx->pc = 0x130C14u;
    // 0x130c14: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x130C14u;
    {
        const bool branch_taken_0x130c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C14u;
            // 0x130c18: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c14) {
            ctx->pc = 0x130C98u;
            goto label_130c98;
        }
    }
    ctx->pc = 0x130C1Cu;
label_130c1c:
    // 0x130c1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130c20: 0x0  nop
    ctx->pc = 0x130c20u;
    // NOP
    // 0x130c24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130c28: 0x0  nop
    ctx->pc = 0x130c28u;
    // NOP
    // 0x130c2c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x130C2Cu;
    {
        const bool branch_taken_0x130c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130c2c) {
            ctx->pc = 0x130C50u;
            goto label_130c50;
        }
    }
    ctx->pc = 0x130C34u;
    // 0x130c34: 0x46017034  c.lt.s      $f14, $f1
    ctx->pc = 0x130c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130c38: 0x0  nop
    ctx->pc = 0x130c38u;
    // NOP
    // 0x130c3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x130C3Cu;
    {
        const bool branch_taken_0x130c3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C3Cu;
            // 0x130c40: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c3c) {
            ctx->pc = 0x130C4Cu;
            goto label_130c4c;
        }
    }
    ctx->pc = 0x130C44u;
    // 0x130c44: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x130C44u;
    {
        const bool branch_taken_0x130c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c44) {
            ctx->pc = 0x130CFCu;
            goto label_130cfc;
        }
    }
    ctx->pc = 0x130C4Cu;
label_130c4c:
    // 0x130c4c: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x130c4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
label_130c50:
    // 0x130c50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130c54: 0x0  nop
    ctx->pc = 0x130c54u;
    // NOP
    // 0x130c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130c5c: 0x0  nop
    ctx->pc = 0x130c5cu;
    // NOP
    // 0x130c60: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x130C60u;
    {
        const bool branch_taken_0x130c60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130c60) {
            ctx->pc = 0x130C94u;
            goto label_130c94;
        }
    }
    ctx->pc = 0x130C68u;
    // 0x130c68: 0x46017036  c.le.s      $f14, $f1
    ctx->pc = 0x130c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130c6c: 0x0  nop
    ctx->pc = 0x130c6cu;
    // NOP
    // 0x130c70: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130C70u;
    {
        const bool branch_taken_0x130c70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C70u;
            // 0x130c74: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c70) {
            ctx->pc = 0x130C80u;
            goto label_130c80;
        }
    }
    ctx->pc = 0x130C78u;
    // 0x130c78: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x130C78u;
    {
        const bool branch_taken_0x130c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c78) {
            ctx->pc = 0x130CFCu;
            goto label_130cfc;
        }
    }
    ctx->pc = 0x130C80u;
label_130c80:
    // 0x130c80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130C80u;
    {
        const bool branch_taken_0x130c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130C80u;
            // 0x130c84: 0x460e1080  add.s       $f2, $f2, $f14 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c80) {
            ctx->pc = 0x130C94u;
            goto label_130c94;
        }
    }
    ctx->pc = 0x130C88u;
label_130c88:
    // 0x130c88: 0x0  nop
    ctx->pc = 0x130c88u;
    // NOP
    // 0x130c8c: 0x0  nop
    ctx->pc = 0x130c8cu;
    // NOP
    // 0x130c90: 0x460e0883  div.s       $f2, $f1, $f14
    ctx->pc = 0x130c90u;
    { if (ctx->f[14] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[14]); }
label_130c94:
    // 0x130c94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_130c98:
    // 0x130c98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130c9c: 0x46026000  add.s       $f0, $f12, $f2
    ctx->pc = 0x130c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x130ca0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130ca4: 0x0  nop
    ctx->pc = 0x130ca4u;
    // NOP
    // 0x130ca8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x130ca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130cac: 0x0  nop
    ctx->pc = 0x130cacu;
    // NOP
    // 0x130cb0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x130CB0u;
    {
        const bool branch_taken_0x130cb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130CB0u;
            // 0x130cb4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cb0) {
            ctx->pc = 0x130CD0u;
            goto label_130cd0;
        }
    }
    ctx->pc = 0x130CB8u;
    // 0x130cb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x130cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x130cbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130cc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130cc4: 0x0  nop
    ctx->pc = 0x130cc4u;
    // NOP
    // 0x130cc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x130cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x130ccc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x130cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_130cd0:
    // 0x130cd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130cd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130cd8: 0x0  nop
    ctx->pc = 0x130cd8u;
    // NOP
    // 0x130cdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x130cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ce0: 0x0  nop
    ctx->pc = 0x130ce0u;
    // NOP
    // 0x130ce4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x130CE4u;
    {
        const bool branch_taken_0x130ce4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130CE4u;
            // 0x130ce8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ce4) {
            ctx->pc = 0x130CFCu;
            goto label_130cfc;
        }
    }
    ctx->pc = 0x130CECu;
    // 0x130cec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130cf4: 0x0  nop
    ctx->pc = 0x130cf4u;
    // NOP
    // 0x130cf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x130cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_130cfc:
    // 0x130cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x130CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130D04u;
}
