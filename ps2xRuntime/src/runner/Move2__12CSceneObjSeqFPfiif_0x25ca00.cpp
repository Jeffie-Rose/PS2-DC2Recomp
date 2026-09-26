#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Move2__12CSceneObjSeqFPfiif
// Address: 0x25ca00 - 0x25ca7c
void Move2__12CSceneObjSeqFPfiif_0x25ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move2__12CSceneObjSeqFPfiif_0x25ca00");
#endif

    switch (ctx->pc) {
        case 0x25ca30u: goto label_25ca30;
        case 0x25ca50u: goto label_25ca50;
        default: break;
    }

    ctx->pc = 0x25ca00u;

    // 0x25ca00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25ca04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25ca08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25ca0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25ca10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25ca10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25ca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25ca18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25ca18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25ca20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25ca20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25ca24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25ca28: 0xc097100  jal         func_25C400
    ctx->pc = 0x25CA28u;
    SET_GPR_U32(ctx, 31, 0x25CA30u);
    ctx->pc = 0x25CA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA28u;
            // 0x25ca2c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C400u;
    if (runtime->hasFunction(0x25C400u)) {
        auto targetFn = runtime->lookupFunction(0x25C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA30u; }
        if (ctx->pc != 0x25CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA30u; }
        if (ctx->pc != 0x25CA30u) { return; }
    }
    ctx->pc = 0x25CA30u;
label_25ca30:
    // 0x25ca30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca34: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CA34u;
    {
        const bool branch_taken_0x25ca34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca34) {
            ctx->pc = 0x25CA5Cu;
            goto label_25ca5c;
        }
    }
    ctx->pc = 0x25CA3Cu;
    // 0x25ca3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ca40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25ca40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25ca48: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25CA48u;
    SET_GPR_U32(ctx, 31, 0x25CA50u);
    ctx->pc = 0x25CA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA48u;
            // 0x25ca4c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA50u; }
        if (ctx->pc != 0x25CA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA50u; }
        if (ctx->pc != 0x25CA50u) { return; }
    }
    ctx->pc = 0x25CA50u;
label_25ca50:
    // 0x25ca50: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x25ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x25ca54: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x25ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x25ca58: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x25ca58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_25ca5c:
    // 0x25ca5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25ca5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ca60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25ca64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25ca64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ca68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25ca68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ca6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25ca6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ca70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25ca70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ca74: 0x3e00008  jr          $ra
    ctx->pc = 0x25CA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA74u;
            // 0x25ca78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CA7Cu;
}
