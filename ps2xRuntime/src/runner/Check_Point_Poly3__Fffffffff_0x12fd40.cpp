#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Check_Point_Poly3__Fffffffff
// Address: 0x12fd40 - 0x12ffc8
void Check_Point_Poly3__Fffffffff_0x12fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_Point_Poly3__Fffffffff_0x12fd40");
#endif

    ctx->pc = 0x12fd40u;

    // 0x12fd40: 0x46107034  c.lt.s      $f14, $f16
    ctx->pc = 0x12fd40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fd44: 0x0  nop
    ctx->pc = 0x12fd44u;
    // NOP
    // 0x12fd48: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x12FD48u;
    {
        const bool branch_taken_0x12fd48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fd48) {
            ctx->pc = 0x12FD6Cu;
            goto label_12fd6c;
        }
    }
    ctx->pc = 0x12FD50u;
    // 0x12fd50: 0x46127034  c.lt.s      $f14, $f18
    ctx->pc = 0x12fd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fd54: 0x0  nop
    ctx->pc = 0x12fd54u;
    // NOP
    // 0x12fd58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12FD58u;
    {
        const bool branch_taken_0x12fd58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD58u;
            // 0x12fd5c: 0x46009006  mov.s       $f0, $f18 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd58) {
            ctx->pc = 0x12FD64u;
            goto label_12fd64;
        }
    }
    ctx->pc = 0x12FD60u;
    // 0x12fd60: 0x46007006  mov.s       $f0, $f14
    ctx->pc = 0x12fd60u;
    ctx->f[0] = FPU_MOV_S(ctx->f[14]);
label_12fd64:
    // 0x12fd64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FD64u;
    {
        const bool branch_taken_0x12fd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd64) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12FD6Cu;
label_12fd6c:
    // 0x12fd6c: 0x46128034  c.lt.s      $f16, $f18
    ctx->pc = 0x12fd6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fd70: 0x0  nop
    ctx->pc = 0x12fd70u;
    // NOP
    // 0x12fd74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FD74u;
    {
        const bool branch_taken_0x12fd74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD74u;
            // 0x12fd78: 0x46009006  mov.s       $f0, $f18 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd74) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12FD7Cu;
    // 0x12fd7c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12FD7Cu;
    {
        const bool branch_taken_0x12fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD7Cu;
            // 0x12fd80: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd7c) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12FD84u;
label_12fd84:
    // 0x12fd84: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x12fd84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fd88: 0x0  nop
    ctx->pc = 0x12fd88u;
    // NOP
    // 0x12fd8c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FD8Cu;
    {
        const bool branch_taken_0x12fd8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD8Cu;
            // 0x12fd90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd8c) {
            ctx->pc = 0x12FD9Cu;
            goto label_12fd9c;
        }
    }
    ctx->pc = 0x12FD94u;
    // 0x12fd94: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x12FD94u;
    {
        const bool branch_taken_0x12fd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd94) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FD9Cu;
label_12fd9c:
    // 0x12fd9c: 0x46107036  c.le.s      $f14, $f16
    ctx->pc = 0x12fd9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fda0: 0x0  nop
    ctx->pc = 0x12fda0u;
    // NOP
    // 0x12fda4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x12FDA4u;
    {
        const bool branch_taken_0x12fda4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fda4) {
            ctx->pc = 0x12FDC8u;
            goto label_12fdc8;
        }
    }
    ctx->pc = 0x12FDACu;
    // 0x12fdac: 0x46127036  c.le.s      $f14, $f18
    ctx->pc = 0x12fdacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fdb0: 0x0  nop
    ctx->pc = 0x12fdb0u;
    // NOP
    // 0x12fdb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x12FDB4u;
    {
        const bool branch_taken_0x12fdb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDB4u;
            // 0x12fdb8: 0x46009006  mov.s       $f0, $f18 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdb4) {
            ctx->pc = 0x12FDC0u;
            goto label_12fdc0;
        }
    }
    ctx->pc = 0x12FDBCu;
    // 0x12fdbc: 0x46007006  mov.s       $f0, $f14
    ctx->pc = 0x12fdbcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[14]);
label_12fdc0:
    // 0x12fdc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FDC0u;
    {
        const bool branch_taken_0x12fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fdc0) {
            ctx->pc = 0x12FDE0u;
            goto label_12fde0;
        }
    }
    ctx->pc = 0x12FDC8u;
