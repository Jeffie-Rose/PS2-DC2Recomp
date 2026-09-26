#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPosInOutFor2P__Fffffff
// Address: 0x1511d0 - 0x151270
void CheckPosInOutFor2P__Fffffff_0x1511d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPosInOutFor2P__Fffffff_0x1511d0");
#endif

    ctx->pc = 0x1511d0u;

    // 0x1511d0: 0x460e6034  c.lt.s      $f12, $f14
    ctx->pc = 0x1511d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1511d4: 0x0  nop
    ctx->pc = 0x1511d4u;
    // NOP
    // 0x1511d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1511D8u;
    {
        const bool branch_taken_0x1511d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1511DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511D8u;
            // 0x1511dc: 0x46007006  mov.s       $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511d8) {
            ctx->pc = 0x1511E8u;
            goto label_1511e8;
        }
    }
    ctx->pc = 0x1511E0u;
    // 0x1511e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1511E0u;
    {
        const bool branch_taken_0x1511e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1511E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511E0u;
            // 0x1511e4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511e0) {
            ctx->pc = 0x1511ECu;
            goto label_1511ec;
        }
    }
    ctx->pc = 0x1511E8u;
label_1511e8:
    // 0x1511e8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1511e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1511ec:
    // 0x1511ec: 0x460f6834  c.lt.s      $f13, $f15
    ctx->pc = 0x1511ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1511f0: 0x0  nop
    ctx->pc = 0x1511f0u;
    // NOP
    // 0x1511f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1511F4u;
    {
        const bool branch_taken_0x1511f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1511F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511F4u;
            // 0x1511f8: 0x46007846  mov.s       $f1, $f15 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511f4) {
            ctx->pc = 0x151204u;
            goto label_151204;
        }
    }
    ctx->pc = 0x1511FCu;
    // 0x1511fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1511FCu;
    {
        const bool branch_taken_0x1511fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1511FCu;
            // 0x151200: 0x46006846  mov.s       $f1, $f13 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511fc) {
            ctx->pc = 0x151208u;
            goto label_151208;
        }
    }
    ctx->pc = 0x151204u;
label_151204:
    // 0x151204: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x151204u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
label_151208:
    // 0x151208: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x151208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15120c: 0x0  nop
    ctx->pc = 0x15120cu;
    // NOP
    // 0x151210: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x151210u;
    {
        const bool branch_taken_0x151210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151210u;
            // 0x151214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151210) {
            ctx->pc = 0x151220u;
            goto label_151220;
        }
    }
    ctx->pc = 0x151218u;
    // 0x151218: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x151218u;
    {
        const bool branch_taken_0x151218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151218) {
            ctx->pc = 0x151268u;
            goto label_151268;
        }
    }
    ctx->pc = 0x151220u;
label_151220:
    // 0x151220: 0x46107034  c.lt.s      $f14, $f16
    ctx->pc = 0x151220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151224: 0x0  nop
    ctx->pc = 0x151224u;
    // NOP
    // 0x151228: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x151228u;
    {
        const bool branch_taken_0x151228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15122Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151228u;
            // 0x15122c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151228) {
            ctx->pc = 0x151238u;
            goto label_151238;
        }
    }
    ctx->pc = 0x151230u;
    // 0x151230: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x151230u;
    {
        const bool branch_taken_0x151230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151230) {
            ctx->pc = 0x151268u;
            goto label_151268;
        }
    }
    ctx->pc = 0x151238u;
label_151238:
    // 0x151238: 0x46018834  c.lt.s      $f17, $f1
    ctx->pc = 0x151238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15123c: 0x0  nop
    ctx->pc = 0x15123cu;
    // NOP
    // 0x151240: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x151240u;
    {
        const bool branch_taken_0x151240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151240u;
            // 0x151244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151240) {
            ctx->pc = 0x151250u;
            goto label_151250;
        }
    }
    ctx->pc = 0x151248u;
    // 0x151248: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151248u;
    {
        const bool branch_taken_0x151248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151248) {
            ctx->pc = 0x151268u;
            goto label_151268;
        }
    }
    ctx->pc = 0x151250u;
label_151250:
    // 0x151250: 0x46117834  c.lt.s      $f15, $f17
    ctx->pc = 0x151250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151254: 0x0  nop
    ctx->pc = 0x151254u;
    // NOP
    // 0x151258: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x151258u;
    {
        const bool branch_taken_0x151258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151258u;
            // 0x15125c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151258) {
            ctx->pc = 0x151264u;
            goto label_151264;
        }
    }
    ctx->pc = 0x151260u;
    // 0x151260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151264:
    // 0x151264: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x151264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_151268:
    // 0x151268: 0x3e00008  jr          $ra
    ctx->pc = 0x151268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151270u;
}
