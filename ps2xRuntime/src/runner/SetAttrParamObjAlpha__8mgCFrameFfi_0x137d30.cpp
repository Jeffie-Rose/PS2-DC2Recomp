#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAttrParamObjAlpha__8mgCFrameFfi
// Address: 0x137d30 - 0x137d9c
void SetAttrParamObjAlpha__8mgCFrameFfi_0x137d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAttrParamObjAlpha__8mgCFrameFfi_0x137d30");
#endif

    switch (ctx->pc) {
        case 0x137d64u: goto label_137d64;
        case 0x137d74u: goto label_137d74;
        default: break;
    }

    ctx->pc = 0x137d30u;

label_137d30:
    // 0x137d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137d38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137d3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x137d3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x137d40: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x137d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x137d44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137D44u;
    {
        const bool branch_taken_0x137d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D44u;
            // 0x137d48: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d44) {
            ctx->pc = 0x137D50u;
            goto label_137d50;
        }
    }
    ctx->pc = 0x137D4Cu;
    // 0x137d4c: 0xe4740044  swc1        $f20, 0x44($v1)
    ctx->pc = 0x137d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_137d50:
    // 0x137d50: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x137D50u;
    {
        const bool branch_taken_0x137d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x137d50) {
            ctx->pc = 0x137D88u;
            goto label_137d88;
        }
    }
    ctx->pc = 0x137D58u;
    // 0x137d58: 0x8c900058  lw          $s0, 0x58($a0)
    ctx->pc = 0x137d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x137d5c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x137D5Cu;
    {
        const bool branch_taken_0x137d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137d5c) {
            ctx->pc = 0x137D84u;
            goto label_137d84;
        }
    }
    ctx->pc = 0x137D64u;
label_137d64:
    // 0x137d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137d6c: 0xc04df4c  jal         func_137D30
    ctx->pc = 0x137D6Cu;
    SET_GPR_U32(ctx, 31, 0x137D74u);
    ctx->pc = 0x137D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D6Cu;
            // 0x137d70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137D30u;
    goto label_137d30;
    ctx->pc = 0x137D74u;
label_137d74:
    // 0x137d74: 0x8e10005c  lw          $s0, 0x5C($s0)
    ctx->pc = 0x137d74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x137d78: 0x0  nop
    ctx->pc = 0x137d78u;
    // NOP
    // 0x137d7c: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137D7Cu;
    {
        const bool branch_taken_0x137d7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x137d7c) {
            ctx->pc = 0x137D64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137d64;
        }
    }
    ctx->pc = 0x137D84u;
label_137d84:
    // 0x137d84: 0x0  nop
    ctx->pc = 0x137d84u;
    // NOP
label_137d88:
    // 0x137d88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137d8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x137d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137d90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137d94: 0x3e00008  jr          $ra
    ctx->pc = 0x137D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D94u;
            // 0x137d98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137D9Cu;
}