label_12fdc8:
    // 0x12fdc8: 0x46128036  c.le.s      $f16, $f18
    ctx->pc = 0x12fdc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[16], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fdcc: 0x0  nop
    ctx->pc = 0x12fdccu;
    // NOP
    // 0x12fdd0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FDD0u;
    {
        const bool branch_taken_0x12fdd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDD0u;
            // 0x12fdd4: 0x46009006  mov.s       $f0, $f18 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdd0) {
            ctx->pc = 0x12FDE0u;
            goto label_12fde0;
        }
    }
    ctx->pc = 0x12FDD8u;
    // 0x12fdd8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12FDD8u;
    {
        const bool branch_taken_0x12fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDD8u;
            // 0x12fddc: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdd8) {
            ctx->pc = 0x12FDE0u;
            goto label_12fde0;
        }
    }
    ctx->pc = 0x12FDE0u;
label_12fde0:
    // 0x12fde0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x12fde0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fde4: 0x0  nop
    ctx->pc = 0x12fde4u;
    // NOP
    // 0x12fde8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FDE8u;
    {
        const bool branch_taken_0x12fde8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDE8u;
            // 0x12fdec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fde8) {
            ctx->pc = 0x12FDF8u;
            goto label_12fdf8;
        }
    }
    ctx->pc = 0x12FDF0u;
    // 0x12fdf0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x12FDF0u;
    {
        const bool branch_taken_0x12fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fdf0) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FDF8u;
label_12fdf8:
    // 0x12fdf8: 0x46117834  c.lt.s      $f15, $f17
    ctx->pc = 0x12fdf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fdfc: 0x0  nop
    ctx->pc = 0x12fdfcu;
    // NOP
    // 0x12fe00: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x12FE00u;
    {
        const bool branch_taken_0x12fe00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fe00) {
            ctx->pc = 0x12FE24u;
            goto label_12fe24;
        }
    }
    ctx->pc = 0x12FE08u;
    // 0x12fe08: 0x46137834  c.lt.s      $f15, $f19
    ctx->pc = 0x12fe08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe0c: 0x0  nop
    ctx->pc = 0x12fe0cu;
    // NOP
    // 0x12fe10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12FE10u;
    {
        const bool branch_taken_0x12fe10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE10u;
            // 0x12fe14: 0x46009806  mov.s       $f0, $f19 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[19]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe10) {
            ctx->pc = 0x12FE1Cu;
            goto label_12fe1c;
        }
    }
    ctx->pc = 0x12FE18u;
    // 0x12fe18: 0x46007806  mov.s       $f0, $f15
    ctx->pc = 0x12fe18u;
    ctx->f[0] = FPU_MOV_S(ctx->f[15]);
label_12fe1c:
    // 0x12fe1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FE1Cu;
    {
        const bool branch_taken_0x12fe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe1c) {
            ctx->pc = 0x12FE3Cu;
            goto label_12fe3c;
        }
    }
    ctx->pc = 0x12FE24u;
label_12fe24:
    // 0x12fe24: 0x46138834  c.lt.s      $f17, $f19
    ctx->pc = 0x12fe24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe28: 0x0  nop
    ctx->pc = 0x12fe28u;
    // NOP
    // 0x12fe2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE2Cu;
    {
        const bool branch_taken_0x12fe2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE2Cu;
            // 0x12fe30: 0x46009806  mov.s       $f0, $f19 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[19]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe2c) {
            ctx->pc = 0x12FE3Cu;
            goto label_12fe3c;
        }
    }
    ctx->pc = 0x12FE34u;
    // 0x12fe34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12FE34u;
    {
        const bool branch_taken_0x12fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE34u;
            // 0x12fe38: 0x46008806  mov.s       $f0, $f17 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe34) {
            ctx->pc = 0x12FE3Cu;
            goto label_12fe3c;
        }
    }
    ctx->pc = 0x12FE3Cu;
label_12fe3c:
    // 0x12fe3c: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x12fe3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe40: 0x0  nop
    ctx->pc = 0x12fe40u;
    // NOP
    // 0x12fe44: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE44u;
    {
        const bool branch_taken_0x12fe44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE44u;
            // 0x12fe48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe44) {
            ctx->pc = 0x12FE54u;
            goto label_12fe54;
        }
    }
    ctx->pc = 0x12FE4Cu;
    // 0x12fe4c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x12FE4Cu;
    {
        const bool branch_taken_0x12fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe4c) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FE54u;
