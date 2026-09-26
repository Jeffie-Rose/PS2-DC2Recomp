#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotion__12CSceneObjSeqFPcif
// Address: 0x25cf20 - 0x25cf90
void SetMotion__12CSceneObjSeqFPcif_0x25cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotion__12CSceneObjSeqFPcif_0x25cf20");
#endif

    switch (ctx->pc) {
        case 0x25cf48u: goto label_25cf48;
        case 0x25cf68u: goto label_25cf68;
        default: break;
    }

    ctx->pc = 0x25cf20u;

    // 0x25cf20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25cf24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25cf28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25cf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25cf2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25cf30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25cf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25cf38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25cf38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25cf3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25cf40: 0xc097130  jal         func_25C4C0
    ctx->pc = 0x25CF40u;
    SET_GPR_U32(ctx, 31, 0x25CF48u);
    ctx->pc = 0x25CF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CF40u;
            // 0x25cf44: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C4C0u;
    if (runtime->hasFunction(0x25C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x25C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF48u; }
        if (ctx->pc != 0x25CF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextMotSeq__12CSceneObjSeqFv_0x25c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF48u; }
        if (ctx->pc != 0x25CF48u) { return; }
    }
    ctx->pc = 0x25CF48u;
label_25cf48:
    // 0x25cf48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cf48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf4c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CF4Cu;
    {
        const bool branch_taken_0x25cf4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cf4c) {
            ctx->pc = 0x25CF74u;
            goto label_25cf74;
        }
    }
    ctx->pc = 0x25CF54u;
    // 0x25cf54: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x25cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x25cf58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25cf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25cf60: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25CF60u;
    SET_GPR_U32(ctx, 31, 0x25CF68u);
    ctx->pc = 0x25CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CF60u;
            // 0x25cf64: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF68u; }
        if (ctx->pc != 0x25CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CF68u; }
        if (ctx->pc != 0x25CF68u) { return; }
    }
    ctx->pc = 0x25CF68u;
label_25cf68:
    // 0x25cf68: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x25cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x25cf6c: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x25cf6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x25cf70: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x25cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_25cf74:
    // 0x25cf74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25cf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cf78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25cf7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25cf7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cf80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25cf80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cf84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25cf84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cf88: 0x3e00008  jr          $ra
    ctx->pc = 0x25CF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CF88u;
            // 0x25cf8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CF90u;
}