label_12fe54:
    // 0x12fe54: 0x46117836  c.le.s      $f15, $f17
    ctx->pc = 0x12fe54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe58: 0x0  nop
    ctx->pc = 0x12fe58u;
    // NOP
    // 0x12fe5c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x12FE5Cu;
    {
        const bool branch_taken_0x12fe5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fe5c) {
            ctx->pc = 0x12FE80u;
            goto label_12fe80;
        }
    }
    ctx->pc = 0x12FE64u;
    // 0x12fe64: 0x46137836  c.le.s      $f15, $f19
    ctx->pc = 0x12fe64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe68: 0x0  nop
    ctx->pc = 0x12fe68u;
    // NOP
    // 0x12fe6c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x12FE6Cu;
    {
        const bool branch_taken_0x12fe6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE6Cu;
            // 0x12fe70: 0x46009806  mov.s       $f0, $f19 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[19]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe6c) {
            ctx->pc = 0x12FE78u;
            goto label_12fe78;
        }
    }
    ctx->pc = 0x12FE74u;
    // 0x12fe74: 0x46007806  mov.s       $f0, $f15
    ctx->pc = 0x12fe74u;
    ctx->f[0] = FPU_MOV_S(ctx->f[15]);
label_12fe78:
    // 0x12fe78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FE78u;
    {
        const bool branch_taken_0x12fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe78) {
            ctx->pc = 0x12FE98u;
            goto label_12fe98;
        }
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x46138836  c.le.s      $f17, $f19
    ctx->pc = 0x12fe80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe84: 0x0  nop
    ctx->pc = 0x12fe84u;
    // NOP
    // 0x12fe88: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE88u;
    {
        const bool branch_taken_0x12fe88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE88u;
            // 0x12fe8c: 0x46009806  mov.s       $f0, $f19 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[19]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe88) {
            ctx->pc = 0x12FE98u;
            goto label_12fe98;
        }
    }
    ctx->pc = 0x12FE90u;
    // 0x12fe90: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12FE90u;
    {
        const bool branch_taken_0x12fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE90u;
            // 0x12fe94: 0x46008806  mov.s       $f0, $f17 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe90) {
            ctx->pc = 0x12FE98u;
            goto label_12fe98;
        }
    }
    ctx->pc = 0x12FE98u;
label_12fe98:
    // 0x12fe98: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x12fe98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe9c: 0x0  nop
    ctx->pc = 0x12fe9cu;
    // NOP
    // 0x12fea0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FEA0u;
    {
        const bool branch_taken_0x12fea0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEA0u;
            // 0x12fea4: 0x460e8041  sub.s       $f1, $f16, $f14 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[16], ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fea0) {
            ctx->pc = 0x12FEB0u;
            goto label_12feb0;
        }
    }
    ctx->pc = 0x12FEA8u;
    // 0x12fea8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x12FEA8u;
    {
        const bool branch_taken_0x12fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEA8u;
            // 0x12feac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fea8) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FEB0u;
label_12feb0:
    // 0x12feb0: 0x460f6801  sub.s       $f0, $f13, $f15
    ctx->pc = 0x12feb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x12feb4: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x12feb4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12feb8: 0x460f8881  sub.s       $f2, $f17, $f15
    ctx->pc = 0x12feb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[17], ctx->f[15]);
    // 0x12febc: 0x460e6001  sub.s       $f0, $f12, $f14
    ctx->pc = 0x12febcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x12fec0: 0x4600119d  msub.s      $f6, $f2, $f0
    ctx->pc = 0x12fec0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x12fec4: 0x46109141  sub.s       $f5, $f18, $f16
    ctx->pc = 0x12fec4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[18], ctx->f[16]);
    // 0x12fec8: 0x46116901  sub.s       $f4, $f13, $f17
    ctx->pc = 0x12fec8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[13], ctx->f[17]);
    // 0x12fecc: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x12feccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x12fed0: 0x46106081  sub.s       $f2, $f12, $f16
    ctx->pc = 0x12fed0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[16]);
    // 0x12fed4: 0x46119901  sub.s       $f4, $f19, $f17
    ctx->pc = 0x12fed4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[19], ctx->f[17]);
    // 0x12fed8: 0x4602211d  msub.s      $f4, $f4, $f2
    ctx->pc = 0x12fed8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x12fedc: 0x461270c1  sub.s       $f3, $f14, $f18
    ctx->pc = 0x12fedcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[14], ctx->f[18]);
    // 0x12fee0: 0x46136881  sub.s       $f2, $f13, $f19
    ctx->pc = 0x12fee0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[19]);
    // 0x12fee4: 0x46137841  sub.s       $f1, $f15, $f19
    ctx->pc = 0x12fee4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[19]);
    // 0x12fee8: 0x46126001  sub.s       $f0, $f12, $f18
    ctx->pc = 0x12fee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[18]);
    // 0x12feec: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x12feecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x12fef0: 0x4600085d  msub.s      $f1, $f1, $f0
    ctx->pc = 0x12fef0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x12fef4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12fef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fef8: 0x0  nop
    ctx->pc = 0x12fef8u;
    // NOP
    // 0x12fefc: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x12fefcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ff00: 0x0  nop
    ctx->pc = 0x12ff00u;
    // NOP
    // 0x12ff04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FF04u;
    {
        const bool branch_taken_0x12ff04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF04u;
            // 0x12ff08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff04) {
            ctx->pc = 0x12FF14u;
            goto label_12ff14;
        }
    }
    ctx->pc = 0x12FF0Cu;
    // 0x12ff0c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12FF0Cu;
    {
        const bool branch_taken_0x12ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff0c) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FF14u;
label_12ff14:
    // 0x12ff14: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x12ff14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ff18: 0x0  nop
    ctx->pc = 0x12ff18u;
    // NOP
    // 0x12ff1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FF1Cu;
    {
        const bool branch_taken_0x12ff1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF1Cu;
            // 0x12ff20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff1c) {
            ctx->pc = 0x12FF2Cu;
            goto label_12ff2c;
        }
    }
    ctx->pc = 0x12FF24u;
    // 0x12ff24: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x12FF24u;
    {
        const bool branch_taken_0x12ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff24) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FF2Cu;
label_12ff2c:
    // 0x12ff2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12ff2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ff30: 0x0  nop
    ctx->pc = 0x12ff30u;
    // NOP
    // 0x12ff34: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FF34u;
    {
        const bool branch_taken_0x12ff34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF34u;
            // 0x12ff38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff34) {
            ctx->pc = 0x12FF44u;
            goto label_12ff44;
        }
    }
    ctx->pc = 0x12FF3Cu;
    // 0x12ff3c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12FF3Cu;
    {
        const bool branch_taken_0x12ff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff3c) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FF44u;
label_12ff44:
    // 0x12ff44: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x12ff44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ff48: 0x0  nop
    ctx->pc = 0x12ff48u;
    // NOP
    // 0x12ff4c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x12FF4Cu;
    {
        const bool branch_taken_0x12ff4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ff4c) {
            ctx->pc = 0x12FF7Cu;
            goto label_12ff7c;
        }
    }
    ctx->pc = 0x12FF54u;
    // 0x12ff54: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x12ff54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ff58: 0x0  nop
    ctx->pc = 0x12ff58u;
    // NOP
    // 0x12ff5c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x12FF5Cu;
    {
        const bool branch_taken_0x12ff5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ff5c) {
            ctx->pc = 0x12FF7Cu;
            goto label_12ff7c;
        }
    }
    ctx->pc = 0x12FF64u;
    // 0x12ff64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12ff64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ff68: 0x0  nop
    ctx->pc = 0x12ff68u;
    // NOP
    // 0x12ff6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FF6Cu;
    {
        const bool branch_taken_0x12ff6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF6Cu;
            // 0x12ff70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff6c) {
            ctx->pc = 0x12FF7Cu;
            goto label_12ff7c;
        }
    }
    ctx->pc = 0x12FF74u;
    // 0x12ff74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12FF74u;
    {
        const bool branch_taken_0x12ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff74) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FF7Cu;
label_12ff7c:
    // 0x12ff7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12ff7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ff80: 0x0  nop
    ctx->pc = 0x12ff80u;
    // NOP
    // 0x12ff84: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x12ff84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ff88: 0x0  nop
    ctx->pc = 0x12ff88u;
    // NOP
    // 0x12ff8c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x12FF8Cu;
    {
        const bool branch_taken_0x12ff8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF8Cu;
            // 0x12ff90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff8c) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FF94u;
    // 0x12ff94: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x12ff94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ff98: 0x0  nop
    ctx->pc = 0x12ff98u;
    // NOP
    // 0x12ff9c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x12FF9Cu;
    {
        const bool branch_taken_0x12ff9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ff9c) {
            ctx->pc = 0x12FFBCu;
            goto label_12ffbc;
        }
    }
    ctx->pc = 0x12FFA4u;
    // 0x12ffa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12ffa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ffa8: 0x0  nop
    ctx->pc = 0x12ffa8u;
    // NOP
    // 0x12ffac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FFACu;
    {
        const bool branch_taken_0x12ffac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FFACu;
            // 0x12ffb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffac) {
            ctx->pc = 0x12FFBCu;
            goto label_12ffbc;
        }
    }
    ctx->pc = 0x12FFB4u;
    // 0x12ffb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12FFB4u;
    {
        const bool branch_taken_0x12ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ffb4) {
            ctx->pc = 0x12FFC0u;
            goto label_12ffc0;
        }
    }
    ctx->pc = 0x12FFBCu;
label_12ffbc:
    // 0x12ffbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ffbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ffc0:
    // 0x12ffc0: 0x3e00008  jr          $ra
    ctx->pc = 0x12FFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FFC8u;
}
